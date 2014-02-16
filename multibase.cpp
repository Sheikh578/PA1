/*
Aidyn Shaikhov
EC327 Spring 2014

Multibase.cpp
Write a C++ program multibase.cpp that will prompt the user for an integer Y, and respond with all integers x such that Y in base x is a palindromic number.
Only report the values x between 2 and Y, since all numbers Y are palindromic in base x > Y.
A palindrome in base x reads the same forward and backwards.
*/

#include <iostream>
using namespace std;

// This function checks for the
int isPalindrom(int Y, int x) {
  int array[Y];
  int i = 0;
  int j;
  // Checks if the binary of the base is a palindrom number
  // Turns a number into a number in a particular base; e.g. number 9, in base 2 (binary): 1001 which is a palindrom number
  while (Y > 0) {
      array[i] = Y % x;
      Y /= x;
      i++;
  }
	// Checks if the number is equal from the front and from the back reading
	// if not return 0; if yes return 1;
   for (j = 0; j < i/2; j++) { 
      if (array[j] != array[i-1-j]) {
          return 0;
      }
  }
  return 1;
}

// Calls the isPalindrom function, which checks the palindromicity of the inputted number's bases
int main()
{
	int Y;
	int i;   
	cout << "Enter the number for palindromicity: ";   
   cin >> Y;

	// Calls the isPalindrom function   
	// Prints the bases which are palindromic numbers	
   for (i = 2; i < Y; i++) {
      if (isPalindrom(Y, i)) {
          cout << i << endl;
      }
   }
	return 0;
}
