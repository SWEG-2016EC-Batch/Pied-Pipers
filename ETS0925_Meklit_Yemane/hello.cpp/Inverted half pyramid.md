# Problem Analysis and Algorithm Design

## Problem Analysis

### Input

1. An integer value representing the number of rows for the inverted half-pyramid.
2. 
### Output

1.An inverted half-pyramid pattern, where:

   1.1 The first row contains all stars (*).

   1.2 Each subsequent row has one fewer star than the previous row.

   1.3 The last row has a single star.

### Process

1.Loop through the rows from 1 to n (where n is the input number of rows).

2.For each row:

Print (n - i + 1) stars in that row.

Print each row on a new line.

### Algorithm

Step 1: Start.

Step 2: Input the number of rows n from the user.

Step 3: For each row i from 1 to n, repeat the following steps:

       3.1: For each column j from 1 to (n - i + 1):

           3.1.1: Print * without a newline.
           
       3.2: Move to the next line after printing all columns in the current row.

Step 4: End.

