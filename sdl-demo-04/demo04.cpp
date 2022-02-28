/*************************************************
# sdl-demo-04 #
---------------
Rewriting sdl demo project with OOP.
Creates a window and a rendering, waits for user's quit event.

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