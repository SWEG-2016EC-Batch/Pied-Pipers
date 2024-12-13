# Problem Analysis 
## Problem Statement 
  * Write a program that read the compute the total mark and print the corresponding letter-grade

  * The program requires inputs
     * Test(15%)
     * Project(20%)
     * Assignment(10%)
     * Quize(5%)
     * Final(50%)
  * The output wil be the letter grade of the student based on the folowing scale.
     * if grade is >=90 is A+
     * if grade is >=80 is A
     * if grade is >=75 is B+
     * if grade is >=60 is B
     * if grade is >=55 is C+
     * if grade is >=45 is C
     * if grade is >=30 is D
     * if grade is < 30 is F

## Algorithm Design 
### Pseudocode 
1. **Start**

2. **Accept inputs**
   * Tests
   * Quize
   * Assignment
   * Project
   * Final
         
3. **Check the input's validity** ( numeric and not lessthan zero)

   3.1. If the input is valid (numeric and not lessthan zero), go to step 4
 
   3.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 7.

4. **Caculate** 
   * Test * 0.15
   * Quize * 0.05
   * Assignment * 0.1
   * Project * 0.2
   * Final * 0.5

5. **Calculate Total mark** as the sum of all inputs.


6. **Check the Total mark category**:
 
   6.1. If total mark >= 90, print 'A+'.

    6.2. If total mark >= 80, print 'A'.
 
   6.3. If total mark >= 75, print 'B+'.
 
   6.4. If total mark >= 60, print 'B'.

   6.5. If total mark >= 55, print 'C+'.

   6.6. If total mark >= 45, print 'C'.

   6.7. If total mark >= 30, print 'D'.

   6.8. If total mark < 30, print 'F'.

7. **print** total mark.
8. **Stop**
