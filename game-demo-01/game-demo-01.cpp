/************************************************
game-demo-01
------------
Game demo project powered by the SDL2
development library.

Authored by brianc2788@gmail.com
************************************************/
#include <stdio.h>
#include <SDL2/SDL.h>

const int screenW = 640;
const int screenH = 480;

int main(int argc,char* argv[]){
	SDL_Window* win1 = NULL;
	SDL_Surface* screenSurf = NULL;

	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		printf("SDL_Init() has failed.\nSDL Error: %s\n",SDL_GetError());
	}
	else{
		win1 = SDL_CreateWindow("Game Demo 01",
					SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,
					screenW,screenH,
					SDL_WINDOW_SHOWN);
		if(win1 == NULL){
			printf("Failed to create window.\nSDL Error: %s\n",SDL_GetError());
		}
		else{
			// Get screen surface.
			screenSurf = SDL_GetWindowSurface(win1);
			// Fill with white.
			SDL_FillRect(screenSurf, NULL, SDL_MapRGB(screenSurf->format,0xFF,0xFF,0xFF));

			SDL_UpdateWindowSurface(win1);

			/* EVENT LOOP */
			bool bRun = true;
			SDL_Event sdlevent;
			while(bRun){
				//Poll event queue.
				while (SDL_PollEvent(&sdlevent) != 0){
					if(sdlevent.type == SDL_QUIT){
						bRun = false;
					}
				}
			}
		}
	}

	//Cleanup & return statement.
	SDL_DestroyWindow(win1);
	SDL_Quit();

	return 0;
}
