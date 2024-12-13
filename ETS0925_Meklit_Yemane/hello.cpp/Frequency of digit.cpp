#include <iostream>

using namespace std;

int main()
{
    int num,digit,first,freq=0;
    cout<<"Enter the number to know it's frequency: ";
    cin>>num;
            while (num > 0) {
                digit = num % 10;
                if (digit == first) {
                    freq++;
                }
                num /= 10;
            }
            cout << "Frequency of first digit: " << freq << endl;
}
