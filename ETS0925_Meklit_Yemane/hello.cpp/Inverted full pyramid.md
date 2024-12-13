## Pattern: Inverted full pyramid

### Input
1. No explicit input from the user.

### Output
1. An inverted right-angled triangle pattern made of asterisks (*), with 6 rows.

### Pseudo Code for the Pattern

1. Start the program.

2. Outer Loop:
   - Loop variable i starts from 1 and iterates up to 6 (inclusive).
   - Represents the number of rows.

3. First Inner Loop:
   - Loop variable j starts from 1 and iterates up to i (inclusive).
   - Print a space (" ") in each iteration to create indentation for the right-aligned pattern.

4. Second Inner Loop:
   - Loop variable j starts from 0 and iterates up to 6 - i (inclusive).
   - Print an asterisk (* ) in each iteration to form the pattern.

5. End of Inner Loops:
   - After printing spaces and asterisks for one row, print a newline character to move to the next row.

6. Stop the program.
