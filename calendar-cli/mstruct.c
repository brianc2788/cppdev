/*******************************************************************************
* monthstruct.c
* -------------
* Adapting "calendar-cli" project to a pure C implementation.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define N_MONTHS 12
#define COL_WIDTH 15

typedef struct {
	char name[9];	/* Longest month name is Sept (9 chars). */
	int length;
} Month;

enum {
	ENUM_JAN = 0,
	ENUM_FEB,
	ENUM_MAR,
	ENUM_APR,
	ENUM_MAY,
	ENUM_JUN,
	ENUM_JUL,
	ENUM_AUG,
	ENUM_SEP,
	ENUM_OCT,
	ENUM_NOV,
	ENUM_DEC	/* 11 */
};

void formatRow1(char col1[], char col2[]);
void formatRow2(char mname[], int mlen);
void initMonths(Month mArray[]);

int main(int argc, char *argv[]){

	Month months[N_MONTHS];
	initMonths(months);

	formatRow1("NAME", "DAYS");
	for (int n = 0; n < N_MONTHS; ++n){
		formatRow2(months[n].name, months[n].length);
	}

	return 0;
}

void formatRow1(char col1[], char col2[]){
	printf("%s", col1);
	for (int n = 0; n < (COL_WIDTH - strlen(col1)); ++n){
		printf(" ");
	}
	printf("%s\n", col2);
}

void formatRow2(char mname[], int mlen){
	printf("%s", mname);
	for (int n = 0; n < (COL_WIDTH - strlen(mname)); ++n){
		printf(" ");
	}
	printf("%d\n", mlen);
}

void initMonths(Month mArray[N_MONTHS]) {

	/* JANUARY */
	strcpy(mArray[ENUM_JAN].name, "January");
	mArray[ENUM_JAN].length = 31;

	/* FEBRUARY */
	strcpy(mArray[ENUM_FEB].name, "February");
	mArray[ENUM_FEB].length = 28;

	/* MARCH */
	strcpy(mArray[ENUM_MAR].name, "March");
	mArray[ENUM_MAR].length = 31;

	/* APRIL */
	strcpy(mArray[ENUM_APR].name, "April");
	mArray[ENUM_APR].length = 30;

	/* MAY */
	strcpy(mArray[ENUM_MAY].name, "May");
	mArray[ENUM_MAY].length = 31;

	/* JUNE */
	strcpy(mArray[ENUM_JUN].name, "June");
	mArray[ENUM_JUN].length = 30;

	/* JULY */
	strcpy(mArray[ENUM_JUL].name, "July");
	mArray[ENUM_JUL].length = 31;

	/* AUGUST */
	strcpy(mArray[ENUM_AUG].name, "August");
	mArray[ENUM_AUG].length = 31;

	/* SEPTEMBER */
	strcpy(mArray[ENUM_SEP].name, "September");
	mArray[ENUM_SEP].length = 30;

	/* OCTOBER */
	strcpy(mArray[ENUM_OCT].name, "October");
	mArray[ENUM_OCT].length = 31;

	/* NOVEMBER */
	strcpy(mArray[ENUM_NOV].name, "November");
	mArray[ENUM_NOV].length = 31;

	/* DECEMBER */
	strcpy(mArray[ENUM_DEC].name, "December");
	mArray[ENUM_DEC].length = 31;

}