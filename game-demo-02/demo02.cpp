/*************************************************
# game-demo-02
# 2D game demo using SDL.
Starting another game demo project, but with
some different design choices.
Authored by
brianc2788@gmail.com
http://github.com/user5260/cpp-projects/game-demo-02
*************************************************/
#include <stdio.h>
#include <SDL2/SDL.h>

const int screenW = 640;
const int screenH = 480;

SDL_Window* pWin1 = nullptr;
SDL_Renderer* pRenderer1 = nullptr;

bool init(); //init SDL subsystems, create window & renderer.
void quit(); //free resources & quit.

int main(int argc,char* argv[]){
    if(init()){
        // Set draw color to black and present the window.
        SDL_SetRenderDrawColor(pRenderer1, 0,0,0,255);
        SDL_RenderClear(pRenderer1);
        SDL_RenderPresent(pRenderer1);

        // sleep 10 seconds.
        SDL_Delay(10000);
    }
    else{
        printf("Aborting...\n");
        quit();
        return 1;
    }

    // free resources & quit.
    quit();
    printf("DEBUG: Exiting without error...\n");

    return 0;
}

// Initialize SDL, create a window & renderer.
// Returns a boolean value.
bool init(){
    if(SDL_Init(SDL_INIT_VIDEO) >= 0){
        pWin1 = SDL_CreateWindow("Demo02",
                                 SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,
                                 screenW,screenH,
                                 SDL_WINDOW_SHOWN);
        if(pWin1 != nullptr){
            pRenderer1 = SDL_CreateRenderer(pWin1,-1,0); //SDL_RENDERER_ACCELERATED flag use?
            if(pRenderer1 != nullptr){
                return true;
            }
        }
    }
    else{
        printf("ABORT MSG:\nSDL Error Message:\n%s\n",SDL_GetError());
        return false;
    }
}

// Free the window & renderer. Quit SDL2.
void quit(){
    SDL_DestroyWindow(pWin1);
    SDL_DestroyRenderer(pRenderer1);
    SDL_Quit();
}