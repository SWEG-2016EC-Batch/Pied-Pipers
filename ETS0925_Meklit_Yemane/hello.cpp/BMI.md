# Problem analysis and algorithm design



## problem analysis:

### Input

1. **Height** - in meter
 
2.**Weight**- in kg
   
3.**User decision to continue or stop** - y or n
   
### Output

1. **BMI**-Calculated body mass index

2. **Category based on BMI:**
  
       UnderWeight: BMI<18.5

       Normalweight: 18.5<=BMI<24.9

       Overweight: 25.0<= BMI<= 29.5

       Obese: BMI>29.5

 ### Formula:
 
 BMI=weight/(height*height)
 
### Restriction:

 1. both  `height` and `weight` must be valid.
 2. `Height` must be greater than 0 to prevent division by zero.
 
### Operation

 1. Varaiable declaration
   
 2.Input prompt message and read correspponding input data

 3.Calculate BMI

 4.Print output prompt message and process result (BMI)


### Algorithm:

  step 1. Start
  
  step 2. Repeat: 
  
   2.1 prompt the user to enter `weight` in Kg.
   
   2.2 prompt the user to enter `height` in meters.
   
   2.3 check if the inputs are valid:
   
   2.3.1 if the input is invalid or height <=0, display an error and terminate the program
       
   2.4 calculate BMI using the Formula: BMI = Weight/(height * height)
   
   2.5 Based on the BMI value:
   
   2.5.1 If BMI < 18.5: Display "Underweight".
       
   2.5.2 If 18.5 ≤ BMI ≤ 24.9: Display "Normal weight".
       
   2.5.3 If BMI ≥ 25: Display "Overweight".
       
   2.6 Ask the user if they want to calculate BMI for another person.
   
   2.7 Input the user's choice.
  
   2.8 If the choice is not 'y' or 'Y', break the loop and terminate the 
       program.
 
  step 3.Terminate when the user chooses not to continue.
