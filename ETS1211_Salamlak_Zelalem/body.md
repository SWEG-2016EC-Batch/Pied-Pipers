# Problem Analysis

## Problem Statement
The program calculates the Body Mass Index (BMI) of a person and determines if the person is underweight, normal weight, or overweight. 
 
* The user should enter both weight and height and the number of people he/she want to calculate for.

* The output willbe the BMI and the category the person falls into.

*  BMI(Body Mass Index) is calculated by dividing the weight by the height squared.


## Algorithm

1. **Start**

2. **Accept the number of people** whose BMI is going to be calculated .
3. **Check the input's(number of people) validity**

   3.1. If the input is valid (numeric or greaterthan zero), go to step 4
 
   3.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10

4. For each person **Accept weight** in kilograms and **height** in meters.

5. **Check the Validity of the input(Weight, height)**:
 
   5.1. If the input is valid (greater than zero and numeric), proceed to step 6.
 
   5.2. If the input is invalid (less than or equal to zero, or a non-numeric value), print "Invalid input" and skip to the next person.

6. **Calculate BMI** as weight divided by the height squared

7. **Check the BMI category**:
 
   7.1. If BMI < 18.5, print "Underweight".

    7.2. If 18.5 ≤ BMI < 25, print "Normal weight".
 
   7.3. If BMI ≥ 25, print "Overweight".

8. **Print the BMI** value and category.

9. **Check if the number of
people entered has reached the limit**

    9.1. If the number of
people entered has reached the limit, go to step 10

    9.2, If the number of people entered hasn't reached the limit, go to step 4

10. **Stop**

## Flowchart 
```mermaid
flowchart TD
    A([Start]) --> B[/"`Accept
 the number of people 
        `"/]
    B --> Z{"`Check the input's
   (number of people) validity`"}
    Z -- True --> C[/"`Accept
         weight(kg)
         height(m)`"/]
    Z -- False --> X[/Print
Invalid Input/] --> O([Stop])
    C[/"`Accept
         weight(kg)
         height(m)`"/]
    C --> D{"`Check the input's
       (weight and height)
        Validity
(numeric or greaterthan zero)`"}
    D -- False --> E[/Print
Invalid Input/]
    E --> Y{Check if the number of people entered is reached.
}
    D -- True --> F["`Calculate BMI
BMI = weight / (height^2) `"]
   F --> H{"`Check the BMI category
If BMI < 18.5`"}
    H -- True --> I[/"`Print
Underweight`"/]
I --> G[/"`Print
BMI`"/]
    H -- False --> J{"`check If 18.5 ≤ BMI < 25`"}
    J -- True --> K[/"`Print
      Normal weight`"/]
K --> G[/"`Print
BMI`"/]
    J -- False --> L[/"`Print
  Overweight`"/]
L --> G[/"`Print
BMI`"/]
G --> Y{Check if the number of
people entered 
has reached the limit.
}
Y -- False --> C[/"`Accept
         weight(kg)
         height(m)`"/]
Y -- True --> O([Stop])

    
