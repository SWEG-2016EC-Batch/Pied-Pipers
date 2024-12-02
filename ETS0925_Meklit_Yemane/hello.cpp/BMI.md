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

### Algorithm:

  step 1. Start
  
  step 2. Repeat: 
  
   2.1 prompt the user to enter `weight` in Kg.
   
   2.2 prompt the user to enter `height` in meters.
   
   2.3 check if the inputs are valid:
   
      2.3.1 if the input is invalid or height <=0, display an error and terminate the program
       
   2.4 calculate BMI using the Formula: BMI = Weight/(height * height)
   
   2.5 check if the inputs are valid:
   
    2.6 calculate `BMI` using the Formula: BMI = Weight/(Height * Height)

    2.7 desplay BMI values

    2.8 determine the BMI category

    2.8.1 Underweight: BMI < 18.5

    2.8.2 Normalweight: 18.5 <= BMI < 24.9

    2.8.3 Overweight: 25.0 <= BMI <= 29.5
   
    2.8.4 Obese: BMI > 29.5

    2.9 Prompt the user if they want to calculate BMI for another person

    2.10 Input the user's choice.

    2.11 If the `choice` is not 'y' or 'Y', break the loop and terminate the program.

    3. End 
    
  # Flow chart

![1 (1)](https://github.com/user-attachments/assets/ba11d47a-433f-4e1c-a0ad-7f3cf075f01e)
