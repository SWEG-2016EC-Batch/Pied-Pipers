# Problem Analysis and Algorithm design

## Problem Analysis

### Input

1.Integer number: A whole number provided by the user.

### Output

2.Swapped number: The number with its first and last digits interchanged.

### Process 

1. Determine the first and last digits of the number.
   
2. The last digit can be obtained using the modulus operation (number % 10).
   
3. The first digit can be found by dividing the number repeatedly by 10 until a single digit remains.
   
4. If the number has only one digit, swapping is trivial (the number remains the same).
   
5. Swap the first and last digits while keeping the middle part unchanged.
   
6. Convert the number to a string or perform arithmetic to isolate and reconstruct the digits

### Algorithm

step 1: START

sttep 2: Read the integer input `num` from the user.

step 3:  If `num` is a single digit:

   3.1 - Print `num` (no change required).
     
   Else:

     3.2 - Determine the last digit:
       
         last_digit = num % 10
       
    3.3 - Determine the first digit:
       
         first_digit = num
       
         WHILE first_digit >= 10:
       
             first_digit = first_digit / 10
       
    3.4  - Remove the first and last digits from `num`:

         middle_part = (num % (10^(length of num - 1))) // 10
       
     3.5 - Reconstruct the swapped number:
       
         swapped_num = (last_digit * 10^(length of num - 1)) + (middle_part * 10) + first_digit

step 4: Print `swapped_num`.

step5: end


