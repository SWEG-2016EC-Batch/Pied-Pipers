# Problem Statement
The program calculates the Body Mass Index (BMI) of a person and determines if the person is underweight, normal weight, or overweight. 
## Problem analysis 
* The user should enter both weight and height and the number of people he/she want to calculate for.
* The output willbe the BMI and the category the person falls into.


## Steps
1. **Start**

2. **Accept the number of people** to process.
3. **Check the input's validity**

   3.1. If the input is valid (numeric or greaterthan zero), go to step 4
 
   3.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10
4. For each person:
   - **Accept weight** in kilograms and **height** in meters.

5. **Validate the input**:
 
   5.1. If the input is valid (greater than zero and numeric), proceed to step 5.
 
   5.2. If the input is invalid (less than or equal to zero, or a non-numeric value), print "Invalid input" and skip to the next person.

6. **Calculate BMI** as weight divided by height squared

7. **Check the BMI category**:
 
   7.1. If BMI < 18.5, print "Underweight".

    7.2. If 18.5 ≤ BMI < 25, print "Normal weight".
 
   7.3. If BMI ≥ 25, print "Overweight".

8. **Print the BMI** value and category.

9. **Repeat** steps 3 to 7 until the number of people entered is reached.

10. **Stop**

## Flowchart 
```mermaid
flowchart TD
    A([Start]) --> B[/"`Accept
 the number of people 
        `"/]
    B --> Z{Check the input's validity}
    Z -- True --> C[/"`Accept
         weight(kg)
         height(m)`"/]
    Z -- False --> X[/Print
Invalid Input/] --> O([Stop])
    C[/"`Accept
         weight(kg)
         height(m)`"/]
    C --> D{"`Check the input's
    (weight and height)Validity
(numeric or greaterthan zero)`"}
    D -- False --> E[/Print
Invalid Input/]
    E --> Y{Check if the number of people entered is reached.
}
    D -- True --> F["`Calculate BMI
BMI = weight / (height^2) `"]
   F --> G[/"`Print
BMI`"/]
    G --> H{"`Check the BMI category
If BMI < 18.5`"}
    H -- True --> I["`Print
Underweight`"]
I --> Y{Check if the number of
people entered is reached.
}
    H -- False --> J{"`check If 18.5 ≤ BMI < 25`"}
    J -- True --> K[/"`Print
      Normal weight`"/]
K --> Y{Check if the number of
people entered is reached.
}
    J -- False --> L[/"`Print
  Overweight`"/]
L --> Y{Check if the number of
people entered is reached.
}
Y -- False --> C[/"`Accept
         weight(kg)
         height(m)`"/]
Y -- True --> O([Stop])

