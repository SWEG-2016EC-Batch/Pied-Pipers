# Problem Analysis 
## Problem Statement 
* The program calculates an employee's gross salary, net salary, and bonus payment based on their weekly working hours, bonus rate per hour, and base salary. 

    * The user should enter the name of the employee, bonus rate, base salary and weekly working hours.Pension rate (5%) and tax rate (15%) are constants.

     * Bonus Payment is calculated by the product of bonus rate and weekly working hours
 
     * Gross Salary is calculated by the sum of base salary and bonus payment
 
     * Pension and Tax are calculated by multiplying their rate with the gross salary respectively.
 
     * Net salary is calculated by subtracting the Gross salary by the sum of tax and pension 
  

     * The output will be the gross salary, net salary, tax, pension, and bonus payment of the employee.
  
## Algorithm 

1. **Start**

2. **Accept inputs**:
   - Employee's name.
   - Weekly working hours.
   - Bonus rate per hour.
   - Base salary.

3. **Check the validity of the inputs**:
   
   3.1. If the inputs are valid (greater than zero and numeric), proceed to step 4.
 
   3.2. If any input is invalid (lessthan zero or non-numeric), print "Invalid input" and go to step 10.

4. **Calculate bonus payment** as the product of Weekly Working Hours by Bonus Rate Per Hour.

5. **Calculate gross salary** as the sum of  Base Salary and Bonus Payment.

6. **Calculate pension** as the product of Gross Salary by Pension Rate (0.05).

7. **Calculate tax** as the product of Gross Salary by Tax Rate (0.15).

8. **Calculate net salary** as the difference of Gross Salary by the sum of Tax and Pension.

9. **Print**: 
   *  Employee Name,
   *  Gross Salary,
   *  Net Salary, and
   *  Bonus Payment
   *  Tax and Pension.

10. **Stop**

## Flowchart 

```mermaid
flowchart TD
    A([Start]) --> B[/Accept inputs
        Employee's name.
        Weekly working hours.
        Bonus rate per hour.
        Base salary./]
    B --> C{"`Check the input's Validity
(numeric or greaterthan zero)`"}
    C -- False --> D[/Print
Invalid Input/]
    D --> M([Stop])
    C -- True --> F["`Calculate bonus payment
bonus = WWR * bonus rate`"]
    F --> G["`Calculate gross salary
GS = BS + BP`"]
    G --> H["`Calculate pension
Pension = GS * P.rate`"]
    H --> I["`Calculate tax
Tax = GS * tax rate`"]
    I --> J["`Calculate net salary
NS = GS - ( Tax + Pension)`"]
    J --> K[/"`Print
      Employee Name
      Gross Salary
      Net Salary
      Bonus Payment
Tax and Pension`"/]
    K --> M([Stop])



