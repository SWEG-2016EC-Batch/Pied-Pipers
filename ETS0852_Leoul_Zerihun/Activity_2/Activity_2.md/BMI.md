Make a program that calculates the Body Mass Index (BMI) of a person and determine whether the person is in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). 

The problem needs weight and height as an input. The output will be BMI.

The algorithm would be: 
step 1- start
step 2 - Accept the number for how many people it is going to work
step 3 - Accept weight in kilograms and height in meters
step 4 - check whether the input is valid or invalid ( if input is lessthan or equal to zero ,characters or symbols)
   4.1 - if it is valid, goto step 5
   4.2 - if it is invalid, print invalid input and goto step 10
step 5- calculate BMI as weight/(height*height)
step 6- check the BMI 
    6.1- if BMI is lessthan 18.5 ,it is underweight
    6.2- if it is greaterthan or equal to 18.5 and lessthan 25, it is normal weight
step 7- check the BMI 
    7.1- if BMI is greaterthan or equal to 25, it is overweight 
    
step 8- print the BMI
Step 9- continue the execution until the number entered is reached
step 10- Stop
