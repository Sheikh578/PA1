/*
Aidyn Shaikhov
EC327 Spring 2014

Happy.cpp
A C++ program happy.cpp prints the first 10,000 happy numbers.
The numbers should be printed 10 per line, with a single space between the values.
*/

#include <iostream>
using namespace std;

// This function checks if the number is a happy: if happy gives '1', if not '0'
bool ishappy(int num) {
  while (!(num==1 || num==4)){ // or could write in this form: (num !=1) && (num!=4)) - both need to not be 1 or 4	
    int sum=0;
    while (num!=0) {
      sum = sum+(num%10)*(num%10); // takes the numbers (characters) from the input number and sums their squares
      num = num/10;
    }
    num = sum;
  }

  if (num==1) {
    return true;
  }
  if (num == 4) {
    return false;
  }
}

// Invokes the function ishappy, which checks for happiness, and it the main function prints the first 10000 happy numbers, 10 happy number per line
int main() {

  int counter=0;
  int num=1;
  while (counter < 10000) {
    if (ishappy(num)) {  // invoking the ishappy function   
    counter++;
	 cout << num << ' ';  
		// Creates a new line every time the line reaches 10 numbers
	 	if (counter %10 == 0) {
    	cout <<endl;
    	}
    }
    num++;
  }
 
return 0;
}	
