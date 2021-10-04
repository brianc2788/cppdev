/***********************************************************
Reverse-String -- CPP Project
-----------------------------
Answering that age-old, job-interview question;
How would you reverse a string?
- written in cpp.
- one hell of an ugly main.cpp!

[Thoughts]
Wrote this on a lazy sunday to see how rusty my c/cpp
was. It's a common job interview question to be asked
to write code that will reverse a string (iirc?).
Happy with this code --
took me about 20 mins to come up with after focusing
solely on python and networking for the last several
months. Just ecstatic that I'm not so rusty i can't
put this together using the basic libraries.
***********************************************************/
#include <iostream>
#include <string>

// the main attraction.
// returns arg (string) in reverse. wrapped in a function.
std::string reverseStr(std::string stringIn);

int main(int argc,char* argv[]){
    // show title.
    std::cout << "Reverse-A-String :: ver 1.0.0"
              << std::endl
              << std::endl;
    // init a string variable and get input from the user.
    std::string strIn, strIn_reverse = "";
    std::cout << "Enter a string of text.\nEnter: ";
    // gets input, flush stdin, insert '\n'.
    //std::cin >> strIn; getchar(); std::cout << std::endl;
    std::getline(std::cin,strIn);

    // reverse given string.
    std::cout << reverseStr(strIn)
              << std::endl;

    std::cout << "\nPress ENTER to quit.......................";
    getchar();
    return 0;
}

std::string reverseStr(std::string stringIn){
    std::string stringReverse = stringIn;
    int nIndex = 0;

    //loop through the string. backwards.
    for (int n = (stringIn.length()-1);n >= 0; n--){
        stringReverse[nIndex] = stringIn[n];
        nIndex++;
    }

    return stringReverse;
}
