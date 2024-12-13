
## Problem Analysis:
### Input

1. Weekly working hours
2. Bonus rate per hour
3. Base salary

### Output
1. pension
2. Gross salary
3. Net salary
4. Bonus payment
5. incometax



### Calculation: 
1. **Bonus Payment:** bonus_payment = weekly_working_hours * bonus_rate_per_hour
2. **Gross Salary:** gross_salary = base_salary + bonus_payment
3. **pension** = baseSalary * 0.07

4. **Net Salary:** net_salary = gross_salary - incometax - Pension

## Algorithm:
1. start
2. DECLARE weeklyHours AS INTEGER
3. DECLARE baseSalary, incometax, bonusPayment AS FLOAT
4. SET bonusPayment TO 0.0
5. PRINT "Enter base salary: "
6. INPUT baseSalary
7. PRINT "Enter weekly working hours: "
8. INPUT weeklyHours
9. IF weeklyHours > 40 THEN

       DECLARE bonusRate AS FLOAT
       PRINT "Enter bonus rate per hour: "
       INPUT bonusRate
       SET bonusPayment TO weeklyHours * bonusRate
10. ELSE

    SET pension TO baseSalary * 0.07

    SET gross_salary TO baseSalary + bonusPayment

11. IF gross_salary >= 3500 THEN
    SET incometax TO gross_salary * 0.3
12. ELSE IF gross_salary >= 2000 THEN
    SET incometax TO gross_salary * 0.25
13. ELSE IF gross_salary >= 1200 THEN
    SET incometax TO gross_salary * 0.2
14. ELSE IF gross_salary >= 600 THEN
    SET incometax TO gross_salary * 0.15
15. ELSE IF gross_salary >= 200 THEN
    SET incometax TO gross_salary * 0.1
16. ELSE
  
    SET incometax TO 0.0

    SET netSalary TO gross_salary - incometax - pension

18. PRINT baseSalary + bonusPayment (formatted to 2 decimal places)
19. PRINT bonusPayment
20. PRINT incometax
21. PRINT  pension
22. PRINT netSalary
23. END


