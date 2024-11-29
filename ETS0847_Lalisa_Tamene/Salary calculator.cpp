/* Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
tax: 15%).*/

#include <iostream>
#include <string>
#include <iomanip> // For formatting output

using namespace std;
int main() {
   
  string name;
    double workingHours, bonusRate, baseSalary;
    double bonusPayment, grossSalary, pensionDeduction, taxDeduction, netSalary;
    cout << "Enter the employee's name: ";
    getline(cin, name);

    cout << "Enter the weekly working hours: ";
    cin >> workingHours;
    
    cout << "Enter the bonus rate per hour: ";
    cin >> bonusRate;
    
    cout << "Enter the base salary: ";
    cin >> baseSalary;
    
    bonusPayment = bonusRate * workingHours;
    grossSalary = baseSalary + bonusPayment;

    pensionDeduction = grossSalary * 0.05;
    taxDeduction = grossSalary * 0.15;

    netSalary = grossSalary - pensionDeduction - taxDeduction;

    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "\nEmployee Name: " << name << endl;
    cout << "Base Salary: $" << baseSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Pension Deduction (5%): $" << pensionDeduction << endl;
    cout << "Tax Deduction (15%): $" << taxDeduction << endl;
    cout << "Net Salary after deductions: $" << netSalary << endl;

    return 0;
}
