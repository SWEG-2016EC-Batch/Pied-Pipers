#include<iostream>
#include <ctype.h>
using namespace std;

int main() {    
       char symbol;
       cout<<" please enter  a symbol: ";
       cin>>symbol;
       cout<<"The symbol you entered is "<<symbol<<endl;
       if (symbol >= '0' && symbol <= '9') {
       
             cout << "Digit! \n";
              
              if ( symbol % 2 == 0)  { 
           cout  << "Even digit! \n";
              }
              else {
              cout << "Odd digit! \n";
              }
       } else if (  isalpha (symbol)) {
                 cout << "Alphabet! \n";
             if (islower (symbol)) {
             cout << "Lower case alphabet \n";
             } else {
                 cout << "Upper case alphabet \n";
             }
                 }
       else { 
       cout << "Special Character \n";
       }
 return 0;
}
