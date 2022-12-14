/*******************************************************************************
// dechex.cpp
// ----------
// just doing decimal to hex for now.
*******************************************************************************/
#include <iostream>
//#include <stdio.h>
//#include <cctype>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Enter decimal number to get hex equivalent." << endl
         << "Enter \"0\" to quit." << endl;

    bool uquit = false;
    while (!uquit) {
        unsigned int udec = 0;
        cin >> udec;
        if (udec == 0) {
            uquit = true;
        }
        else {
            cout << hex << udec << endl;
        }
    }
    return 0;
}
