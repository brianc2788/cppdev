#ifndef CONCALC_H
#define CONCALC_H
#include <cstdlib>
#include <stdio.h>
#include <string>

class ConCalc {
public:
    ConCalc(std::string strInput);
    ~ConCalc();

    void calculate(std::string stringIn);
protected:
private:
    std::string strInput;
    char cOperator = ' ';
    float num1 = 0.0;
    float num2 = 0.0;
};

#endif /* CONCALC_H */
