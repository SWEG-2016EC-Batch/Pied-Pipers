# Problem Analysis and Algorithm design

## Problem Analysis

### Input

1.The program accepts an integer input from the user

### Output

1.The total count of digits in the given integer.

### process

1.Convert the Number to Absolute Value:

       1.1 Negative numbers should be treated as positive since the count of digits is unaffected by the sign.
    
2.Handle the Edge Case for 0:

       2.2 A special condition is needed because dividing 0 by 10 repeatedly will always result in 0.
       
3.Count Digits by Iterative Division:

      3.1 Repeatedly divide the number by 10 to remove the last digit until the number becomes 0.
      
      3.2 For each division, increment the digit counter.

### Algorithm

Step 1: Start.

Step 2: Input the integer number from the user.

Step 3: Initialize count to 0.

Step 4: If number is 0:

       4.1 Set count to 1 (special case for zero).

       4.2 Skip to Step 7.

Step 5: Convert number to its absolute value using number = abs(number) (to handle negative numbers).

Step 6: While number is not 0, repeat the following steps:

      6.1 Increment count by 1.
      
      6.2 Remove the last digit of number using number = number / 10.
      
Step 7: Output count as the total number of digits in the input integer.

Step 8: End.



