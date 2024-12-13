#include <iostream>

using namespace std;

int main()
{
    int temp,num,digit,fact=1,strong=0;
    cout<<"Enter the number to know it is strong or not: ";
    cin>>temp;
            while (num > 0) {
                digit = num% 10;
                for (int i = 1; i <= digit; i++) {
                    fact *= i;
                }
                strong+=fact;
                num/= 10;
            }
            if (strong==num) {
                cout << "It is strong number" << endl;
            } else {
                cout << "It is not strong number" << endl;
            }
}
