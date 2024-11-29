 /*4,algorithm to read an employee name weekly working hours, bonus rate per hour 
 and base salary and find the employee gross-salary,
 net salary and bonus payment,(hint:pension rate -5%, tax: 15%)

 input - name, weekly working hours, bonus rate per hour, base salary,
 output - employee_name,gross_salary,net_salary,bonus_payment,

step 1- start
   Step 2- Input data from user
    PRINT "Enter the employee's name:"
    READ employee_name
    
    PRINT "Enter the weekly working hours:"
    READ working_hours
    
    PRINT "Enter the bonus rate per hour:"
    READ bonus_rate_per_hour
    
    PRINT "Enter the base salary:"
    READ base_salary

    Step 3- Calculate gross salary
    gross_salary = base_salary + (bonus_rate_per_hour * working_hours)

    Step 4- Calculate pension deduction (5% of gross salary)
    pension_deduction = 0.05 * gross_salary

    Step 5- Calculate tax deduction (15% of gross salary)
    tax_deduction = 0.15 * gross_salary

    Step 6- Calculate net salary
    net_salary = gross_salary - pension_deduction - tax_deduction

    Step 7- Calculate bonus payment
    bonus_payment = bonus_rate_per_hour * working_hours

    Step 8- Output the results 

    PRINT "Employee Name: " employee_name
    PRINT "Gross Salary: " gross_salary
    PRINT "Net Salary: " net_salary
    PRINT "Bonus Payment: " bonus_payment

step 9- stop
