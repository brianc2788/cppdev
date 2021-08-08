/*
Just want to build and compile my first SDL2
program in a GNU/Linux environment.
Seems easier than when on Windows, but
we'll see.

brianc2788@gmail.com
*/
#include <stdio.h>
#include <cstdlib>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

class SDLAPI{
public:
    SDLAPI();
    ~SDLAPI();
protected:
    const int nScreenW = 800;
    const int nScreenH = 600;
private:
    SDL_Window* WindowMain = NULL;
    SDL_Renderer* RendererMain = NULL;
};

SDLAPI::SDLAPI(){
    //constructor
    if (SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("SDL Error: %s\n",SDL_GetError());
    }
    else{
        WindowMain = SDL_CreateWindow("SDL Test Build",                                 //Title
                                      SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, //Window location
                                      nScreenW,nScreenH,                                //Window dimensions (WidthxHeight)
                                      SDL_WINDOW_SHOWN);                                //Other sdl window flags.
        if (WindowMain == NULL){
            printf("SDL Error: %s\n",SDL_GetError());
        }
        else{
            printf("Created window without error.\n");

            RendererMain = SDL_CreateRenderer(WindowMain, -1, SDL_RENDERER_ACCELERATED);
            if (RendererMain == NULL){
                printf("SDL Error: %s\n",SDL_GetError());
            }
            else{
                printf("Created RendererMain without error.\n");

                SDL_SetRenderDrawColor(RendererMain, 0xFF,0xFF,0xFF,0xFF);
                int imgFlags = IMG_INIT_PNG;
                if (!(IMG_Init(imgFlags) & imgFlags)){
                    printf("SDL_image has failed. IMG Error: %s\n",IMG_GetError());
                }
                else{
                    printf("Set render draw color & initialized SDL2_image without error.\n");
                }
            }
        }
    }
    printf("Initialized without errors.\n");
}

SDLAPI::~SDLAPI(){
    //destructor
    //destroy windows/assets, free memory.
    SDL_DestroyRenderer(RendererMain);
    SDL_DestroyWindow(WindowMain);
    IMG_Quit();
    SDL_Quit();
}

// Main
int main(int argc, char* argv[]){
    SDLAPI sdlobject;
    return 0;
}
