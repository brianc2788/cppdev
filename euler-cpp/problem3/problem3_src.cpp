/*******************************************************************************
 * Project Euler - Problem 3
 * 
 * Problem description:
 * The prime factors of 13195 are 5, 7, 13, and 29.
 * What is the largest prime factor of the number 600851475143
 * 
 * RESULTS:
 * Produces the correct prime factors for 13195 and identifies 29 as the largest.
 * Largest prime factor for 600851475143: 6857
 * 
 * https://brianc2788.github.io/
 * https://github.com/brianc2788/cppdev/tree/main/euler-cpp/problem3
*******************************************************************************/
#include <iostream>

#define MAX_ARRAY 100

// test case.
//long lTarget = 13195;
long lTarget = 600851475143;

bool is_prime(long l1);
long getLargest(long larray[]);

int main(void) {

    long lPrimeFactors[MAX_ARRAY];
    for (int n = 0; n < MAX_ARRAY; n++)
        lPrimeFactors[n] = 0;

    int nCount = 0;

    std::cout << "Printing factors for: " << lTarget << std::endl;

    for (long n = 1; n <= lTarget; n++) {
        if (lTarget % n == 0){
            std::cout << n;

            if (is_prime(n)) {
                nCount++;
                lPrimeFactors[nCount] = n;
                std::cout << "\tPRIME";
            }

            std::cout << std::endl;
        }
    }

    std::cout << "Largest prime factor for " << lTarget << ": " << lPrimeFactors[nCount] << std::endl;

    return 0;
}

bool is_prime(long l1) {
    bool prime = true;
    for (long n = 2; n < l1; n++)
        if (l1 % n == 0)
            prime = false;
    
    return prime;
}

long getLargest(long larray[]) {
    long lLargestFac = 0;
    for (int i = 0; i <= MAX_ARRAY; i++) {
        if (lLargestFac < larray[i])
            lLargestFac = larray[i];
    }

    return lLargestFac;
}
