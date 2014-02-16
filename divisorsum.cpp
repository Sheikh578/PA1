/*
Aidyn Shaikhov
EC327 Spring 2014

Divisorsum.cpp
A C++ program divisorsum.cpp prints the proper divisor sum of the integers from 2 to 1000, inclusive, one value per line.
The proper divisors of an integer x are all positive divisors of x not including x itself.
*/
 
#include <iostream>
using namespace std;

int main () {

	int num;
	// Calculating the sum of the divisors of the numbers starting with 2 upto 10000 inclusively.
	for (num=2; num<=1000; num++){	
		int sum=0;
		for (int i=1; i< num; i++) { 
			// Starting with 2, and checking for the divors which means that mode of the number is 0 value
			if (num%i == 0) {
				// Summing the divisors
				sum = sum + i; 
			}
		}
		cout << sum << endl;
		
	}
return 0;
}
