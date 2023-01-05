/* FACTOR FINDER VERSION 0.1 */
/* Started on Feb 9, 2021 */
// -application asks user for a number.
// -application checks if the number is prime, true or false.
// -application then enters a loop, printing factors as they are discovered.
// -running loop ends when user wants to quit.
//
// -end of development
// final summary: app prints title line, prompts user to enter a number to find its factors
//				  or to enter a zero to quit the program. not my desired way to design the
//				  running loop, but it's all that could be gotten to function properly.
//				  keeping this a functioning application and will build on in a future
//				  version.
#include <iostream>
//#include <stdio.h>
using namespace std;

int main(int argc, char* argv[]) {
	cout << "\t*|* FACTOR FINDER - VER 0.1 *|*" << endl
		<< endl;
	bool bRunning = true;
	while (bRunning) {
		int nInput = 0;
		cout << "Enter a number to find its factors or enter a zero to quit: ";
		cin >> nInput; cout << endl;

		if (nInput == 0) {
			bRunning = false;
		}
		else {
			bRunning = true;
		}

		cout << "Factors of " << nInput << ":" << endl;

		for (int x = 1; x <= nInput; x++) {
			if (nInput % x == 0) {
				cout << x << endl;
			}
		}
	}

	return 0;
}