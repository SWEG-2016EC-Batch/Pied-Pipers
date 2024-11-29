/* Write a program that find the result of  𝑥 the power of y,
where the value of X and Y are entered by the user. */

#include <iostream>
#include <cmath>  
using namespace std;

int main() {
  
    double x, y, result;
  
    cout << "Enter the value of x: " << endl;
    cin >> x;

    cout << "Enter the value of y: " << endl;
    cin >> y;
if (cin.fail() ) {
  cout << "invalid input";}
  else {
    result = pow(x, y);

    cout << "Result of " << x << " the power of " << y << " is: " << result << endl;
    }

    return 0;
}
