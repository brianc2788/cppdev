/*******************************************************************************
 * month-arr.c
 * Preparing to rewrite "calendar-cli" in pure C.
 * Counting character arrays without strlen().
 * Store month information in a data structure.
*******************************************************************************/
#include <stdio.h>
//#include <string.h>

#define MONTHS 12
#define MAX_LENGTH 10	/* Characters plus null terminator. */

char chMonth[MONTHS][MAX_LENGTH] = { "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY",
						 "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER" };

int nDays[MONTHS] = { 31, 28, 31, 31, 30, 31, 30, 31, 30, 31, 30, 31 };

void printMonths();
int chCount(char carray[]);

int main(int argc, char *argv[]) {
	printMonths();

	printf("\nCharacter count for month names\n");

	for (int n = 0; n < MONTHS; ++n){
		int mLength = chCount(chMonth[n]);

		printf("%s", chMonth[n]);
		for (int ws = 0; ws < (10 - mLength); ++ws)
			printf(" ");
		printf("%d\n", mLength);
	}

	return 0;
}

void printMonths(){
	int nWidth = 10;
	int nSep = 0;

	for (int n = 0; n < MONTHS; ++n) {
		printf("%s", chMonth[n]);

		nSep = nWidth - chCount(chMonth[n]);
		for (int n1 = 0; n1 < nSep; ++n1)
			printf(" ");

		printf(" %d\n", nDays[n]);
	}
}

int chCount(char carray[]){
	int nCount = 0;
	//int nArrSize = sizeof(carray);

	for (int n = 0; n < MAX_LENGTH; ++n){
		if (carray[n] == '\0')
			break;
		nCount++;
	}

	return nCount;
}