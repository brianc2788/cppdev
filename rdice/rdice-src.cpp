/*****************************************************/
// rdice v1
// created: 5/13/2021
// brianc2788@gmail.com
//
// another incarnation of my beloved 'roll-the-dice'
// rng program... lol?
//
// hint: use memory address (&)
//       when using scanf().
//
// -added "printf("\n")" to the main else if
//  instructions; in the main function, for
//  readability.
/*****************************************************/
#include <stdio.h>
#include <cstdlib>
#include <ctime>

void rDice(int dice);

int main(int argc, char* argv[]){
    srand(time(NULL));
    int nDice = 0;
    bool bRunning = 1;

    printf("::rdice version 1.0\n");
    printf("::Instructions:\n" \
           "::Enter 1-9 to roll dice\n" \
           "::Enter 0 to exit\n\n");

    while (bRunning){
        printf("Enter: ");
        scanf("%d", &nDice);

        if (nDice == 0){
            bRunning = 0;
        }
        else if (nDice < 10){
            rDice(nDice);
	    printf("\n");
        }
    }

    return 0;
}

void rDice(int dice){
    for (int i = 1; i <= dice; i++){
        printf("Roll #%d: %d\n", i, ((rand() % 6) + 1));
    }
}
