/*
* monthstruct.c
*/
#include <stdio.h>
#include <string.h>

typedef struct Month{
	char Name[9];
	int Length;
} mJan;

int main(int argc, char *argv[]){
	mJan.Name = "January";
	mJan.Length = 31;

	return 0;
}