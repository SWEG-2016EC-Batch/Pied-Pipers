#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    while (true) {
        double weight, height, bmi;
        cout << "Enter weight (in kg): ";
        cin >> weight;
        cout << "Enter height (in meters): ";
        cin >> height;
        if (cin.fail() || height <= 0) {
            cout << "Invalid input! Program terminated.\n";
            break;
        }
        bmi = weight / (height * height);
        cout << "Your BMI is: " << bmi << endl;
        if (bmi < 18.5)
            cout << "you are UnderWeight\n";
        else if (bmi >= 18.5 && bmi < 24.9)
            cout << "You are NormalWeight\n";
        else if (bmi >= 25.0 && bmi <=29.5)
            cout << "You are OverWeight\n";
        else
            cout <<"you are Obese\n";

      
    }

    return 0;
}

