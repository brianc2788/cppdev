/*************************************************
# SHMUP DEMO 01
# brianc2788@gmail.com
*************************************************/
#include <stdio.h>
#include "engine1.h"

int main(int argc,char* argv[]){
    Engine1 e1;
    e1.init("demo03",640,480,SDL_WINDOW_SHOWN);
    e1.run();
    e1.quit_e1();
    return 0;
}