// implementation file for engine1.h
#include "engine1.h"
Engine1::Engine1() { /* CTOR */ };
Engine1::~Engine1() { /* DTOR */ };

bool Engine1::init(const char* win_title, int screen_w, int screen_h, int flags){
    // returns true if succeeds. false if not.
    if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) >= 0){
        pWinMain = SDL_CreateWindow(win_title,
                                    SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,
                                    screen_w,screen_h,
                                    flags);
        if(pWinMain != nullptr){
            pRendMain = SDL_CreateRenderer(pWinMain,-1,SDL_RENDERER_ACCELERATED);
            if(pRendMain != nullptr){
                SDL_SetRenderDrawColor(pRendMain, 0x0,0x0,0x0,0xFF);
            }
            else{
                printf("Failed to create renderer.\n%s",SDL_GetError());
                return false;
            }
        }
        else{
            printf("Failed to create the main window.\n%s",SDL_GetError());
            return false;
        }
    }
    else{
        printf("Failed to initialize SDL Subsystems.\n%s",SDL_GetError());
        return false;
    }

    return true;
}

void Engine1::run(){
    while(bRunning){
        event_loop(event);
        update();
        wait(500);
    }
}

void Engine1::draw_color(int r, int g, int b){
    SDL_SetRenderDrawColor(pRendMain, r,g,b,0xFF);
}

void Engine1::update(){
    SDL_RenderClear(pRendMain);
    SDL_RenderPresent(pRendMain);
}

void Engine1::wait(int ms){
    SDL_Delay(ms);
}

void Engine1::event_loop(SDL_Event evnt){
    while(SDL_PollEvent(&evnt) != 0){
        if(evnt.type == SDL_QUIT) { bRunning = false; }
        else if(evnt.type == SDL_KEYDOWN){
            switch(evnt.key.keysym.sym){
                case SDLK_r:
                draw_color(0xFF,0x0,0x0);
                break;
                case SDLK_g:
                draw_color(0x0,0xFF,0x0);
                break;
                case SDLK_b:
                draw_color(0x0,0x0,0xFF);
                break;
                default:
                break;
            }
        }
    }
}

void Engine1::quit_e1(){
    SDL_DestroyRenderer(pRendMain);
    SDL_DestroyWindow(pWinMain);
    SDL_Quit();
}