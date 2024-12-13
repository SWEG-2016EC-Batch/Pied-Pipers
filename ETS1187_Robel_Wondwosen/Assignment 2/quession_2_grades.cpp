#include <iostream>
using namespace std;
int main(){
    int test, quiz, project, assignment, final;
    cout<< "Enter your tesst result out of 15: ";
    cin >> test;
    cout<< "Enter your quiz result out of 5: ";
    cin >> quiz;
    cout<< "Enter your project result out of 20: ";
    cin >> project;
    cout<< "Enter your assignment result out of 10: ";
    cin >> assignment;
    cout<< "Enter your final exam result out of 50: ";
    cin >> final;

    int total_avarage= test + quiz + project + assignment + final;
    cout << "your avarage is " << total_avarage<< endl;

    if (cin.fail() || total_avarage < 0 || total_avarage > 100){
   cout << "Invalid!";
   } else {
    if (total_avarage >= 90){
        cout << "congrats your grade is: " << "A+" << endl;
        
    }
    else if (total_avarage >= 80 && total_avarage <= 89){
        cout << "congrats your grade is: "<< "A" << endl;
    }

    else if (total_avarage >= 75 && total_avarage <= 79){
        cout << "your grade is: " << "B+" << endl;

    }
    else if (total_avarage >= 60 && total_avarage <= 74){
        cout << "your grade is: " << "B" << endl;

    }

    else if (total_avarage >= 55 && total_avarage <= 59){
        cout << "your grade is: " << "C+" << endl;

    }
    else if (total_avarage >= 45 && total_avarage <= 54){
        cout << "your grade is: " << "C" << endl;

    }
    
    else if (total_avarage >= 30 && total_avarage <= 44){
        cout << "your grade is: " << "D" << endl;

    }
    else {
        cout << "your grade is: " << "F " << endl << "you faild!"<< endl;
    }



   }


    return 0;
   }
