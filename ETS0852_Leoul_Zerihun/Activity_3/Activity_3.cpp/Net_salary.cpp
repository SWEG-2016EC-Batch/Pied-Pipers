#include <iostream>
    
using namespace std;

int main() {
    // Declare the required variables
    int worked_hours;
    int extra_worked_hours;
    double basic_salary, tax, tax_rate, bonus_rate, pension, gross_salary, net_salary, bonus = 0;

    // Input the details
    cout << "Enter base salary: ";
    cin >> basic_salary;

    cout << "Enter worked hours: ";
    cin >> worked_hours;

     cout << "Enter the bonus rate: ";
     cin >> bonus_rate;
    // Assume the normal working hours are 40 or less.
    if(cin.fail() || basic_salary <= 0|| worked_hours <= 0 || bonus_rate <= 0){
    cout << "invalid input";
    }else{
    if (worked_hours > 40) {
           extra_worked_hours = worked_hours - 40;
          bonus = extra_worked_hours * bonus_rate;
    } 
    

    // calculate net-salary
    pension = basic_salary * 0.07;
    gross_salary = basic_salary + bonus;
    
         if (gross_salary <200) {
        tax_rate = 0;
     } else if (gross_salary >= 200 && gross_salary < 600)
     {
        tax_rate = 0.1;
     } else if (gross_salary >= 600 && gross_salary < 1200)
     {
        tax_rate = 0.15;
     } else if (gross_salary >= 1200 && gross_salary <2000)
     {
        tax_rate = 0.2;
     } else if (gross_salary >= 2000 && gross_salary < 3500)
     {
        tax_rate = 0.25;
     } else
     {
        tax_rate = 0.3;
     }   
     tax = gross_salary * tax_rate;
     net_salary = gross_salary - tax - pension;

    // Display results
    cout << "Gross Salary: $" << gross_salary << endl;
    cout << "Bonus Payment: $" << bonus << endl;
    cout << " Tax: $"<< tax <<endl;
    cout << "Pension: $"<< pension <<endl;
    cout <<" Net Salary: $" << net_salary <<endl;
}
    return 0;
}
