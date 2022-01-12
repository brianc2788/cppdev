/************************************************/
// ASCII-Calc
// Ver 1, Build 71221
// brianc2788@gmail.com
// Quick-reference for checking values of ASCII
// characters.
// Notes:
// - app is not quite right;
// loop seems to execute one-too-many times and
// shows the output for whitespace before
// halting again to get input from the user.
// this is probably due to a trailing \n
// somewhere in the io stream - a minor issue.
// SOLVED:
// Added "scanf("%c");" at the end of the
// program loop. This will 'flush' the input
// stream, which, previously, had a trailing
// "\n" newline that was not being addressed.
// scanf() would get the character inputted by
// the user, leaving this newline. Thus, when
// the loop went back to the top to run again,
// scanf() would pick up this newline and count
// it as input. With the input stream now
// 'flushed', the program loop works as intended
// once, before the problem returns.
// Hope this wasn't too verbose.
/************************************************/
#include <stdio.h>
#include <stdbool.h>

int main(int argc,char* argv[]){
    char ch1 = ' ';
    int nval = 0;

    while(1){
        printf("ENTER: ");
        scanf("%c",&ch1);
        nval = ch1;
        printf("character: %c\nvalue: %d\n\n",ch1,nval);
	scanf("%c");
    }

    return 0;
}
