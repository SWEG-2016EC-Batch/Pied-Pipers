# Problem Analysis 
## Problem Statement 
  * Write a program that performs the following:
    *  Prints the reverses of the number.
    *  Counts the number of digits in a given number.
    *   Find the product of even digits of the a given number.
    *   Prints the first and the last digit of the number and find their sum.
    *   Swap the first and the last digit of the number.
    *   Check whether a number is palindrome or not.
    *   Find the frequency of each digit in a given integer.
    *   Check if a number is Armstrong or not

    *   Check whether a number is Perfect number or not.

* The program requires the input of number from the user

## Algorithm Design 

### Pseudocode 
### Prints the reverses of the number

   Step 1. **Start**

   Step 2. **Declare** variables
    
   * number
   * reversed number = 0
   * digit
   * remainder 

   Step 3. **Accept** Inputs
    
   * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

   * 4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   * 4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check** the number
  
   *  5.1. While the  number is greaterthan zero, goto step 5.

   *  5.2. While the number is lessthan zero, goto step

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Add** the digit to the reverse number by multiplying reverse by 10 abd adding digit

   Step 8. **Remove** the last digit from the number by dividing it by 10

   Step 9. **Print** reversed number

   Step 10. **Stop**

 ### Counts the number of digits in a given number

   Step 1. **Start**

   Step 2. **Declare** variables
   
   * number
   * counter = 0
   * Count

   Step 3. **Accept** Inputs
    
   * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

   *  4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   * 4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check** the number
  
   5.1. While the  number is greaterthan zero, goto step 6.

   5.2. While the number is lessthan zero, goto step 10

   Step 6. **Increment** the counter by one.

   Step 7. **Remove** the last digit from the number by dividing it by 10

   Step 8. **Print** Count 

   Step 9. **Stop**
  
### Find the product of even digits of the a given number

   Step 1. **Start**

   Step 2. **Declare** variables
   
   * number
   * product = 1

   Step 3. **Accept** Input 
    
   * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

  * 4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
  * 4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check the number**
  
 *  5.1. While the  number is greaterthan zero, goto step 6.

 *  5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Check** the digit is divisible by two.

  *  7.1. If it is divisible by 2, goto step 8.

  *  7.2. If it is not divisible by 2, goto step 6

   Step 8. **Multiply** the  digit   by product.

   Step 9. **Remove** the last digit from the number by dividing it by 10.

   Step 10. **Print** product 

   Step 11. **Stop**

### Prints the first and the last digit of the number and find their sum.

   Step 1. **Start**

   Step 2. **Declare and initaialize** variables
   
   * number
   * first
   * last
   * sum
       
   Step 3. **Accept** Input 
   
   * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

   * 4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
  * 4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check** the number
  
   *  5.1. While the  number is greaterthan zero, goto step 6.

   * 5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10 and store it in last.
     
   Step 7. **Divide** the number by 10
  as store it in first

   Step 8. **Add** the  first and last

   Step 9. **print** Sum

   Step 10. **Stop** 

 ### Swap the first and the last digit of the number.

   Step 1. **Start**

   Step 2. **Declare and initaialize** variables
   
   * number
   * first
   * last
   * digit

   Step 3. **Accept** Input 
   
   * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

  *  4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
  * 4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check** the number
  
   *  5.1. While the  number is greaterthan zero, goto step 6.

   *  5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the last digit of the number using modulo of 10 and store it in last.
     
   Step 7. **Divide** the number by 10 and store it in first.

   Step 8. **Caculate** the numberof digit as the logarithm of the number to base 10.

   Step 9. **Calculate** the swapped number by shifting the last digit to the most significant position, keeping the middle digits unchanged, and moving the first digit to the least significant position.

  Step 10. **Print** Swapped number

  Step 11. **Stop**

### Check whether a number is palindrome or not.

   Step 1. **Start**

   Step 2. **Declare** variables
  
   * number
   * reversed number = 0
   * digit
   * remainder 

   Step 3. **Accept** Inputs
  
   * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

   * 4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
   * 4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check** the number
  
   *  5.1. While the  number is greaterthan zero, goto step 5.

   *  5.2. While the number is lessthan zero, goto step

   Step 6. **Extract** the last digit of the number using modulo of 10.
     
   Step 7. **Add** the digit to the reverse number by multiplying reverse by 10 and adding digit

   Step 8. **Remove** the last digit from the number by dividing it by 10
   
   Step 9. **Check** whether the reversed number is the same as the original number
    * 9.1. If it is the same goto Step 10
    * 9.2. If it is not the same goto Step 11

   Step 10. **Print** Is palindrome number

   Step 11. **print** Isn't Palindrome 
   
   Step 12. **Stop**

### Find the frequency of each digit in a given integer and print in table format.

   Step 1. **Start**

   Step 2. **Declare and initaialize** variables
  
   * number
   * first
   * last
   * digit
   * array frequency[10]

   Step 3. **Accept** Input 
    
   * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

  *  4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
  * 4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check** the number
  
   *  5.1. While the  number is greaterthan zero, goto step 6.

   *  5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** digits of the number using modulo of 10.
     
   Step 7. **Increment** the frequency of the digit by 1.

   Step 8. **Remove** digits by dividing the number by 10

   Step 9. **Print** the frequency of each number.

  Step 10. **Stop**

### Check if a number is Armstrong or not

Step 1. **Start**

   Step 2. **Declare and initaialize** variables
    
   * number
   * sum = 0
     
   Step 3. **Accept** Input 
  
   * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

  *  4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
  * 4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check** the number
  
   *  5.1. While the  number is greaterthan zero, goto step 6.

   *  5.2. While the number is lessthan zero, goto step 11

   Step 6. **Extract** the digits of the number using modulo of 10.
     
   Step 7. **Add** the digits cubed to sum and store it in sum.
   
   Step 8. **Remove** the digits by dividing it by 10.

   Step 9. **Check** if the sum is the same as the original number
   
   * 9.1 If the sum is same as the original number goto Step 10
 
   * 9.2 If they are different goto Step 11.
    
  Step 10. **Print** Is Armstrong 

  Step 11. **Print** Isn't Armstrong 

  Step 12. **Stop**

### Check whether a number is Perfect number or not
   
   Step 1. **Start**

   Step 2. **Declare and initaialize** variables
    
   * number
   * Sum = 0
    

   Step 3. **Accept** Input 
  
   * number
       
   Step 4. **Check** the validity of the inputs(numeric and greaterthan zero)

  *  4.1. If the input is valid (numeric or greaterthan zero), go to step 5.
 
  * 4.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 10.

   Step 5. **Check** the number
  
   *  5.1. While the  number is greaterthan zero, goto step 6.

   *  5.2. While the number is lessthan zero, goto step 11

   Step 6. **Find** the divisors of the number by dividing the number starting from 1 to itself
     
   Step 7. **Add** the divisors and store it in sum 
   
   Step 8. **Check** the sum if it is the same as the original number 
  
   * 8.1. If the sum is the same as the original number goto step 9

   * 8.2. If they aren't the same goto step 10

   Step 9. **Print** Is Perfect 

  Step 10. **Print** Isn't Perfect 

  Step 11. **Stop**





  
