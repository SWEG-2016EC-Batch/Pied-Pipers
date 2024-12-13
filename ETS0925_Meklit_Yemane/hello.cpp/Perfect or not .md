# Problem analysis and Algorithm design

## Problem analysis

### Input

1.Accept a positive integer input from the user.

### Output

2.Print whether the given number is a Perfect number.

### Process

1.Identify all divisors of the number except the number itself.

2.Calculate the sum of these divisors.

3.Compare the sum with the original number.

     3.1 If the sum equals the original number, it is a Perfect number.

     3.2 Otherwise, it is not.

### Algorithm

Step 1: Start

Step 2: Read the integer input `num` from the user.

Step 3: Initialize `sum_of_divisors` to 0.

Step 4:Find all divisors of `num` except itself:

   FOR i = 1 to num // 2:
   
       IF num % i == 0:
       
           sum_of_divisors = sum_of_divisors + i

Step 5: Compare `sum_of_divisors` with `num`:

   IF sum_of_divisors == num:
   
       Print "The number is a Perfect number."
       
   ELSE:
   
       Print "The number is not a Perfect number."

Step 6:End
