/*
checking out sublime text's syntax highlighting for cpp.
also a good excersize in using gcc from the cli.
brianc2788@gmail.com
*/
#include <cstdlib>
#include <stdio.h>
#include <ctime>

int nRandomNumber();

int main(int argc,char* argv[]){
	// Seed rand and print title, et. al.
	printf("> Writing cpp with Sublime Text.\n"\
		   "> Let's get a random integer and print it...\n\n");

	bool bRun = 1;

	while(bRun){
		int randnum = nRandomNumber();
		printf("Random Number: %d\nTry again? (Press y or n)\n",randnum);
		if (getchar() != 'y'){
			bRun = 0;
		}
		// Flush/trim the trailing '\n'.
		getchar();
	}


	return 0;
}

// Returns a random integer; 1-100.
int nRandomNumber(){
	return ((rand() % 100) + 1);
}