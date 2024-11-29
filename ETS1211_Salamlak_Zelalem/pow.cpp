#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double X, Y, result;
    cout << "Enter the value of X (base): ";
    cin >> X;
    
    cout << "Enter the value of Y (exponent): ";
    cin >> Y;
    
    result = pow(X, Y);
    
    cout << "The result of " << X << "^" << Y << " is: " << result << endl;
    
    return 0;
}
