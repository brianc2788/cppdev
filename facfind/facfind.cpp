/*******************************************************************************
* FACTOR FINDER
* Get an integer from the stdin and print its factors, indicate primality.
* https://brianc2788.github.io/
*******************************************************************************/
#include <iostream>
using namespace std;

void printFactors(int nTarget);

int main(int argc, char* argv[]) {
	cout << "FACFINDER" << endl;
	bool bRunning = true;
	while (bRunning) {
		int nInput = 0;

		cout << "Enter a number to find its factors or enter a zero (0) to quit: ";
		cin >> nInput; cout << endl;

		if (nInput == 0) {
			bRunning = false;
		}
		else {
			printFactors(nInput);
		}
	}

	return 0;
}

/* Print factors for a number and its primality. */
void printFactors(int nTarget) {


	int nCount = 0; // Number of factors

	for (int n = 1; n <= nTarget; n++) {
		if (nTarget % n == 0) {
			cout << n << endl;
			nCount++;
		}
	}

	cout << "\nNumber of factors: " << nCount << endl;

	if (nCount == 2)
		cout << "IS PRIME" << endl;
	else
		cout << "NOT PRIME" << endl
		<< endl;
}