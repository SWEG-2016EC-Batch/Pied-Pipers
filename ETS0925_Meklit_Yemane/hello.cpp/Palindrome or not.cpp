#include <iostream>
using namespace std;

int main() {
    int num, reversednum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int originalnum = num; 

    
    while (num != 0) {
        reversednum *= 10;          
        reversednum += num % 10;    
        num /= 10;                 
    }

    
    cout << "Reversed: " << reversednum << endl;

    
    if (reversednum == originalnum) {
        cout << originalnum << " is a palindrome." << endl;
    } else {
        cout << originalnum << " is not a palindrome." << endl;
    }

    return 0;
}
