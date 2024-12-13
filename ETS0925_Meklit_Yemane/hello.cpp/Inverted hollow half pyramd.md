## Pattern: Hollow Inverted half pyramid

### Input
1. No explicit input from the user.

### Output
1. A hollow inverted right-angled triangle pattern made of asterisks (*), with 6 rows.

### Pseudo Code for the Pattern

1. Start the program.

2. Outer Loop:
   - Loop variable i starts from 6 and decrements down to 1 (inclusive).
   - Represents the number of rows.

3. Inner Loop:
   - Loop variable j starts from i and decrements down to 1.
   - Condition Check:
     - If i == 1 (bottom row), i == 6 (top row), j == 1 (first column), or j == i (last column), print an asterisk (*).
     - Otherwise, print spaces (" ").

4. End of Inner Loop:
   - After printing spaces and asterisks for one row, print a newline character to move to the next row.

5. Stop the program.
