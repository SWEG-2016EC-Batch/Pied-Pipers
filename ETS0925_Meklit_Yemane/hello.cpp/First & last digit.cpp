#include <iostream>
using namespace std;

int main() {
    int number, firstDigit, lastDigit, sum;

    
    cout << "Enter an integer: ";
    cin >> number;

    
    lastDigit = abs(number) % 10;

    firstDigit = abs(number);
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

   
    sum = firstDigit + lastDigit;

    
    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;
    cout << "Sum of first and last digit: " << sum << endl;

    return 0;
}

