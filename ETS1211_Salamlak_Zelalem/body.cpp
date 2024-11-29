#include <iostream>
using namespace std;
int main() {
    int numPeople;
    
    
    cout << "How many people do you want to calculate BMI for? ";
    cin >> numPeople;
    for (int i = 1; i <= numPeople; ++i) {
        
        double weight, height, bmi;
        cout << "\nPerson " << i << endl;
        cout << "Enter weight in kilograms: ";
        cin >> weight;
        cout << "Enter height in meters: ";
        cin >> height;

        bmi = weight / (height * height);
        
        cout << "Your BMI is: " << bmi << endl;
        
        if (bmi < 18.5) {
            cout << "You are underweight." << endl;
        } else if (bmi >= 18.5 && bmi < 24.9) {
            cout << "You have a normal weight." << endl;
        } else if(bmi > 25) {
            cout << "You are overweight." << endl;
        }
    }

    cout << "\nThank you for using the BMI calculator!" << endl;
    
    return 0;
}
