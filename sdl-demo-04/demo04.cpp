/*************************************************
# sdl-demo-04 #
---------------
Using SDL to create a window and render an image.
OOP-design only intended to render an image, wait
five seconds, and clean up.
Demo 05 will probably get into texture-object
factories, events, etc.
I have done similar projects with SDL, but this
one is going to better utilize a renderer with
textures that utilize hardware (gpu) features,
rather than surfaces (drawing with cpu).

Authored by brianc2788@gmail.com
hosted on http://www.github.com/user5260/cpp-projects/sdl-demo-04/
*************************************************/
#include "engine_zero.h"
#include <string.h>

int main(int argc,char* argv[]){
    EngineZero eng0;
    bool success = eng0.init("Demo 04",640,480,SDL_INIT_VIDEO|SDL_INIT_EVENTS,SDL_WINDOW_SHOWN);
    if(success){
        eng0.PrintOut("Init success.\n");
        eng0.RenderAndShow();
        eng0.WaitForQuitEvent();
        eng0.QuitE0();
    }
    else{
        eng0.PrintOut("Failed.\n");
        eng0.QuitE0();
    }
    return 0;
}