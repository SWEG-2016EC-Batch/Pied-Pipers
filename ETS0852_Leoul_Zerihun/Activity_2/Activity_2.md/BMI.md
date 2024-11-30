# Problem Statement
The program calculates the Body Mass Index (BMI) of a person and determines if the person is underweight, normal weight, or overweight. 
## Problem analysis 
* The user should enter both weight and height and the number of people he/she want to calculate for.
* The output willbe the BMI and the category the person falls into.


## Steps
1. **Start**

2. **Accept the number of people** to process.

3. For each person:
   - **Accept weight** in kilograms and **height** in meters.

4. **Validate the input**:
   - If the input is valid (greater than zero and numeric), proceed to step 5.
   - If the input is invalid (less than or equal to zero, or a non-numeric value), print "Invalid input" and skip to the next person.

5. **Calculate BMI**:
   - BMI = weight / (height * height)

6. **Determine weight category**:
   - If BMI < 18.5, print "Underweight".
   - If 18.5 ≤ BMI < 25, print "Normal weight".
   - If BMI ≥ 25, print "Overweight".

7. **Print the BMI** value and category.

8. Repeat steps 3 to 7 until the number of people entered is reached.

9. **Stop**
