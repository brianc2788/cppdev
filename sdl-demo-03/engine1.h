/*************************************************
* engine1.h
*-----------
in the case of sdl-demo-03, this is just a
test in object-oriented design.
*Authored by brianc2788@gmail.com
*************************************************/
#pragma once
#ifndef ENGINE1_H
#define ENGINE1_H
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

class Engine1 {
public:
    Engine1();
    ~Engine1();
    bool init(const char* win_title, int screen_w, int screen_h, int flags);
    void run();
    void draw_color(int r, int g, int b);
    void update();
    void wait(int ms);
    void event_loop(SDL_Event evnt);
    void quit_e1();
    bool Running() { return bRunning; };

    SDL_Event event;
private:
    SDL_Window* pWinMain;
    SDL_Renderer* pRendMain;

    bool bRunning;
};

#endif /* ENGINE1_H */
