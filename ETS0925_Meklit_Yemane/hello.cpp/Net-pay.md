# Problem analysis and algorithm design

## Problem analysis

### Input 

1.Base Salary: Fixed monthly salary.

2.Worked Hours: Total hours worked by the employee during the period.

3.Bonus Rate: Per-hour bonus for all worked hours.

4.Overtime Bonus Rate: Additional per-hour pay for hours worked beyond 40 (only if applicable).

5.Tax Rate: Percentage of gross pay to be deducted as tax.

### Output 

1.Gross Pay: Total pay before deductions.

2.Pension Deduction: 7% of the basic salary.

3.Tax Deduction: Based on the gross pay and tax rate.

4.Net Pay: Final amount received after deductions.

### Process:
1. Check for Overtime:
   
   1.1 If the worked hours exceed 40, calculate overtime hours and corresponding overtime pay.
 
   1.2 Calculate Gross Pay:
 
        Gross Pay = Basic Salary + (Worked Hours × Bonus Rate) + (Overtime Hours × Overtime Bonus Rate, if applicable).
     
   1.3 Calculate Deductions:
 
        Pension Deduction: 7% of the basic salary.
     
        Tax Deduction: (Tax Rate ÷ 100) × Gross Pay.
     
   1.4 Calculate Net Pay:
 
        Net Pay = Gross Pay - (Pension Deduction + Tax Deduction).

### Algorithm 
Step 1: Start.

Step 2: Initialize constants: pension rate = 7%.

Step 3: Input the following from the user:

          Base salary.

          Worked hours.

          Bonus rate.

If worked hours > 40, input overtime bonus rate per hour.

Tax rate (as a percentage).

Step 4: Calculate gross pay:

       Gross pay = basic salary + (worked hours × bonus rate).

       If worked hours > 40:

       Calculate overtime hours = worked hours - 40.

Add overtime pay = overtime hours × overtime bonus rate to gross pay.

Step 5: Calculate deductions:

        Pension = pension rate × basic salary.

        Tax = (tax rate ÷ 100) × gross pay.

Step 6: Calculate net pay:

        Net pay = gross pay - (pension + tax).

Step 7: Output:

        Gross pay.

        Pension deduction.

        Tax deduction.

        Net pay.

Step 8: End.

### Flow chart


