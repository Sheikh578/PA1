/*
Aidyn Shaikhov
EC327 Spring 2014

Perfect.cpp
The program should continually ask for a number X from the console, and print "X is perfect" or "X is not perfect"
The program should exit if end-of-file is encountered, or 0 is entered, printing "Goodbye."
*/

#include <iostream>
using namespace std;

// Boolean function is_perfect checks for the sum of a inputted number's divisor
// returns true (1) if the sum of the divisor is equal to the number itself
// returns false (0) if they are not equal
bool is_perfect(long int n){
	int sum=0;	
	
	for (int i=1; i<n; i++){	
		if (n%i == 0){		//calculating the sum of the divisors
			sum=sum+i;
		}
	}	
	if (n==sum){		// checking if the number is the same as its sum of the divisors
		return true;		
	}
	else {
		return false;
	}	
}

// Invokes a boolean function is_perfect which returns true or false
// This main function will continuously prompt numbers and it checks for the perfectness; unless, '0' is entered
int main () {
	int n;

	while (true) {  
		cout << "Enter a number to test for perfectness: ";     //input statement
		cin >> n;   	// input number

		if (n == 0){		// if value '0' is entered then print out 'Goodbye' and stop the code
			cout << "Goodbye." << endl;
			break;
   	}
		else {
			if (is_perfect(n)){				// invoking the is_perfect function, checking for the perfectness, and print out
	  			cout << n << ' ' << "is perfect" <<endl;
	    	}
	    	else {	
	    		cout << n << ' ' << "is not perfect" <<endl;
	   	}
		}	
	}
	return 0;
}
