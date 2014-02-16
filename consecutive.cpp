/*
Aidyn Shaikhov
EC327 Spring 2014

Consecutive.cpp
If four consecutive integers are found, the program should print them and then quit.
If no quadruplet is found, the program should exit silently (i.e. print nothing).
*/

#include <iostream>
using namespace std;

int main () {
  // assinging variables
  int v[4];
  int ip1, ip2, ip3, ip4;
  int i;

  // prompting inputs
  cin >> ip1;
  cin >> ip2;
  cin >> ip3;
  // check if consecutive
  while (cin >> ip4) {
    // consecutivness is when the first number is 'x', second is 'x+1,' third is 'x+2,' and the fourth (in our case the 	    last) number is 'x+3'
    if ((ip2 == ip1 + 1) && (ip3 == ip1 + 2) && (ip4 == ip1 + 3))
    {
    // output showing in an array 1st, 2nd, 3rd, 4th consecutive numbers if they were found
    v[0]=ip1;
    v[1]=ip2;
    v[2]=ip3;
    v[3]=ip4;
    cout << "Quadruplet found: ";
      for (i=0;i<4;i++) {
		// making a space between outputs (4 consecutive numbers)
      cout<< v[i] << " ";
      }
      cout << endl;
      break; // stop inputing input numbers
    }
    // if not consecutive, switching the numbers. now, second number becomes the first number 
    else {
      ip1=ip2;
      ip2=ip3;
      ip3=ip4;
    }
  }
  return 0;
}
