## Pattern: Hollow full pyramid

### Input
1. No explicit input from the user.

### Output
1. A hollow right-angled triangle pattern made of asterisks (*), with 6 rows.

### Pseudo Code for the Pattern

1. Start the program.

2. Outer Loop:
   - Loop variable i starts from 0 and iterates up to 5 (inclusive).
   - Represents the number of rows.

3. First Inner Loop:
   - Loop variable j starts from 0 and iterates up to 6 - i.
   - Print a space (" ") in each iteration to create the right alignment.

4. Second Inner Loop:
   - Loop variable j starts from 0 and iterates up to i.
   - Condition Check:
     - If i == 0 (top row), i == 5 (bottom row), j == 0 (first column), or j == i (last column), print an asterisk (*).
     - Otherwise, print spaces ("  ") to create the hollow effect.

5. End of Inner Loops:
   - After printing spaces and asterisks for one row, print a newline character to move to the next row.

6. Stop the program.
   
