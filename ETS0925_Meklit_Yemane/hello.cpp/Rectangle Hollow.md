## Pattern: Hollow Rectangle

### Input
1. No explicit input from the user.

### Output
1. A hollow rectangle pattern made of asterisks (*), with 7 rows and 8 columns.

### Pseudo Code for the Pattern

1. Start the program.

2. Outer Loop:
   - Loop variable i starts from 1 and iterates up to 7 (inclusive).
   - Represents the number of rows.

3. Inner Loop:
   - Loop variable j starts from 1 and iterates up to 8 (inclusive).
   - Condition Check:
     - If i == 1 (top row), i == 7 (bottom row), j == 1 (first column), or j == 8 (last column), print an asterisk (*).
     - Otherwise, print a space (" ").

4. End of Inner Loop:
   - After printing spaces and asterisks for one row, print a newline character to move to the next row.

5. Stop the program.
