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
#include <ctime>
#include <SDL2/SDL.h>

const int screenW = 640;
const int screenH = 480;

SDL_Window* pWin1 = nullptr;
SDL_Renderer* pRendererMain = nullptr;

bool init();    //init SDL subsystems, create window & renderer.
void close();    //free resources & quit.
void render(); //clear & present renderer.
bool events();  //handle events. temporarily, returns a boolean.

int main(int argc,char* argv[]){
    if(init()){
        bool bRunning = true;
        while(bRunning){
            bRunning = events();
            render();
            SDL_Delay(500); //give the cpu a break...
        }
    }
    else{
        printf("Aborting...\n");
        close();
        return 1;
    }

    // free resources & quit.
    close();
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
            pRendererMain = SDL_CreateRenderer(pWin1,-1,SDL_RENDERER_ACCELERATED);
            if(pRendererMain != nullptr){
                //randomly set draw color to R,G, or B.
                srand(time(nullptr));
                int rcolor = rand() % 3;
                printf("%d\n",rcolor);
                if(rcolor == 0){
                    SDL_SetRenderDrawColor(pRendererMain, 0xFF,0x0,0x0,0xFF);
                }
                else if(rcolor == 1){
                    SDL_SetRenderDrawColor(pRendererMain, 0x0,0xFF,0x0,0xFF);
                }
                else if(rcolor == 2){
                    SDL_SetRenderDrawColor(pRendererMain, 0x0,0x0,0xFF,0xFF);
                }
                else{
                    SDL_SetRenderDrawColor(pRendererMain, 0x0,0x0,0x0,0xFF);
                }
                
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
void close(){
    SDL_DestroyWindow(pWin1);
    SDL_DestroyRenderer(pRendererMain);
    SDL_Quit();
}

void render(){
    SDL_RenderClear(pRendererMain);
    SDL_RenderPresent(pRendererMain);
}

bool events(){
    SDL_Event event;
    while(SDL_PollEvent(&event) != 0){
        if(event.type == SDL_QUIT){
            return false;
        }
        else{
            continue;
        }
    }
    return true;
}