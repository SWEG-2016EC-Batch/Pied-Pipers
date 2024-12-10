#include <iostream>
using namespace std;

int main() {
   
    double baseSalary, workedHours, bonusRate, overtimeRate = 0.0;
    double pensionRate = 0.07, taxRate, netPay, grossPay;

   
    cout << "Enter base salary: ";
    cin >> baseSalary;

    cout << "Enter worked hours: ";
    cin >> workedHours;

    cout << "Enter bonus rate: ";
    cin >> bonusRate;

    if (workedHours > 40) {
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtimeRate;
    }

    cout << "Enter tax rate as a percentage: ";
    cin >> taxRate;

    
    grossPay = baseSalary + (workedHours * bonusRate);

    if (workedHours > 40) {
        double overtimeHours = workedHours - 40;
        grossPay += overtimeHours * overtimeRate;
    }

    
    double pension = pensionRate * baseSalary;
    double tax = (taxRate / 100) * grossPay;

    
    netPay = grossPay - (pension + tax);

   
    
    cout << "Gross Pay: " << grossPay << endl;
    cout << "Pension Deduction (7%): " << pension << endl;
    cout << "Tax Deduction: " << tax << endl;
    cout << "Net Pay: " << netPay << endl;

    return 0;
}

