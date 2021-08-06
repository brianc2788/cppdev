/******************************************************************************
	Project Euler - 01
	Build 06252018

	ProjectEuler.net, Problem 1 - https://projecteuler.net/problem=1

	If we list all the natural numbers below 10 that are multiples of 3 or 5,
	we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of
	all the multiples of 3 or 5 below 1000.
******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
	printf("Project Euler - Problem 1\n\n");

	int nSum = 0;
	
	for (int x = 0; x < 1000; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			printf("%d\n", x);
			nSum += x;
			continue;
		}
		else if (x % 3 == 0)
		{
			printf("%d\n", x);
			nSum += x;
		}
		else if (x % 5 == 0)
		{
			printf("%d\n", x);
			nSum += x;
		}
	}

	printf("Sum: %d\n", nSum);

	getchar();
	return 0;
}