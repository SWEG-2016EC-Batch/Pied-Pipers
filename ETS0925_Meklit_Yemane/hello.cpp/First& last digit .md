# Problem Analysis and Algorithm design

## Problem Analysis

### Input

1. An integer

### Output

1.The first digit of the integer.

2.The last digit of the integer.

3.The sum of the first and last digits.

### Process

1. Read Input: Prompt the user to enter an integer and store it in a variable.

2. Extract the Last Digit:

      Use the modulus operator (%) with 10 to find the last digit.

4. Take the absolute value to handle negative numbers.

5. Extract the First Digit:

     Take the absolute value of the number.

6. Use a loop to repeatedly divide the number by 10 until only one digit remains.

7. Calculate the Sum: Add the first and last digits.

8. Output Results: Display the first digit, last digit, and their sum.

### Algorithm

Step 1: Start

Step 2: Input Reading

     2.1: Prompt the user to input an integer.

     2.2: Store the input in a variable number.
  
Step 3: Extract Last Digit

    3.1: Calculate the absolute value of number.

    3.2: Use the modulus operator (%) with 10 to extract the last digit.

    3.3: Store the result in lastDigit.

Step 4: Extract First Digit

    4.1: Take the absolute value of number and store it in firstDigit.

    4.2: WHILE firstDigit is greater than or equal to 10, divide it by 10 (integer division).

    4.3: After the loop, firstDigit will hold the first digit of the number.

Step 5: Calculate the Sum

    5.1: Add firstDigit and lastDigit and store the result in sum.

Step 6: Output Results

    6.1: Print the value of firstDigit.

    6.2: Print the value of lastDigit.

    6.3: Print the value of sum.

Step 7: End
