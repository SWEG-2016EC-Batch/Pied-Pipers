## Pseudo Code for alphabet right angle triangle

### Input
1. No explicit input from the user.

### Output
1. Pattern of alphabets in ascending order for each line:
    - Line 1: A  
    - Line 2: A B  
    - Line 3: A B C  
    - Line 4: A B C D  
    - Line 5: A B C D E  

### Pseudo Code

1. Start the program.

2. Declare a character variable alphabet and initialize it with 'A'.

3. Outer Loop:
   - Loop variable i starts from 0 and iterates up to 4 (inclusive).
   - Represents the number of rows.

4. Inner Loop:
   - Initialize alphabet to 'A' at the beginning of each outer loop iteration.
   - Iterate until alphabet is less than or equal to 'A' + i.
   - In each iteration:
     - Print the current value of alphabet.
     - Increment alphabet.

5. End of Inner Loop:
   - After completing the inner loop for a row, print a newline character.

6. End of Outer Loop:
   - Repeat until all rows are printed.

7. Stop the program.
