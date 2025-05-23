## Problem Analysis and Algorithm design for BMI Calculator




## Problem Analysis:
### Input
1. **Height** - in meters
2. **Weight** - in Kg
3. **User decision to continue or stop** -  y or n

### Output
1. **BMI**-Calculated body mass index

2. **Category based on BMI:**
  
       UnderWeight: BMI<18.5

       Normalweight: 18.5<=BMI<24.9

       Overweight: 25.0<= BMI<= 29.5

       Obese: BMI>29.5

### Formula: 
 BMI = Weight/(height * height)    

### Restriction: 

 1. both height and weight must be valid.
 2. Height must be greater than 0 to prevent division by zero.
 3. The program terminates when invalid input entered.


## Algorithm:
1. Start
2. repeat forever:
    
    2.1 prompt the user to input weight in Kg.

    2.2 input the Weight 

    2.3 prompt the user to input Height in meters.

    2.4 input the Height

    2.5 check if the inputs are valid:

    2.5.1 if the input is invalid or Height <=0, display an error  and terminate the program.

        
    2.6 calculate BMI using the Formula: BMI = Weight/(Height * Height)

    2.7 desplay BMI values

    2.8 determine the BMI category

    2.8.1 Underweight: BMI < 18.5

    2.8.2 Normalweight: 18.5 <= BMI < 24.9

    2.8.3 Overweight: 25.0 <= BMI <= 29.5
   
    2.8.4 Obese: BMI > 29.5

    2.9 Prompt the user if they want to calculate BMI for another person

    2.10 Input the user's choice.

    2.11 If the choice is not 'y' or 'Y', break the loop and terminate the program.
       
3. End 


## Flowchart
``` mermaid
flowchart TD
    A([start]) --> B[Read weight in kg]
    B --> C{is weight invalid input?}
    C -->|Yes| D{is trial of weight > 0 ?}
    D -->|Yes| B
    D -->|No| N
    C -->|No| E[/Read height in m/]
    E --> F{is height invalid input?}
    F -->|Yes| G{Is trial of height > 0 ?}
    G -->|Yes| E
    G -->|NO| N
    F -->|No| P[BMI = weight /height^2]
    P --> H[/ Print BMI/]
    H --> I{Is 0 < BMI < 18.5 ?}
    I -->|Yes| J[/ Print "Under weight"/]
    I -->|No| K{Is 18.5 <= BMI < 25 ?}
    K -->|Yes| L[/Print "Normal weight"/]
    K -->|No| M[/Print "Over weight"/]
    L --> N([End])
    J --> N
    M --> N
```

