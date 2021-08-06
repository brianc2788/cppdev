/*
messing with std in/out as IO
for 'video'... as a screen...
*/
#include <stdio.h>
#include <string>

int main(int argc,char* argv[]){
    int screenW = 140;
    int screenH = 40;
    //init and create 'screen'.
    std::string strScreen;
    for (int x = 0; x <= (screenW + screenH); x++){
        strScreen.append("X");
    }

    // print the screen once.

    for (int x = 0; x <= screenH; x++){
        for (int y = 0; y <= screenW; y++){
            printf("%c",strScreen[y]);
        }
        printf("\n");
    }

    return 0;
}
