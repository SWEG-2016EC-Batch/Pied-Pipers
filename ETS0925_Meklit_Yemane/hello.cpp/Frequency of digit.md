# Problem analysis and Algorithm design

## Problem analysis

### Input

1. Accept a positive integer from the user.

### Output

Print a table showing each digit and its frequency.

### Process

1. Initialize an array (or list) of size 10 to store the frequency of digits (indices 0–9 represent digits).
   
2. Extract each digit from the input number using modulus and division operations.
   
3. Increment the corresponding index in the array for each digit.
   
4. Repeat until all digits of the number are processed.
       
### Algorithm

Step 1: Start

Step 2: Input the integer `num` from the user.

Step 3: Initialize an array `frequency[10]` with all elements set to 0.

Step 4: Compute the frequency of each digit:

   WHILE num > 0:
   
       - Extract the last digit:
       
         digit = num % 10
         
       - Increment the frequency of the digit:
       
         frequency[digit] = frequency[digit] + 1
         
       - Remove the last digit from `num`:
       
         num = num // 10

Step 5: Display the frequency table:

   FOR each digit from 0 to 9:
   
       Print "Digit: <digit>, Frequency: <frequency[digit]>"

Step 6:End


         
       
