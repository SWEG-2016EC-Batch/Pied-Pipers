# Problem Statement
The program calculates an employee's gross salary, net salary, and bonus payment based on their weekly working hours, bonus rate per hour, and base salary. 
## Problem analysis 
* The user should enter the name of the employee, bonus rate, base salary and weekly working hours.Pension rate (5%) and tax rate (15%) are constants.

* The output will be the gross salary, net salary and bonus payment of the employee.
* 
## Steps

1. **Start**

2. **Accept inputs**:
   - Employee's name.
   - Weekly working hours.
   - Bonus rate per hour.
   - Base salary.

3. **Check inputs**:
   
   3.1. If weekly working hours, bonus rate per hour, and base salary are valid (greaterthan zero and numeric), proceed to step 4.
 
   3.2. If any input is invalid, print "Invalid input" and go to step 10.

4. **Calculate bonus payment** as Weekly Working Hours times by Bonus Rate Per Hour.

5. **Calculate gross salary** as Base Salary plus Bonus Payment.

6. **Calculate pension** as Gross Salary times by Pension Rate (0.05).

7. **Calculate tax** as Gross Salary times by Tax Rate (0.15).

8. **Calculate net salary** as the difference of Gross Salary by the sum of Tax and Pension.

9. **Print**: 
   *  Employee Name,
   *  Gross Salary,
   *  Net Salary, and
   *  Bonus Payment.

10. **Stop**
