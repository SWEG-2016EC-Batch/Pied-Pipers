
#include<iostream>
using namespace std;

int main()
{
  float weight;
  float height;
  float BMI; // Body Mass Index
  int number ;
  do {
  cout << "Enter your height in meter: "; // Enter your height here
  cin >> height;
  cout << "Enter your weight in kilogram: "; // Enter your weight here
  cin >> weight;
  BMI = weight / (height * height) ; // Body Mass Index is calculated as the division of weight to height squared
    cout << "your BMI (Body Mass Index) is: " << BMI << endl;
        if (BMI < 18.5) {
              cout << "you are Underweight" << endl;
       } else if (BMI >= 18.5 && BMI<= 24.9){
              cout << "you are normal weight" << endl;
       }else {
              cout  << "you are over weight " << endl;
   }
  cout << "If you want to continue, enter a non-zero number if not, enter zero : " << endl;
  cin >> number;
    
    }while (number !=0);

    
    
    
    return 0;
    }
