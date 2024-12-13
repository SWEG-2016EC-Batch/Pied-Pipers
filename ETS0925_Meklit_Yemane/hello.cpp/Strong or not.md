# Problem analysis and Algorithm design

## Problem analysis

### Input

1.Accept an integer input from the user.

### Output

1.Print whether the given number is a Strong number.

### Process

1. Extract each digit from the number using modulus and integer division.
   
2. Compute the factorial of each digit and accumulate the sum.
   
3. Compare the accumulated sum with the original number.
   
   3.1 If the sum equals the original number, it is a Strong number.

   3.2 Otherwise, it is not.
        
### Algorithm

Step 1: Start

Step 2: Read the integer input `num` from the user.

Step 3: Store the original number for comparison:

   original_num = num

Step 4: Initialize `sum_of_factorials` to 0.

Step 5: Define a function `factorial(n)`:

   - Initialize `fact = 1`.
     
   - FOR i = 1 to n:
     
       fact = fact * i
     
   - RETURN fact.

Step 6: Compute the sum of the factorials of the digits:

   WHILE num > 0:
   
       - Extract the last digit:
       
         digit = num % 10
         
       - Add the factorial of the digit to `sum_of_factorials`:
       
         sum_of_factorials = sum_of_factorials + factorial(digit)
         
       - Remove the last digit:
       
         num = num / 10

Step 7: Compare `sum_of_factorials` with `original_num`:

   IF sum_of_factorials == original_num:

       Print "The number is a Strong number."
       
   ELSE:
   
       Print "The number is not a Strong number."

Step 7:End




        
        
