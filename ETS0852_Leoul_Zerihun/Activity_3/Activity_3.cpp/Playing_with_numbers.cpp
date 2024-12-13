#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice, num,original, reverse, count, product, first, last, sum;
    int num_digits, digit, swapped, temp, sum_arm, sum_divisors;
    int freq[10];

    
      cout << "Choose (1-9): " << endl;
      cout <<"1. Reverse the number" <<endl;
      cout << "2. Count digits" <<endl;
      cout << "3. Product of even digits"<<endl;
      cout << "4. First and last digit sum"<<endl;
      cout << "5. Swap first and last digit"<<endl;
       cout << "6. Check palindrome"<<endl;
       cout << "7. Digit frequency"<<endl;
       cout <<"8. Check Armstrong number"<<endl;
      cout << "9. Check Perfect number"<<endl;
       cout << "Enter your choice: ";
      cin >> choice;
        
        cout << "Enter a number: ";
        cin >> num;
        original = num;
        reverse = 0; count = 0; product = 1; sum = 0;
        for (int i = 0; i < 10; i++) freq[i] = 0;

        switch(choice) {
            case 1:
                while (num != 0) { 
                last = num % 10; 
                reverse = reverse * 10 + last; 
                num /= 10; 
                }
                cout << "Reverse: " << reverse << endl;
                break;
            case 2:
                while (num != 0) { 
                num /= 10; count++;
                 }
                cout << "Number of digits: " << count << endl;
                break;
            case 3:
                while (num != 0) {
                 last = num % 10;
                  if (last % 2 == 0) {
                  product *= last; num /= 10; 
                 }
                 }
                cout << "Product of even digits: " << product << endl;
                break;
            case 4:
                first = original;
                 while (first >= 10) {
                 first /= 10; last = original % 10;
                }
                cout << "Sum of first and last digit: " << first + last << endl;
                break;
            case 5:
                first = original; 
                while (first >= 10) {
                first /= 10;
                 last = original % 10;
                num_digits = log10(original);
                 swapped = last * pow(10, num_digits) + (original % int(pow(10, num_digits))) / 10 * 10 + first;
                }
                cout << "After swapping: " << swapped << endl;
                break;
            case 6:
                temp = original; reverse = 0;
                while (temp != 0) {
                last = temp % 10; 
                reverse = reverse * 10 + last; 
                temp /= 10; }
                if (reverse == original) {
                cout << "Is palindrome";
                }else{
                cout << "Isn't Palindrome";
                }            
             break;
            case 7:
                num = original;
                while (num != 0) { 
                last = num% 10; 
                freq[last]++; 
                num /= 10; 
                }for (int i = 0; i < 10; i++) {
                if (freq[i] > 0) 
                {cout << i << ": " << freq[i] << endl;
                }
                }
                break;
            case 8:
                sum_arm = 0; num = original;
                while (num != 0) { 
                digit = num % 10;
                  sum_arm += digit*digit*digit; 
                  num /= 10; 
                  }
                if (sum_arm == original ) {
                cout << "Is Armstrong"<< endl;
                }else {
                cout << "Isn't Armstrong"<< endl;
                }
                break;
         case 9:
                sum_divisors = 0;
                for (int i = 1; i < original; i++){
                if (original % i == 0) {
                sum_divisors += i;
                }
                if (sum_divisors == original) {
                cout << "Perfect number";
                }else{
                cout << "Not perfect number";
                }
                }
                break;
        default:
                cout << "Invalid choice!" << endl;
        }
        cout << endl;
    
    
    return 0;
}
