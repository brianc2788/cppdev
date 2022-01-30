/*************************************************
Cheat-sheet for C I/O...
Ok, back to The C Programming Language by K&R!
*************************************************/
#include <stdio.h>

int main(int argc, char* argv[]){
	printf("Enter a number (integer).\n");
	int usrDecimal = 0;
	scanf("%d",&usrDecimal);
	printf("%d\n",usrDecimal);

	char usrString[25] = "";
	printf("enter a string.\n");
	scanf("%s",&usrString);
	printf("%s\n",usrString);

	printf("\nEXITING...\n");

	return 0;
}