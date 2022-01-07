/*clearly, there are no vectors here. not sure
  what i was thinking... ha.*/
// Just wanted to use the std namespace
// for readablity. Not sure why I'm so
// averse to using it.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
    cout << "Vector Test 2" << endl;

    string s1 = "";
    for(string word;cin>>word;){
        s1 += word;
        s1 += " ";
        cout << "debug: " << s1 << endl;
    }

    string s2 = "";

    for (int n = 0; n < (s1.length()-1);++n){
        s2 += s1[n];
    }

    cout << endl << s2 << "." << endl;

    return 0;
}
