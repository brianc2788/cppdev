/*******************************************************************************
 * main.cpp
 * Source file to examine the four phases of the compilation process.
 * 
 * -------------------
 * GCC phase switches:
 * -------------------
 * -E	PREPROCESSING
 * 		* Prints to stdout.
 * 		* Use -P switch to omit debugging output.
 * -S	COMPILATION
 * 		* Use -masm=intel to use Intel assembly syntax.
 * 		* Outputs file.s assembly file.
 * -c	ASSEMBLY
 * 		* Outputs OBJECT files (file.o) in machine code.
 * 
 * LINKING phase doesn't require a switch when given source code.
*******************************************************************************/
#include <stdio.h>

#define STRING0 "string zero"

void printStr0(){
	printf("%s\n", STRING0);
}

int main(int argc, char *argv[]) {
	printStr0();
	return 0;
}
