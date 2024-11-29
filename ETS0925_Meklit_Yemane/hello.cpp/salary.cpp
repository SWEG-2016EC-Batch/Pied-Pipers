#include<iostream>
using namespace std;
int main(){
    double weekly_working_hours, bonus_rate_per_hour, base_salary;
    double bonus_payment, gross_salary, pension_deduction, tax_deduction, net_salary;
    char name[50];
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter weekly working hours: ";
    cin >> weekly_working_hours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate_per_hour;
    cout << "Enter base salary: ";
    cin >> base_salary;
    
    bonus_payment = weekly_working_hours * bonus_rate_per_hour;
    gross_salary = base_salary + bonus_payment;
    pension_deduction = gross_salary * 0.05;
    tax_deduction = gross_salary * 0.15;
    net_salary = gross_salary - pension_deduction - tax_deduction;
    
    cout << name << "'s Gross Salary is " << gross_salary << endl;
    cout << name << "'s Bonus Payment is " << bonus_payment << endl;
    cout << name << "'s Net Salary: " << net_salary << endl;


  return 0;
}
