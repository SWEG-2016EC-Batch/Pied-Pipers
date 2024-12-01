/* Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, underweight or overweight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated. */

#include<iostream>
using namespace std;

int main()
{
  float weight;     // Declare the variables 
  float height;
  float BMI; // Body Mass Index
  int number ;
  cout << " For how many person do you want to calculate BMI (Body Mass Index): "; 
  cin >> number;      // Enter for how many people it is gonna work
   if (cin.fail() || number < 0 ) {   // checks whether the input is valid or not
   cout << "invalid input" << endl;
   }else{
       for (int i = 1; i <= number ; i++) {      // iterates untill the number entered is reached
        cout << "Enter the height in meter: " << endl; // Enter your height here
        cin >> height;
        cout << "Enter the weight in kilogram: " << endl; // Enter your weight here
        cin >> weight;
   if (cin.fail() || weight <= 0 || height <= 0) {   // checks whether the input is valid or not
   cout << "invalid input" << endl;
   }else{
   
        BMI = weight / (height * height) ; // Body Mass Index is calculated as the division of weight to height squared
              cout << "Your BMI (Body Mass Index) is: " << BMI << endl;
          if (BMI < 18.5) {         // checks if the BMI is lessthan 18.5
              cout << "You are Underweight" << endl;    // prints  underweight if BMI is lessthan 18.5
          } else if (BMI >= 18.5 && BMI<= 24.9){       // checks if the BMI is between 18.5 and 24.9
              cout << "You are Normal weight" << endl;   // prints normalweight if BMI is between the range
          }else {
              cout  << "You are Overweight " << endl;  // prints overweight if BMI is greaterthan 25
          }
            }
       }
                  }
    
   
    return 0;
}
