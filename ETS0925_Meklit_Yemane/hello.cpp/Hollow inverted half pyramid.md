# Problem Analysis and Algorithm Design

## Problem Analysis

### Input

1. An integer value representing the number of rows for the hollow inverted half-pyramid.
   
### Output

1. A hollow inverted half-pyramid pattern, where:
   
     The first row contains all stars (*).
   
     The subsequent rows have stars only at the beginning and end, with spaces in between.
   
     The last row has a single star.
   
### Process

1. Loop through the rows from 1 to n (where n is the input number of rows).
   
2.  For each row:
   
    2.1 Loop through the columns from 1 to (n - i + 1):

    2.2 Print a * if:

    2.3 It is the first column (j == 1).

    2.4 It is the last column in that row (j == n - i + 1).

        Otherwise, print a space.

3. Print each row on a new line.
   
### Algorithm

Step 1: Start.

Step 2: Input the number of rows n from the user.

Step 3: For each row i from 1 to n, repeat the following steps:

         3.1: For each column j from 1 to (n - i + 1):

              3.1.1: If j == 1 or j == (n - i + 1), print * without a newline.

              3.1.2: Else, print a space (" ") without a newline.

         3.2: Move to the next line after printing all columns in the current row.

Step 4: End.

