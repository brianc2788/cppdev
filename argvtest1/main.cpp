/*******************************/
// reversing a string.
// did the same thing is c with a char array;
// but cant remember. lets see if i can
// solve this problem without looking.
// and do it in cpp, which should be easier
// (than c).
// github.com/user5260
#include <iostream>
#include <string>
using namespace std;

int main(int argc,char* argv[]){
    string usrInput = "";
    cout << "enter a string: ";
    cin >> usrInput;cout << endl;

    char rvInput[usrInput.length()];

    for(int n = (usrInput.length()-1); n >= 0; n--){
        rvInput += usrInput[n];
    }

    cout << usrInput << endl << rvInput << endl;

    getchar();
    return 0;
}
