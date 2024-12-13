   /*   write a program that read an employee name weekly working hours, bonus rate per hour and 
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%, 
tax: 15%). */

#include <iostream>
#include <string>
using namespace std;

int main() {
   string employee_name;
    int weekly_working_hours;       // Declare variables 
    double bonus_rate, gross_salary, bonus_payment, net_salary, base_salary, pension, tax;
   const double pension_rate = 0.05, tax_rate = 0.15;    // Declare and initaialize varuables
    
    cout << "Enter the employee's name: ";
    getline(cin, employee_name);               // Name of the employee is gonna be entered here
    
    cout << "Enter base salary: ";
    cin >> base_salary;       // the base salary of the employee is  gonna be entered  here 
  
    cout << "Enter weekly working hours: ";
    cin >> weekly_working_hours;    // the weekly working hour of the employee is gonna be  entered  here

    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate;
       if (cin.fail() || base_salary < 0 || weekly_working_hours < 0 || bonus_rate < 0 ){   // checks the validity of the input
       cout << "invalid input ";
       } else {
    // calculations  of base salary,bonus payment, pension, tax,gross-salary,net salary is calculated here
    bonus_payment = weekly_working_hours * bonus_rate;
    gross_salary = base_salary + bonus_payment;

    pension = gross_salary * pension_rate;
    tax = gross_salary * tax_rate;

    net_salary = gross_salary - pension - tax;
   
  // prints  the employee's name , gross salary, bonus payment, base salary 
    cout << "Employee name: " << employee_name << endl;   
    cout << "Gross Salary: $" << gross_salary << endl;
    cout << "Bonus Payment: $" << bonus_payment << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Pension: $" << pension << endl;
    cout << "Net Salary: $" << net_salary << endl;
    
       }
    return 0;
}
