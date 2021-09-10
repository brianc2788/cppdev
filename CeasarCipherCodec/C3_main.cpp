/*****************************************************
Ceasar Cipher Codec, A.K.A. C3
github.com/user5260/cpp-projects/CeasarCipherCodec/...
------------------------------
DESC:
prints back the user's message encoded with
the ceasar crypto algorithm using the key of the
user's choice.
Not a full Coded; just an encoder.

NOTES:
- this program is very buggy and only accepts UPPER
  CASE chars and use of symbols will probably cause
  a crash or unintelligible output.
*****************************************************/
#include <iostream>
#include <string>
using namespace std;

string convNumeric(string strOrigin, int nKeyIn);

int main(int argc,char* argv[]){
    //title
    cout << "C3 - Ceasar Cipher Codec\nby user5260\n----------------------" << endl;

    // get msg and key
    string strInput = "";
    int nKey = 0;

    cout << "Enter msg: ";
    getline(cin,strInput);
    cout << "Enter key: ";
    cin >> nKey; cout << endl; getchar();
    cout << "your msg: " << strInput << endl
         << "selected key: " << nKey << endl
         << endl;

    // encode into numerical then back again
    string strNumeric,strEncodedMsg = "";

    cout << "--YOUR ENCODED MSG--" << endl
         << endl
         << convNumeric(strInput,nKey) << endl;

    printf("-----------------------------\nPress ENTER to exit C3 Encoder\n");
    getchar();
    return 0;
}

string convNumeric(string strOrigin, int nKeyIn){
    int nNumerical = 0;
    int nList[strOrigin.length()+1];

    for (int n = 0; strOrigin[n] != '\0';n++){
        nNumerical = strOrigin[n];
        nList[n] = nNumerical;
        //debug output
        //printf("%d\n",nList[n]);
    }

    string strEncoded = "";

    for (int n = 0; n < strOrigin.length();n++){
        if (nList[n] == 32){
            strEncoded += " ";
        }
        else{
            strEncoded += (((nList[n]-65)+nKeyIn) % 26)+65;
        }
    }

    return strEncoded;
}
