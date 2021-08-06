/*************************************************/
// ConCalc - Console Calculator (cpp version)
// verion 2, build 71321
// brianc2788@gmail.com
/*************************************************/
#include <iostream> // easier to get input. tired of debugging my calls to scanf().
#include <stdio.h>
#include <cstdlib>
#include "concalc.h"

int main(int argc,char* argv[]){
    std::string str1;

    std::cin >> str1;
    std::cout << str1;

    ConCalc c(str1);
    return 0;
}
