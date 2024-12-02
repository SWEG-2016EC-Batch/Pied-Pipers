#include <iostream>
 #include <iomanip>
 using namespace std;
 int main(){
    //BMI calculator 

 while (true) {
        char choice;
        double weight, height, bmi;
        cout << "Enter weight (in kg): ";
        cin >> weight;
        if (cin.fail()) {
            cout << "Invalid input! Program terminated.\n";
            break;
        }
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
        cout << "Do you want to calculate BMI for another person? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            break;
        } 
      
    }
    return 0;
 }
