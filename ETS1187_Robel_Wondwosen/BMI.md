#Problem analysis:
*Inputs:
1,height
2,weight
3,User decision to continue or stop
*Output:
1,BMI-Calculated body mass index
2,category based on BMI:
  Underweight: BMI<18.5
  Normalweight: 18.5<=BMI<24.9
  Overweight: 25.0<= BMI<= 29.5
  Obese: BMI>29.5
*Formula: BMI = Weight/(height * height)
*restriction:
 1, both height and weight must be valid.
 2, Height must be greater than 0 to prevent division by zero.
 3, The program terminates when invalid input entered.

#Algorithm:
1.Start
2.repeat forever:
 2.1 prompt the user to input weight in Kg.
 2.2 input the weight 
 2.3 prompt the user to input height in meters.
 2.4 input the height
 2.5 check if the inputs are valid:
  2.5.1 if the input is invalid or height <=0, display an error and terminate 
        the program
 2.6 calculate BMI using the Formula: BMI = Weight/(height * height)
 2.7desplay BMI values
 2.8 determine the BMI category:
    2.8.1 Underweight: BMI < 18.5
    2.8.2 Normal weight: 18.5 <= BMI < 24.9
    2.8.3 Overweight: 25.0 <= BMI <= 29.5
    2.8.4 Obese: BMI > 29.5
 2.9 Prompt the user if they want to calculate BMI for another person
 2.10 Input the user's choice.
 2.11 If the choice is not 'y' or 'Y', break the loop and terminate the 
       program.
3.End 
