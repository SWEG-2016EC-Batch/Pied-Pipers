   /* Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling. */

#include <iostream>
using namespace std;

int main() {
    double tank_capacity, miles_per_Gallon, miles_to_be_driven;

    cout << "Enter the capacity of an automobile fuel tank in gallons: ";
    cin >> tank_capacity;
    cout << "Enter the miles per gallon of the automobile can be driven: ";
    cin >> miles_per_Gallon;

    miles_to_be_driven = tank_capacity * miles_per_Gallon;
    cout << "The automobile can be driven " << miles_to_be_driven << " miles without refueling." << endl;

    return 0;
}
