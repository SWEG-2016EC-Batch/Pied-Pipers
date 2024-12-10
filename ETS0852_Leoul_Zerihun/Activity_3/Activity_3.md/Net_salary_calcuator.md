# Problem Analysis 
## Problem Statement 
  * Develop a program that find the Net-Pay of an employee.

  * The program requires Basic salary, worked hours and bonus rate as an input.

  * The required output is the employee's Net-Pay.

  * Tax rate and pension rate are constants that are assigned
      * Pension(7%)
      * Tax
           * 0% for < 200 birr
           * 10% for 200-600 birr
           * 15% for 600-1200 birr
           * 20% for 1200-2000 birr
           * 25% for 2000 - 3500 birr
           * 30% for >3500 birr

## Algorithm Design
### Pseudocode 
1. **Start**

2. **Accept**
     * Basic salary
     * worked hours
     * bonus rate
3. **Check the validity of the inputs(numeric and greaterthan zero)**

    3.1. If the input is valid (numeric or greaterthan zero), go to step 4
 
   3.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 

4. **Check the worked hours** if it is greaterthan 40.

   4.1. If worked hours is greaterthan 40 goto step 5.
 
   4.2. If worked hous is lessthan or equal to 40 goto step 7.
   
5. **Calculate extra worked hours** as the difference between worked hours and 40.

6. **Calculate bonus** as the product of extra worked hours and bonus rate.

7. **Calculate gross salary** as the sum of basic salary and bonus.

8. **Calcualte pension** as the product of pension rate and basic salary.

9. **Check the corresponding tax rate** if gross salary is lessthan 200.

     9.1. If the gross salary is lessthan 200, the rate is 0%

     9.2. If the gross salary is between 200 and 600, the rate is 10%

     9.3. If the gross salary is between 600 and 1200, the rate is 15%

     9.4. If the gross salary is between 1200 and 2000, the rate is 20%

     9.5. If the gross salary is between 2000 and 3500, the rate is 25%

     9.6. If the gross salary is greater than 3500, the rate is 30%

10. **Calculate tax** as the product of gross salary and the tax rate.

11. **Calcuate net-pay** as the difference of gross salary and the sum of pension and tax. 

12. **Print** the net-pay.

13. **Stop**

## Flowchart 
```mermaid
flowchart TD
    A([Start]) --> B[/"`Accept
      * Basic salary
      * worked hours
      * bonus rate 
        `"/]
    B --> C{"`Check the validity of the inputs
(numeric and greaterthan zero)`"}
    C -- False --> D[/"`Invalid input`"/]
     D --> Z([Stop])
   C -- True --> E{"`Check if the worked hours
is greaterthan 40`"}
E -- True --> F["`Calculate extra worked hour
EWR = WR - 40`"]
E -- False --> G["`Gross salary is equal to
Basic salary`"]
G --> J["`Calcualte Pension
pension = BS × 0.07 `"]

F --> H["` calculate bonus
bonus = EWR × bonus rate `"]
H --> I["`Calculate Gross salary
GS = BS + bonus`"]
I --> J["`Calcualte Pension
pension = BS × 0.07 `"]
J --> L{Check the corresponding tax rate
if gross salary is
lessthan 200 birr.}
L -- True --> M[/ The tax rate is 0/] --> V["` Calculate tax
tax = gross salary × tax rate `"]
L -- False --> N{ Check if gross salary is
 200-600 birr}
N -- True --> O[/ The tax rate is 0.1/] --> V["` Calculate tax
tax = gross salary × tax rate `"]
N -- False --> P{ Check if gross salary is
 600-1200 birr}
P -- True --> Q[/ The tax rate is 0.15 /] --> V["` Calculate tax
tax = gross salary × tax rate `"]
P -- False --> R{ Check if gross salary is
 1200-2000 birr}
R -- True --> S[/ The tax rate is 0.2/] --> V["` Calculate tax
tax = gross salary × tax rate `"]
R -- False --> T{ Check if gross salary is
 2000-3500 birr}
T -- True --> K[/ The tax rate is 0.25/] --> V["` Calculate tax
tax = gross salary × tax rate `"]
T -- False --> U[/The tax rate is 0.3/] --> V["` Calculate tax
tax = gross salary × tax rate `"]
V --> X["` Calculate Net-Pay
Np = Gs - Pen - Tax`"]
X --> Y[/"` Print
    Net-Pay
    Bonus
    Gross Salary
    Tax and Pension `"/] --> Z([Stop])









 