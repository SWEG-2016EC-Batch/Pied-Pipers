/* Write a program that find the result of  𝑥 the power of y,
where the value of X and Y are entered by the user. */

#include <iostream>
#include <cmath>  
using namespace std;

int main() {
  
    double x, y, result;  // Declares the variabel
  
    cout << "Enter the value of x: " << endl;  
    cin >> x;  // enter the value of x

    cout << "Enter the value of y: " << endl;
    cin >> y;   // enter the value of y
if (cin.fail() ) {   // checks the validity of the input
  cout << "invalid input";}
  
  else {
    result = pow(x, y);  // calculates  x to power  of y 

    cout << "Result of " << x << " the power of " << y << " is: " << result << endl; // prints the result
    }

    return 0;
}
