# Problem Analysis 
## Problem Statement 
  * Write a program that performs the following:
    *  Prints the reverses of the number (e.g. input = 4637215 Output=5217364).
    *  Counts the number of digits in a given number (e.g. 23,498 has five digits)
    *   Find the product of even digits of the a given number (e.g. input=4,923 prod=8)
    *   Prints the first and the last digit of the number and find their sum.
    *   Swap the first and the last digit of the number.
    *   Check whether a number is palindrome or not.
    *   Find the frequency of each digit in a given integer and print in table format.
    *   Check if a number is Strong or not.
    *   Check whether a number is Perfect number or not.

* The program requires the input of number from the user

## Algorithm Design 

### Pseudocode 
* Prints the reverses of the number

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * reversed number = 0
     * digit
     * remainder 

   Step 3. **Accept** Inputs
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 5.

     5.2. While the number is lessthan zero, goto step

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Add** the digit to the reverse number by multiplying reverse by 10 abd adding digit

   Step 8. **Remove** the last digit from the number by dividing it by 10

   Step 9. **Print** reversed number

   Step 10. **Stop**

* Counts the number of digits in a given number

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * counter = 0
     * Count

   Step 3. **Accept** Inputs
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 10

   Step 6. **Increment** the counter by one.

   Step 7. **Remove** the last digit from the number by dividing it by 10

   Step 8. **Print** Count 

   Step 9. **Stop**
  
* Find the product of even digits of the a given number

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * product = 1

   Step 3. **Accept** Input 
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

    7.1. If it is divisible by 2, goto step 8.

    7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

    Step 10. **Print** product 

   Step 11. **Stop**

* Find the product of even digits of the a given number

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * product = 1

   Step 3. **Accept** Input 
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

    7.1. If it is divisible by 2, goto step 8.

    7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

    Step 10. **Print** product 

   Step 11. **Stop**

* Prints the first and the last digit of the number and find their sum.

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * product = 1

   Step 3. **Accept** Input 
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

    7.1. If it is divisible by 2, goto step 8.

    7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

    Step 10. **Print** product 

   Step 11. **Stop**

* Swap the first and the last digit of the number.

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * product = 1

   Step 3. **Accept** Input 
     * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

    7.1. If it is divisible by 2, goto step 8.

    7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

    Step 10. **Print** product 

   Step 11. **Stop**

* Find the product of even digits of the a given number

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * product = 1

   Step 3. **Accept** Input 
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

    7.1. If it is divisible by 2, goto step 8.

    7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

    Step 10. **Print** product 

   Step 11. **Stop**



 * Find the product of even digits of the a given number

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * product = 1

   Step 3. **Accept** Input 
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

    7.1. If it is divisible by 2, goto step 8.

    7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

    Step 10. **Print** product 

   Step 11. **Stop**




 * Find the product of even digits of the a given number

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * product = 1

   Step 3. **Accept** Input 
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

    7.1. If it is divisible by 2, goto step 8.

    7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

    Step 10. **Print** product 

   Step 11. **Stop**




 * Find the product of even digits of the a given number

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * product = 1

   Step 3. **Accept** Input 
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

    7.1. If it is divisible by 2, goto step 8.

    7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

    Step 10. **Print** product 

   Step 11. **Stop**




 * Find the product of even digits of the a given number

   Step 1. **Start**

   Step 2. **Declare** variables
     * number
     * product = 1

   Step 3. **Accept** Input 
     * number
       
   Step 4. **Check the validity of the inputs(numeric and greaterthan zero)**

    4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
     5.1. While the  number is greaterthan zero, goto step 6.

     5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

    7.1. If it is divisible by 2, goto step 8.

    7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

    Step 10. **Print** product 

   Step 11. **Stop**




  




  




  




  
