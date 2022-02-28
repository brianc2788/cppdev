/* Implementation of engine_zero. */
#include "engine_zero.h"

EngineZero::EngineZero() { /* CTOR */ };
EngineZero::~EngineZero() { /* DTOR */ };
/* Not putting QuitE0() in the destructor. */

bool EngineZero::init(const char* win_title, int screen_w, int screen_h, int iflags, int wflags){
    if (SDL_Init(iflags) != 0){
        printf("%s\n",SDL_GetError());
        return false;
    }
    else{
        WindMain = SDL_CreateWindow(win_title,SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,screen_w,screen_h,wflags);
        if (WindMain == nullptr){
            printf("%s\n",SDL_GetError());
            return false;
        }
        else{
            int imgFlags = IMG_INIT_PNG;
            if(!(IMG_Init(imgFlags) & imgFlags)){
                printf("%s\n",IMG_GetError());
                return false;
            }
            else{
                RendMain = SDL_CreateRenderer(WindMain,-1,SDL_RENDERER_ACCELERATED);
                if(RendMain == nullptr){
                    printf("%s\n",SDL_GetError());
                    return false;
                }
                else{
                    //blue bg to demonstrate transparency better.
                    SDL_SetRenderDrawColor(RendMain, 0x0,0x0,0xFF,0xFF);
                    SDL_Surface* tmpsurf = IMG_Load("assets/fighter1.png");
                    if (tmpsurf == nullptr){
                        printf("%s\n",IMG_GetError());
                        return false;
                    }
                    else{
                        TestTexture = SDL_CreateTextureFromSurface(RendMain,tmpsurf);
                        SDL_FreeSurface(tmpsurf);
                        if(TestTexture == nullptr){
                            printf("%s\n",SDL_GetError());
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

void EngineZero::QuitE0(){
    SDL_DestroyRenderer(RendMain);
    SDL_DestroyWindow(WindMain);
    SDL_DestroyTexture(TestTexture);
    
    IMG_Quit();
    SDL_Quit();
}

void EngineZero::WaitForQuitEvent(){
    // render then call this to wait for user quit event.
    bool bQuit = false;
    while(!bQuit){
        while(SDL_PollEvent(&event) != 0){
            if(event.type == SDL_QUIT){
                bQuit = true;
                break;
            }
        }
	//delay 200ms until SDL_GetTicks() gets implemented,
    //else, cpu just loops as hard as it can.
	SDL_Delay(200);
    }
}

void EngineZero::RenderAndShow(){
    SDL_QueryTexture(TestTexture,NULL,NULL,&sRect.w,&sRect.h);
    sRect.x = 0;
    sRect.y = 0;
    dRect.x = 0;
    dRect.y = 0;
    dRect.w = sRect.w;
    dRect.h = sRect.h;
    SDL_RenderClear(RendMain);
    SDL_RenderCopy(RendMain,TestTexture,&sRect,&dRect);
    SDL_RenderPresent(RendMain);
}

void EngineZero::PrintOut(char* text){
    printf("%s\n",text);
};
