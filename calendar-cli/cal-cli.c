/*******************************************************************************
 * cal-cli.c
 * ---------
 * Pure C implementation of my calendar-cli project; originally written in
 * [bad] C++. Why? Because.
 * https://brianc2788.github.io/
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define TOTAL_MONTHS 12

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

enum {
	ENUM_SUN = 0,
	ENUM_MON,
	ENUM_TUES,
	ENUM_WED,
	ENUM_THURS,
	ENUM_FRI,
	ENUM_SAT
};

typedef struct {
	char Name[10];	// Sept is longest month name (9 characters, null terminator).
	int Length;		// Length of month (days).
} month;

void initMonths(month marray[]);

int main(int argc, char* argv[]){
	month monthArray[TOTAL_MONTHS];
	initMonths(monthArray);

	/* DEBUG - Print month attributes. */
	for (int n = 0; n < TOTAL_MONTHS; ++n){
		printf("%s - %d\n", monthArray[n].Name, monthArray[n].Length);
	}

	// Print total days in a non-leap year.
	int nDaysPerYear = 0;
	for (int n = 0; n < TOTAL_MONTHS; ++n){
		nDaysPerYear += monthArray[n].Length;
	}

	printf("\nTotal days in non-leap year: %d\n", nTotalDays);
	/* DEBUG END */

	return 0;
}

/* Populate array of month structs. */
void initMonths(month marray[]) {
	month mArray[TOTAL_MONTHS];

	/* JANUARY */
	strcpy(marray[ENUM_JAN].Name, "January");
	marray[ENUM_JAN].Length = 31;

	/* FEBRUARY */
	strcpy(marray[ENUM_FEB].Name, "February");
	marray[ENUM_FEB].Length = 28;

	/* MARCH */
	strcpy(marray[ENUM_MAR].Name, "March");
	marray[ENUM_MAR].Length = 31;

	/* APRIL */
	strcpy(marray[ENUM_APR].Name, "April");
	marray[ENUM_APR].Length = 30;

	/* MAY */
	strcpy(marray[ENUM_MAY].Name, "May");
	marray[ENUM_MAY].Length = 31;

	/* JUNE */
	strcpy(marray[ENUM_JUN].Name, "June");
	marray[ENUM_JUN].Length = 30;

	/* JULY */
	strcpy(marray[ENUM_JUL].Name, "July");
	marray[ENUM_JUL].Length = 31;

	/* AUGUST */
	strcpy(marray[ENUM_AUG].Name, "August");
	marray[ENUM_AUG].Length = 31;

	/* SEPTEMBER */
	strcpy(marray[ENUM_SEP].Name, "September");
	marray[ENUM_SEP].Length = 30;

	/* OCTOBER */
	strcpy(marray[ENUM_OCT].Name, "October");
	marray[ENUM_OCT].Length = 31;

	/* NOVEMBER */
	strcpy(marray[ENUM_NOV].Name, "November");
	marray[ENUM_NOV].Length = 30;

	/* DECEMBER */
	strcpy(marray[ENUM_DEC].Name, "December");
	marray[ENUM_DEC].Length = 31;
}