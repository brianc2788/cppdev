/*
// Concalc1 - Console Calculator
// 7-10-2021
// brianc2788@gmail.com
*/
#include <stdio.h>
#include <stdbool.h> // I guess booleans weren't standard until C99.

float Calculate(float num1, char op, float num2);

int main(int argc,char* argv[]){
    float numIn1,numIn2 = 0.0;
    char opIn = ' ';
    bool bRunning = 1;

    printf("[!] ConCalc1 - Console Calculator v0.1-71021\n"\
           "Instructions: Enter [NUMBER][OPERATOR][NUMBER]\n"\
           "-No white space\n"\
           "-Can use floating-point.\n"\
           "-Use \"0.X\" if entering a number below 1.0\n"\
           "-Enter '0[Any operator]0' or (Unix) Ctrl+C to quit.\n");
           // 'x' works for multiplication but not for quitting.

    while(bRunning){
        scanf("%f%c%f", &numIn1, &opIn, &numIn2);

        if (numIn1 == 0 && numIn2 == 0){
            bRunning = 0;
            break;
        }
        else
            if(opIn == '+' || opIn == '-' || opIn == '*' || opIn == 'x' || opIn == '/'){
                printf("Result: %f\n", Calculate(numIn1,opIn,numIn2));
            }
            else
                continue;

        numIn1 = 0.0,numIn2 = 0.0;
        opIn = ' ';
    }

    return 0;
}

float Calculate(float num1, char op, float num2){
    float retval = 0.0;

    if (op == '+')
        retval = num1 + num2;
    else if (op == '-')
        retval = num1 - num2;
    else if (op == '*' || op == 'x')
        retval = num1 * num2;
    else if (op == '/'){
        if (num2 == 0)
            return 0; // For division by zero.
        else
            retval = num1 / num2;
    }

    return retval;
}

/* Unused switch implementation. */
/* I have a tough time debugging switches. */

//float Calculate(float num1,char op,float num2){
//    float retval = 0.0;
//
//    switch(op){
//        case '+':
//            retval = num1 + num2;
//        case '-':
//            retval = num1 - num2;
//        case '*':
//            retval = num1 * num2;
//        case '/':
//            if (num2 == 0)
//                retval = 0;
//            else
//                retval = num1 / num2;
//    }
//
//    return retval;
//}
