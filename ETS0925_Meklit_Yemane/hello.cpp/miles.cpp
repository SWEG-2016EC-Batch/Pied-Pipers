#include<iostream>
using namespace std;
int main()
 double gallonCapacity, mile_per_gallon, miles;
 cout << "Enter fuel thank capacity in gallons: ";
    cin>> gallonCapacity;
    cout << "Enter the mile per gallon: ";
    cin>> mile_per_gallon;
    miles = mile_per_gallon * gallonCapacity;
    cout << "You can travel "<< miles<< " miles without refueling. ";

  return 0;
}
