   /* Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and 
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%, 
tax: 15%). */

#include <iostream>

using namespace std;

int main() {
   char (string employee_name ) [];
    int weekly_working_hours;
    double bonus_rate, gross_salary, bonus_payment, net_salary, base_salary, pension, tax, pension_rate = 0.05, tax_rate = 0.15;
    
    cout << "Enter the employee's name: ";
    cin >> employee_name;
    cout << "Enter base salary: ";
    cin >> base_salary;

    cout << "Enter weekly working hours: ";
    cin >> weekly_working_hours;

    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate;

    bonus_payment = weekly_working_hours * bonus_rate;
    gross_salary = base_salary + bonus_payment;

    pension = gross_salary * pension_rate;
    tax = gross_salary * tax_rate;

    net_salary = gross_salary - pension - tax;

    cout << "Gross Salary: $" << gross_salary << endl;
    cout << "Bonus Payment: $" << bonus_payment << endl;
    cout << "Net Salary: $" << net_salary << endl;

    return 0;
}
