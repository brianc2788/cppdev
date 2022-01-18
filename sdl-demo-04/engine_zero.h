#ifndef ENGINE_ZERO_H
#define ENGINE_ZERO_H
#include <stdio.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class EngineZero {
public:
    EngineZero();
    ~EngineZero();
    bool init(const char* win_title,
              int screen_w, int screen_h,
              int iflags, int wflags);
    void QuitE0();
    void WaitForQuitEvent();
    void RenderAndShow();
    void PrintOut(char* msgout); //DEBUG
private:
    SDL_Window*     WindMain;
    SDL_Renderer*   RendMain;
    SDL_Event       event;

    SDL_Texture*    TestTexture;
    SDL_Rect        sRect;
    SDL_Rect        dRect;
};

#endif /* ENGINE_ZERO_H */