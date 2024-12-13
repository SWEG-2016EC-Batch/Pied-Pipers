# Problem analysis and algorithm design for power calculator

## problem analysis:

### Input

1.Accept an integer from the user.

### Output

1.Print a message indicating whether the input number is a palindrome.

### Operation

1. Reverse the digits of the number.

2. Extract digits from the number one by one and construct the reversed number.
   
3. Compare the reversed number to the original number.

4.If they are the same, the number is a palindrome.

5.Otherwise, it is not.

### Algorithm

Step 1: Start

Step 2: Read the integer input `num` from the user.

Step 3:  Initialize a variable `original_num` to store the original number:

   original_num = num

Step 4:  Initialize a variable `reversed_num` to 0.

 Step 5: Reverse the digits of the number:
 
      WHILE num > 0:
   
       5.1 - Extract the last digit:
       
         digit = num % 10
         
       5.2 - Append the digit to `reversed_num`:
       
         reversed_num = (reversed_num * 10) + digit
         
       5.3 - Remove the last digit from `num`:
       
         num = num /10

Step 6: Compare `original_num` and `reversed_num`:

   IF original_num == reversed_num:
   
       Print "The number is a palindrome."
       
   ELSE:
   
       Print "The number is not a palindrome."

step 7:End



    
