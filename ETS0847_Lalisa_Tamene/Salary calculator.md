# Problem Analysis and Algorithm design for salary Calculator




## Problem Analysis:
### Input
1. Employe's name
2. working hour
3. Bonus rate per hour
4. Base salary

### Output
1. Growth salary
2. Net salary
3. Bonus payment


### Formula: 
1. **Bonus** = weekly working hour * bonus rate per hour
2. **Growth salary** = base salary + bonus 
3. **Deduction**
    3.1 pension deduction = gross salary * 0.05
    3.2 tax deduction = gross salary * 0.15
4. **Net salary** = gross salary - pension deduction - tax deduction

## Algorithm:

1. Start
 2.Input Collection
    
   Ask user for employee name
    Ask user for weekly working hours
    Ask user for bonus rate per hour
    Ask user for base salary

3. Calculation
   3.1 calculate Bonus
    
     BonusPayment = weeklyWorkingHours * bonusRatePerHour

   3.2 Calculate Gross Salary
    
     GrossSalary = baseSalary + BonusPayment

   3.3 Calculate Deductions
   
     PensionDeduction = GrossSalary * 5 / 100
    TaxDeduction = GrossSalary * 15 / 100

   3.4 Calculate Net Salary
    
     NetSalary = GrossSalary - PensionDeduction - TaxDeduction

4. Output
    
    Print "Employee Name: " + employeeName
    Print "Gross Salary: " + GrossSalary
    Print "Pension Deduction: " + PensionDeduction
    Print "Tax Deduction: " + TaxDeduction
    Print "Net Salary: " + NetSalary
    Print "Bonus Payment: " + BonusPayment
5. Stop
