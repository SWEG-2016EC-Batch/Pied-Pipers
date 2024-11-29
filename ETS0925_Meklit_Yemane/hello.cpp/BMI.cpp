#include <iostream>
 #include <iomanip>
 using namespace std;
 int main(){
    /*BMI calculator 
    weight(kg) / height * height (m)
    Underweight: BMI<18.5
    Normalweight: 18.5<= BMI<= 24.9
    Overweight: BMI >25
    */
   char choice;
   do{
   double height,weight,bmi;
   cout <<"Enter your height in m: ";
   cin>>height;
   cout <<"Enter your weight in kg: ";
   cin>>weight;
   if(height <= 0){
    cout <<"Invalid height. Please enter a positive value.\n";
    continue;
   }
   bmi=weight/(height * height);

    cout <<"Your body mass index is: "<<bmi<<endl;
     if (bmi < 18.5) { 
        cout <<"You are Underweight"<<endl;
         } 
         else if (bmi >= 18.5 && bmi <= 24.9) 
         {
             cout <<"You are Normalweight"<<endl; 
         } 
         else { 
            cout <<"You are overweight"<<endl; 
            }
      cout << "Do you want to calculate BMI for another person? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Program terminated.\n";
 
   }
    return 0;
 }
