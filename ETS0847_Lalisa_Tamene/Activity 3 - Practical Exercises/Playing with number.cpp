/*Write a program that accepts an integer from the user and perform the following. Once
you complete solving all the exercises compile it and prepare a menu.
a) Prints the reverses of the number (e.g. input = 4637215 Output=5217364).
b) Counts the number of digits in a given number (e.g. 23,498 has five digits)
c) Find the product of even digits of the a given number (e.g. input=4,923 prod=8)
d) Prints the first and the last digit of the number and find their sum.
e) Swap the first and the last digit of the number.
g) Check whether a number is palindrome or not.
h) Find the frequency of each digit in a given integer and print in table format.

i) Check if a number is Strong or not.
[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal to the
number itself.

j) Check whether a number is Perfect number or not.
[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number itself
equals the number.*/


// THE CODE

#include <iostream>
using namespace std;
int main() {
    int menu,first=0,last=0,freq=0,newNum=0;
    long number,reverse=0,originalNumber,product=1,sum=0,remain;
    bool hasEven;
   
    cout<<"please choose one of the options from the following"<<endl;
    cout << "1. Reverse of the number" << endl;
    cout << "2. Number of digits" << endl;
    cout << "3. Product of even digits" << endl;
    cout << "4. First and last digit" << endl;
    cout << "5. Swap first and last digit" << endl;
    cout << "6. Palindrome" << endl;
    cout << "7. Frequency of each digit" << endl;
    cout << "8. Strong number" << endl;
    cout << "9. Perfect number" << endl;
    cout << "10. Exit" << endl;
    cin>>menu;
    cout <<endl;
    
  cout<<"Enter a number: ";
    cin>>number;
   cout <<endl;
    
  switch (menu){
        case 1:
            while (number!=0){
                reverse=(reverse*10) + number%10;
                number/=10;
            }
            cout<<reverse<<endl;
            break;
       
    case 2:
            originalNumber=number;
            while (number!=0){
                number/=10;
                sum++;
            }
            cout<<"the number of digits of "<<originalNumber<<" is"<<sum;
            break;
       
    case 3:
            while (number!=0){
                remain=number%10;
                if (remain%2==0){
                    product*=remain;
                    hasEven=true;
                }
                number/=10;
            }
            if (hasEven){
                cout<<"the product of the even digits is "<<product;
            }else {
                product=0;
                cout<<"teh number has no even digits";
            }
            break;
       
    case 4: 
            while (number!=0){
                remain=number%10;
                if (last==0){
                    last=remain;
                }
                first=remain;
                number/=10;
            }
            cout<<"the first and last digits are "<<first <<" and "<<last<<" respectively";
            break;
      
    case 5:
            while (number > 0) {
                remain = number % 10;
                if (remain == first) {
                    remain = last;
                } else if (remain == last) {
                    remain = first;
                }
                newNum = newNum * 10 + remain;
                number /= 10;
            }
            cout << "Number after swapping: " << newNum << endl;
            break;
       
    case 6:
            originalNumber=number;
            while (number!=0){
                reverse=reverse*10 + number%10;
                number/=10;
            }  
            if (originalNumber==reverse){
                cout<<"Palindrome";
            } else {
                cout<<"Not a palindrome";
            }
            break;
        
    case 7:
           /* while (number > 0) {
                remain = number % 10;
                if (remain == first) {
                    freq++;
                }
                number /= 10;
            }
            cout << "Frequency of first digit: " << freq << endl;
          
            break;*/
       
    case 8:
            originalNumber=number;
            while (number!=0){
                remain=number%10;
                long factorial=1;
                for (int i=1;i<=remain;i++){
                    factorial*=i;
                }
                sum+=factorial;
                number/=10;
            }
            if (sum==originalNumber)
              cout<<"the number you have entered is strong";
            else 
              cout<<"the number you have entered is not strong";
            break;
      
    case 9:
            long perfect;
            for (int i=1;i<=number;i++){
                if (number%i==0){
                    sum+=i;
                 }
             }
            perfect=sum-number; 
            if (perfect==number)
                 cout<<number <<" is perfect";
            else 
                cout<<number <<" is not perfect";
            break;
      
    case 10:
            cout<<"quiting program";
            break;

    }
}
