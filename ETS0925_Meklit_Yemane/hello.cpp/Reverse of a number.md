# Problem analysis and Algorithm design

## Problem Analysis

### Input

1.An integer value

### Output

1.The reversed number

### Process

  1. Extract each digit of the number starting from the last digit:
   
       1.1 Use the modulo operator (% 10) to extract the last digit.
   
  2. Add this digit to the reversed number after multiplying the reversed number by 10.

  3. Remove the last digit of the original number:

        3.1 Use integer division (/ 10) to reduce the number.
   
  4.Repeat the above steps until the original number becomes zero.

  5. Preserve the sign of the number (negative numbers should remain negative in reverse).

   ### Algorithm

Step 1: Start.

Step 2: Input the integer number from the user.

Step 3: Initialize reversedNumber to 0.

Step 4: While number is not equal to 0, repeat the following steps:

       4.1 Extract the last digit of number using digit = number % 10.
       
       4.2 Add digit to reversedNumber by calculating reversedNumber = (reversedNumber * 10) + digit.
       
       4.3 Remove the last digit from number using number = number / 10.
       
Step 5: Output reversedNumber.

Step 6: End.

