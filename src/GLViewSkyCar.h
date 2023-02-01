#pragma once

#include "GLView.h"

namespace Aftr
{
   class Camera;


/**
   \class GLViewSkyCar
   \author Scott Nykl 
   \brief A child of an abstract GLView. This class is the top-most manager of the module.

   Read \see GLView for important constructor and init information.

   \see GLView

    \{
*/

class GLViewSkyCar : public GLView
{
public:
   
   static GLViewSkyCar* New( const std::vector< std::string >& outArgs );
   virtual ~GLViewSkyCar();
   virtual void loadMap();
   virtual void updateWorld(); ///< Called once per frame
   ///< Called once at startup to build this module's scene
   virtual void createSkyCarWayPoints();
   
   virtual void onResizeWindow( GLsizei width, GLsizei height );
   virtual void onMouseDown( const SDL_MouseButtonEvent& e );
   virtual void onMouseUp( const SDL_MouseButtonEvent& e );
   virtual void onMouseMove( const SDL_MouseMotionEvent& e );
   virtual void onKeyDown( const SDL_KeyboardEvent& key );
   virtual void onKeyUp( const SDL_KeyboardEvent& key );
   
protected:
    WO* SkyCar=nullptr;
    WO* obj=nullptr;
    int radius = 1;
    int y = 10;
    int z = 25;
   GLViewSkyCar( const std::vector< std::string >& args );
   virtual void onCreate();   
};

/** \} */

} //namespace Aftr
