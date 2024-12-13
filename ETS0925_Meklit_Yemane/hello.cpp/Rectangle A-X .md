# Pseudo Code for Alphabet Grid Pattern Generator
## Input
- No input required.
## Output
- A 4x6 grid of sequential uppercase alphabets starting from 'A'.
- After printing each row, the program continues printing the next sequence of letters in the following row.
## Operations
- Initialize the starting alphabet as 'A'.
- Use nested loops:
- Outer loop: Controls the number of rows (4).
- Inner loop: Controls the number of columns (6) and prints the alphabets.
- Increment the alphabet for each cell in the grid.
- Move to a new line after printing 6 characters.
## Pseudo Code
1. Start the program.

2. Declare variables:
   - alphabet (char): Initialize with 'A'.

3. Create a nested loop structure:

   3.1 Outer Loop (for rows):
   - Start: i = 1
   - End: i <= 4

   3.2 Inner Loop (for columns):
   - Start: j = 1
   - End: j <= 6

      - Print the current value of alphabet.
      - Increment the value of alphabet.

   3.3 Print a newline after the inner loop completes.

4. End the program.
