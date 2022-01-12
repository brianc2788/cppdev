/*
playing with C.
*/
#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){
    puts("testing the 'puts()' function.");
    printf("pretty cool, i guess. adds a newline automatically.");
    printf("this is a seperate printf().... incomming newline.\n");
    printf("\nPress ENTER to exit.");
    getchar();
    return 0;
}