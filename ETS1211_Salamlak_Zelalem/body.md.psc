/*1,Make a program that calculates the body mass index(BMI) of a person and determine weather the person is in normall weight,
under weight or over weight.BMI is calculated as (BMI= w.h*h). Make the program to work for multiple person before terminated.

input- weight, height, number
out- BMI

Start
     REPEAT 
        Step 1- Input data for a person
        PRINT "Enter the weight (kg) of the person:"
        READ weight

        PRINT "Enter the height (meters) of the person:"
        READ height

        Step 2- Calculate BMI using the formula
        BMI = weight / (height * height)

        Step 3- Determine the BMI category
        IF BMI < 18.5 THEN
            PRINT "The person is underweight."
        ELSE IF BMI >= 18.5 AND BMI < 24.9 THEN
            PRINT "The person has a normal weight."
        ELSE
            PRINT "The person is overweight."

        Step 4- Ask if the user wants to calculate BMI for another person
        PRINT "Do you want to calculate BMI for another person? (yes/no)"
        READ response

    UNTIL response = "no"
Stop


      
