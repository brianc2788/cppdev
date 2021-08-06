/*

	CS121 Project 1 -
	Task:				Create a program that will display a calander year
						and month are entered by the user.

	project provides formulas for finding the first day of the year and
	testing if the given year is a leap year.

	function getFirstDay() init and takes the Floor variable introduced in the
	instructions, however, i dont know what floor is... what i do know is that
	i hardcoded to pass 1 as the floor parameter and it works. finds the
	first weekday of a new year flawlessly. 
	
	update 3/2: program displays january of user-input year.
				need to fix leapyear boolean and show the rest of the months.
				- just fixed the boolean. accurately returns true or false if
				  the year entered is a leap year. added inline if to output.
				- wrong. it's not completely accurate. need to modify to ||
				  OR ifs; i think. 2000 incorrectly comes up false.
				  (because it's divisible by 4? maybe &&...)
				- tried more testing on the getfirstday function. tried values
				  from around year 1200 - 3000 and all were correct.
				  just have to figure out how to accurately calculate leap
				  years.

	update 3/7: showMonth function is vastly expanded and now shows any month
				of any year entered by the user provided the value for month
				is 1-12 and year is not 0.
				- program increased to 411 lines.
				- many techniques and methods well demonstrated.
				- reworked leap year on paper. will implement later.
				- house cleaning.
	
	DISCLAIMER: some leap years still do not appear correctly, such as 2000
				which returns false when should be true. most other years,
				1988, 2016, 2020, etc. are accurate. i believe the program
				will always correctly return false for non-leap years.
				~99% accurate

*/

#include <iostream>
#include <iomanip> // just setw()
using namespace std;

int getFirstDay(int nYear);
bool bLeapYear(int nYear);
void showMonth(int firstDay, int year, int month);


int main() {

	bool bRunning = true;
	while (bRunning) {

		int nYear = 0;
		int nMonth = 0;

		cout << setw(20) << "Enter a date" << endl
			<< setw(20) << "Month MM: "; cin >> nMonth;
		cout << setw(20) << "Year YYYY: "; cin >> nYear;
		cout << endl;

		if (nYear == 0) {
			return false;
		}

		cout << nYear << " is " << (bLeapYear(nYear) == true ? "a leap year." : "not a leap year.") << endl << endl;

		showMonth(getFirstDay(nYear), nYear, nMonth);

	}
	
	return 0;
}

void showMonth(int firstDay, int year, int month) {

	cout << setw(23);

	switch (month) {
	case 1:
		cout << "JANUARY";
		break;
	case 2:
		cout << "FEBRUARY";
		break;
	case 3:
		cout << "MARCH";
		break;
	case 4:
		cout << "APRIL";
		break;
	case 5:
		cout << "MAY";
		break;
	case 6:
		cout << "JUNE";
		break;
	case 7:
		cout << "JULY";
		break;
	case 8:
		cout << "AUGUST";
		break;
	case 9:
		cout << "SEPTEMBER";
		break;
	case 10:
		cout << "OCTOBER";
		break;
	case 11:
		cout << "NOVEMBER";
		break;
	case 12:
		cout << "DECEMBER";
		break;
	default:
		break;
	}
	
	cout << setw(6) << year << endl;
	cout << setw(6) << "Sun" << setw(6) << "Mon" << setw(6) << "Tues" << setw(6) << "Wed" << setw(6) << "Thu" << setw(6) << "Fri" << setw(6) << "Sat" << endl;

	int countWeek = 1; // count spaces and days displayed within a week (7)
	int day = 1;	// count days of the month displayed
	
	if (month == 1) {
		// fill in spaces
		for (int x = 0; x < firstDay; x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		// fill in days
		while (day <= 31) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}

		cout << endl << endl;
	}
	else if (month == 2) {
		for (int x = 0; x < ((firstDay + 31) % 7); x++) {		// take firstDay (a number between 0 and 6 to represent the days of the week)
			cout << setw(6) << " ";								// and add the total number of days that occured already in the year. Sum % 7
			countWeek++;										// gives the first day of the week of that month. genius.
		}

		while (day <= (bLeapYear(year) == true ? 29 : 28)) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 3) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 59 : 60) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 31) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 4) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 90 : 91) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 30) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 5) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 120 : 121) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 31) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 6) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 151 : 152) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 30) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 7) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 181 : 182) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 31) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 8) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 212 : 213) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 31) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 9) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 243 : 244) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 30) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 10) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 273 : 274) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 31) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 11) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 304 : 305) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 30) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else if (month == 12) {
		for (int x = 0; x < (firstDay + (bLeapYear(year) == false ? 334 : 335) % 7); x++) {
			cout << setw(6) << " ";
			countWeek++;
		}

		while (day <= 31) {
			if (countWeek % 8 != 0) {
				cout << setw(6) << day;
				day++;
				countWeek++;
			}
			else {
				cout << endl;
				countWeek++;
			}
		}
		cout << endl << endl;
	}
	else {}
}

//
// getting rid of nFloor in the given equation:
// nFirstDay = ((nYear - 1) * 365) + (nFloor * ((nYear - 1) / 4)) - (nFloor * ((nYear - 1) / 100)) + (nFloor * ((nYear - 1) / 400));     + 1) % 7
// cant figure out what floor is and how to manipulate it to predict the first day of any month other than january, so it will always equal 1.
// thus there is no need.
//
int getFirstDay(int nYear) {		// floor is the sum of the number of past days in that year?? ex: jan = 1, feb = 31, march = 59, etc.  ??

	int nFirstDay;

	nFirstDay = ((nYear - 1) * 365) + ((nYear - 1) / 4) - ((nYear - 1) / 100) + ((nYear - 1) / 400);

	nFirstDay = (nFirstDay + 1) % 7;

	return nFirstDay;  // add past days with this value and % 7/8 to get first day of the week for following months?
}

bool bLeapYear(int nYear) {

	bool bLeapYear = false;
	if ((nYear % 4) != 0) {
		return false;
	}
	else if ((nYear % 100) != 0) {
		return true;
	}
	else if ((nYear % 400) != 0) {
		return false;
	}

}



//bool bLeapYear(int nYear) {
//	bool bLeapYear;
//	if(n
//
//}


////
////bool bLeapYear(const int nYear){
////	if (nYear != (nYear % 4) && nYear == (nYear % 100))
////		
////	if(nYear != (nYear % 400)) {
////		return false;
////	}
////	else {
////		return true;
////	}
////}