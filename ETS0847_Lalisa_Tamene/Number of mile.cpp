/* Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling.*/

#include <iostream>
using namespace std;

int main() {
    double tankCapacity, milesPerGallon, totalMiles;

    cout << "Enter the fuel tank capacity of the automobile (in gallons): ";
    cin >> tankCapacity;

    cout << "Enter the miles per gallon (MPG) the automobile can be driven: ";
    cin >> milesPerGallon;

    totalMiles = tankCapacity * milesPerGallon;

    cout << "The automobile can be driven " << totalMiles << " miles without refueling." << endl;

    return 0;
}
