#Problem analysis:
*Inputs:
1,num - number of person you want to calculate
2,height
3,weight
*Output:
1,BMI-Calculated body mass index
2,category based on BMI:
  Underweight: BMI<18.5
  Normalweight: 18.5<=BMI<24.9
  Overweight: 25.0<= BMI<= 29.5
  Obese: BMI>29.5
*restriction:
 1, both height and weight must be valid.
 2, Height must be greater than 0 to prevent division by zero.
 3, The program terminates when invalid input entered.

#Algorithm:
  1, Start
  2, repeat forever:
   2.1 prompt the user to input weight in Kg.
   2.2 prompt the user to input height in meters.
   2.3 check if the inputs are valid:
    2.3.1 if the input is invalid or height <=0, display an error and terminate the program
   2.4 calculate BMI using the Formula: BMI = Weight/(height * height)
   2.5 determine the BMI category:
    2.5.1 Underweight: BMI < 18.5
    2.5.2 Normal weight: 18.5 <= BMI < 24.9
    2.5.3 Overweight: 25.0 <= BMI <= 29.5
    2.5.4 Obese: BMI > 29.5
   2.6 desplay BMI values with their category
  3, End 
