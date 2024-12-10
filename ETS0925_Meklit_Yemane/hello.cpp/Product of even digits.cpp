#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    
    int number, digit;
    int product = 1; 
    bool hasEvenDigit = false; 

   
    cout << "Enter an integer: ";
    cin >> number;

    
    number = abs(number);

   
    while (number > 0) {
        digit = number % 10; 

        
        if (digit % 2 == 0) {
            product *= digit; 
            hasEvenDigit = true; 
        }

        number /= 10; 
    }

    
    if (hasEvenDigit) {
        cout << "Product of even digits: " << product << endl;
    } else {
        cout << "No even digits found." << endl;
    }

    return 0;
}

