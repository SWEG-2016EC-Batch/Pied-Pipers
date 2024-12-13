## Pattern: Reversed Right-Angled Number Triangle

### Input
1. No explicit input from the user.

### Output
1. A reversed right-angled triangle pattern of numbers, where each row contains numbers in descending order starting from the row number.

### Pseudo Code for the Pattern

1. Start the program.

2. Outer Loop:
   - Loop variable i starts from 1 and iterates up to 5 (inclusive).
   - Represents the number of rows.

3. First Inner Loop:
   - Loop variable j starts from 5 and decrements down to i + 1 (exclusive).
   - Print a space (" ") in each iteration to create the right alignment.

4. Second Inner Loop:
   - Loop variable k starts from i and decrements down to 1 (inclusive).
   - Print the value of k in each iteration, creating the reversed number sequence for the current row.

5. End of Inner Loops:
   - After printing numbers for one row, print a newline character to move to the next row.

6. Stop the program.
