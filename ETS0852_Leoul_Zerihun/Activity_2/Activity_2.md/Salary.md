Design an algorithm and write a program to read an employee name weekly working hours, bonus rate per hour and base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,tax: 15%).

The problem requires an employee's name, weekly working hours, bonus rate per hour, and base salary entered by the user. Pension rate and tax rate are constant.The output required is the gross salary, net salary, and bonus payment of the employee.

The algorithm would be:

step 1 - Start
step 2 - Accept the employee's name, weekly working hours, bonus rate per hour, and base salary
step 3 - check weekly working hours, bonus rate per hour, and base salary
     3.1 if weekly working hours, bonus rate per hour, and base salary is greater than zero, goto step 4
     3.2 if weekly working hours, bonus rate per hour, and base salary is lessthan zero, print invalid input and goto step 10
step 4 - Calculate bonus payment as the product of bonus rate per hour by weekly working hours.
step 5 - Calculate gross salary as the sum of bonus payment and base salary
step 6 - Calculate pension as the product of gross salary and pension rate
step 7 - Calculate tax as the product of gross salary and tax rate.
step 8 - Calculate net salary as the difference between gross salary and the sum of tax and pension
step 9 - print gross salary, net salary, bonus payment, and the employee's name
step 10 - Stop


