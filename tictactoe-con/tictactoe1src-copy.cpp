/*

	tic-tac-toe

	2 players

	complete and functional but not yet finished. players can overwrite
	spaces already occupied with Xs or Os. also no draw condition
	which is a huge flaw because most games end in a draw which is
	also why i dont like this game.

	3/16/18

	Note: this version was built-compiled on a different machine
          than the orignal (which was on a windows environment).
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string sBoard[5] = { {"  |  |  "},
					 {"--------"},
					 {"  |  |  "},
					 {"--------"},
					 {"  |  |  "} };
string sBoardMap[5] = { {" 1| 2| 3"},
						{"--------"},
						{" 4| 5| 6"},
						{"--------"},
						{" 7| 8| 9"} };

void drawBoard();
void modifyBoard(int nSpaceNumber, char cXorO);
bool checkWin();

int main() {

	cout << setw(12) << "TIC-TAC-TOE - ver 1.0" << endl << endl;

	int nSelectSpace;
	bool bGame = true;

	while (bGame) {

		drawBoard();

		if (checkWin() == false)
			return false;

		cout << "Player X, select a space (1-9): ";
		cin >> nSelectSpace; cout << endl << endl;

		modifyBoard(nSelectSpace, 'X');

		drawBoard();

		if (checkWin() == false)
			return false;

		cout << "Player O, select a space (1-9): ";
		cin >> nSelectSpace; cout << endl << endl;

		modifyBoard(nSelectSpace, 'O');

	}

	return 0;
}

void drawBoard() {

	for (int x = 0; x < 5; x++) {
		cout << setw(12) << sBoard[x] << setw(12) << sBoardMap[x] << endl;
	}
	cout << endl;
}

void modifyBoard(int nSpaceNumber, char cXorO) {

	if (nSpaceNumber == 1) {
		sBoard[0][1] = cXorO;
	}
	else if (nSpaceNumber == 2) {
		sBoard[0][4] = cXorO;
	}
	else if (nSpaceNumber == 3) {
		sBoard[0][7] = cXorO;
	}
	else if (nSpaceNumber == 4) {
		sBoard[2][1] = cXorO;
	}
	else if (nSpaceNumber == 5) {
		sBoard[2][4] = cXorO;
	}
	else if (nSpaceNumber == 6) {
		sBoard[2][7] = cXorO;
	}
	else if (nSpaceNumber == 7) {
		sBoard[4][1] = cXorO;
	}
	else if (nSpaceNumber == 8) {
		sBoard[4][4] = cXorO;
	}
	else if (nSpaceNumber == 9) {
		sBoard[4][7] = cXorO;
	}
}

bool checkWin() {			// this function is over 100 lines lol

	// X horizontal check
	if (sBoard[0][1] == 'X' && sBoard[0][4] == 'X' && sBoard[0][7] == 'X') {
		cout << "X WINS!!" << setw(12) << "X WINS!!" << setw(12) << "X WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[2][1] == 'X' && sBoard[2][4] == 'X' && sBoard[2][7] == 'X') {
		cout << "X WINS!!" << setw(12) << "X WINS!!" << setw(12) << "X WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[4][1] == 'X' && sBoard[4][4] == 'X' && sBoard[4][7] == 'X') {
		cout << "X WINS!!" << setw(12) << "X WINS!!" << setw(12) << "X WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	// X vertical check
	else if (sBoard[0][1] == 'X' && sBoard[2][1] == 'X' && sBoard[4][1] == 'X') {
		cout << "X WINS!!" << setw(12) << "X WINS!!" << setw(12) << "X WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[0][4] == 'X' && sBoard[2][4] == 'X' && sBoard[4][4] == 'X') {
		cout << "X WINS!!" << setw(12) << "X WINS!!" << setw(12) << "X WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[0][7] == 'X' && sBoard[2][7] == 'X' && sBoard[4][7] == 'X') {
		cout << "X WINS!!" << setw(12) << "X WINS!!" << setw(12) << "X WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	// X diagonal check
	else if (sBoard[0][1] == 'X' && sBoard[2][4] == 'X' && sBoard[4][7] == 'X') {
		cout << "X WINS!!" << setw(12) << "X WINS!!" << setw(12) << "X WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[0][7] == 'X' && sBoard[2][4] == 'X' && sBoard[4][1] == 'X') {
		cout << "X WINS!!" << setw(12) << "X WINS!!" << setw(12) << "X WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}

	// O horizontal check
	else if (sBoard[0][1] == 'O' && sBoard[0][4] == 'O' && sBoard[0][7] == 'O') {
		cout << "O WINS!!" << setw(12) << "O WINS!!" << setw(12) << "O WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[2][1] == 'O' && sBoard[2][4] == 'O' && sBoard[2][7] == 'O') {
		cout << "O WINS!!" << setw(12) << "O WINS!!" << setw(12) << "O WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[4][1] == 'O' && sBoard[4][4] == 'O' && sBoard[4][7] == 'O') {
		cout << "O WINS!!" << setw(12) << "O WINS!!" << setw(12) << "O WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	// O vertical check
	else if (sBoard[0][1] == 'O' && sBoard[2][1] == 'O' && sBoard[4][1] == 'O') {
		cout << "O WINS!!" << setw(12) << "O WINS!!" << setw(12) << "O WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[0][4] == 'O' && sBoard[2][4] == 'O' && sBoard[4][4] == 'O') {
		cout << "O WINS!!" << setw(12) << "O WINS!!" << setw(12) << "O WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[0][7] == 'O' && sBoard[2][7] == 'O' && sBoard[4][7] == 'O') {
		cout << "O WINS!!" << setw(12) << "O WINS!!" << setw(12) << "O WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	// O diagonal check
	else if (sBoard[0][1] == 'O' && sBoard[2][4] == 'O' && sBoard[4][7] == 'O') {
		cout << "O WINS!!" << setw(12) << "O WINS!!" << setw(12) << "O WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}
	else if (sBoard[0][7] == 'O' && sBoard[2][4] == 'O' && sBoard[4][1] == 'O') {
		cout << "O WINS!!" << setw(12) << "O WINS!!" << setw(12) << "O WINS!!" << endl;
		cin.ignore();
		getchar();
		return false;
	}


	else {
		return true;
	}
}
