   /* Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling. */

#include <iostream>
using namespace std;

int main() {
    double tank_capacity, miles_per_Gallon, miles_to_be_driven; // Declare the variables 

    cout << "Enter the capacity of an automobile fuel tank in gallons: ";  
    cin >> tank_capacity;   // The capacity of the automobile fuel tank is entered 
    cout << "Enter the miles per gallon of the automobile can be driven: ";
    cin >> miles_per_Gallon;   // the miles that can be driven per gallon is entered 
         if (cin.fail() ||  miles_per_Gallon <= 0 || tank_capacity < 0) {  // checks the input is valid or not
         cout << "invalid input";
         }else{
    miles_to_be_driven = tank_capacity * miles_per_Gallon;   // miles to be driven is calculated 
    cout << "The automobile can be driven " << miles_to_be_driven << " miles without refueling." << endl;  // print the output
}
    return 0;
}
