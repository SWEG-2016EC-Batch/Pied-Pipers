 # Problem Analysis and Algorithm

 ## Problem Analysis

 ### Input

 1.An integer value

 ### Output

1.The product of the even digits if at least one even digit exists.

2.A message indicating that no even digits were found if applicable.

 ### Process
 1. Handle Negative Numbers:
    
        1.1 Convert the input to its absolute value so that only digits are processed.
    
2. Iterate Through Digits:
   
       2.1 Extract each digit from the number using the modulo operator (% 10).

       2.2 Check if the digit is even using the condition digit % 2 == 0.
   
3.Compute Product:

       3.1 Multiply all even digits to compute the product.
    
       3.2 If no even digits are found, handle this case separately.
    
4.Stop Processing: Continue dividing the number by 10 (removing the last digit) until the number becomes 0.

### Algorithm

Step 1: Start.

Step 2: Input the integer number from the user.

Step 3: Convert number to its absolute value using number = abs(number) (to handle negative numbers).

Step 4: Initialize product to 1 and hasEvenDigit to false.

Step 5: While number is not equal to 0, repeat the following steps:

       5.1 Extract the last digit using digit = number % 10.
       
       5.2 Check if the digit is even (digit % 2 == 0):
       
       5.3 If true, multiply digit with product (product *= digit) and set hasEvenDigit to true.
       
       5.4 Remove the last digit using number = number / 10.

 Step 6: After the loop, check the value of hasEvenDigit:

        6.1 If true, output product as the product of even digits.
        
        6.2 If false, output a message stating that no even digits were found.
        
Step 7: End.
