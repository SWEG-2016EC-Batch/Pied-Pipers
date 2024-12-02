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
   
5. **Net salary** = gross salary - pension deduction - tax deduction

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
6. Stop


## Flowchart

``` mermaid
flowchart TD
    A([start]) --> B[Declare weekly_working_hr, bonus_rate_hr, base_salary, employee_name, groos_salary, net_salary, bonus_payment, pension, tax, pensipn_rate, tax_rate]
    B --> Z[/Read employee_name/]
    Z --> C[/Read weekly_working_hr/]
    C --> D{Is weekly_working_hr < 0 or invalid input ?}
    D -->|Yes|E[/Print "Invalid input!"/]
    E --> J
    D --> |No| F[/Read bonus_rate_hr/]
    F -->  G{is bonus_rate_hr < 0 or other invalid input }
    G --> |Yes| E
    F -->|No| H[bonus_payment = weekly_working_hr * bonus_rate_hr, 
    groos_salary = bonus_payment + base_salary,
     pension = base_salary * pension_rate, 
     tax = base_salary * tax_rate, 
    net_salary = gross_salary - pension-tax]
    H --> I[/Print
employee_name, weekly_working_hr, bonus_rate_hr, base_salary,tax_rate, pension_rate,bonus_payment, gross_salary, pension,tax, net_salary/]
    I --> J([end])
    
```
