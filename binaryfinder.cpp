/*
Aidyn Shaikhov
EC327 Spring 2014

Binaryfinder.cpp
Write a C++ program that will determine if a particular sequence of binary digits appears in a number.
The program accepts two numbers: the test number X and the test sequence Y. The test number X is entered in decimal, and the test sequence Y in binary.

Specifications:
    leading zeros in the binary sequence are ignored. For example, if X is 9 (1001) and Y is specified as "0100" the result will be "Sequence 100 occurs in 9."
    the first number entered must be positive. If it is not, print "Number must be positive."
    the second number must be positive. If it is not, print, "Sequence must be positive."
    the second number entered must be a valid binary number (only containing 1s and 0s). If it is not, print "Sequence must be binary."

Restrictions:
    you may not define any string or chr variables in your solution.
*/



#include <iostream>
using namespace std;

// This function takes a number binary10 (which is in base 10, as C++ understands: e.g. instead reading one-zero-one, C++ reads one-hundre-and-one); so, we have to turn binary10 into the binary sequence in base 2
// In short, base 10 number 'binary10' into base 2 'binary'
int toBin(int binary10) {
	int binary = 0;
   int i = 1;
   while (binary10 != 0) {
       if (binary10 % 10 > 1) {
           return -1;
       }
       binary += i*(binary10 % 10);
       i *= 2;
       binary10 /= 10;
   }
   return binary;
}

// Then main function that invokes the int toBin function
int main()
{
	// Assigning the variables and prompting the inputs: number -> number, binary10 -> binary sequence sequence
   int number;
	int binary10;
   cin >> number; 
	cin >> binary10;
  
   // Check binary10 (sequence)  
   if (binary10 < 0) {
       cout << "Sequence must be positive." << endl;
       return 0;
   }
	// Check number and binary10 (sequence) at a same time 
	int binary = toBin(binary10);
   if ((number < 0 ) && (binary == -1)) {
		cout << "Number must be positive." << endl  << "The sequence must be binary." << endl;
      return 0;
   }
	else {
 		// Check number
   	if (number < 0) {
      	cout << "Number must be positive." << endl;
      	return 0;
   	}
		// Check binary10 (sequence) 
		if (binary == -1) {
      	cout << "The sequence must be binary." << endl;
      	return 0;
  		}
	}

	// Finding the length of the binary which is converted with the function toBin: binary10 -> binary
	int len = 0;
	int binary1 = binary;
	while (binary1 != 0) {
      binary1 /= 2;
      len++;
	}
  
	// Looking for binary in number
	int number1 = number;
	while (number1 != 0) {
      if (number1 % (1 << len) == binary) {
			 // Binary occured in the number so print the following	
          cout << "Sequence " << binary10 << " occurs in " << number << "."<< endl;
          return 0;
      }
      number1 /= 2;
	}
	// Otherwise, binary did not occur in the number so print the following	
	cout << "Sequence " << binary10 << " does not occur in " << number << "."<< endl;  
	return 0;
}
