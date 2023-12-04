/*******************************************************************************
* blackjack_cli.c
* Console Blackjack
* Non-object
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    TODO:
    - Enumerate, evaluate cards.
    - Card data struct.
    - Populate a deck of cards.
    - Populate deck randomly or deal a random card.
*/

void initDeck();

int main(int argc, char* argv[]){
    srand(time(NULL));  // Seed PRNG with current time (sec since epoch).

    return 0;
}