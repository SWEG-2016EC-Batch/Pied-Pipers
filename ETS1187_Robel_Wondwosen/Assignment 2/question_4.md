
## Problem Analysis:

**Input**

- Number of rows
- Number of columns

**Output**

Various patterns:

       Grid of numbers
       
       Characters from 'A' to 'X' with line breaks
       
       Right-angled triangle of numbers
       
       Inverted right-angled triangle of numbers
       
       Right-angled triangle of letters
       
       Grid of lowercase letters
       
       Hollow square of asterisks
       
       Right-aligned triangle of asterisks
       
       Pyramid shape of asterisks
       
       Inverted pyramid shape of asterisks
       
       Hollow inverted half pyramid
       
       Hollow full pyramid
       
**Pattern 1**:

Print a square grid of numbers from 1 to num, where num is provided by the user.

**Pattern 2:**

Print letters from 'A' to 'X' in rows, breaking lines after 'F', 'L', and 'R'.

**Pattern 3:**

Print a right-angled triangle with numbers incrementing from 1 on each row.

**Pattern 4:**

Print an inverted pyramid of numbers starting from the row number down to 1.

**Pattern 5:**

Print an increasing sequence of capital letters from 'A' to 'E'.

**Pattern 6:**

Print lowercase letters from 'a' to 'e' repeatedly.

**Pattern 7:**

Print a hollow square of stars.

**Pattern 8:**

**Print an inverted triangle of stars.

**Pattern 9:**

Print a pyramid of stars.

**Pattern 10:**

Print an inverted pyramid of stars.

**Pattern 11:**

Print a diagonal and top border of stars.

**Pattern 12:**

Print a star pyramid with specific conditions.

## Algorithm:
1. Start

2. DECLARE num, i, j, choice AS INTEGER
3. DECLARE ch, c AS CHARACTER

4. PRINT "Enter the number: "
5. INPUT num

    // Pattern 1: Square grid of numbers

       FOR i FROM 1 TO num DO

        FOR j FROM 1 TO num DO
            PRINT j
        END FOR
            PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 2"

    // Pattern 2: Alphabet rows with breaks
    FOR ch FROM 'A' TO 'X' DO

        PRINT ch
        IF ch == 'F' OR ch == 'L' OR ch == 'R' THEN
            PRINT new line
        END IF
       END FOR
       PRINT new line
       PRINT "Pattern 3"

    // Pattern 3: Right-angled triangle with numbers
    FOR i FROM 1 TO 5 DO

        FOR j FROM 1 TO i DO
            PRINT j
        END FOR
        PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 4"

    // Pattern 4: Inverted pyramid of numbers
    FOR i FROM 1 TO 5 DO

        FOR j FROM i TO 5 DO
            PRINT "  "
        END FOR
        FOR j FROM i TO 1 STEP -1 DO
            PRINT j
        END FOR
        PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 5"

    // Pattern 5: Increasing sequence of capital letters
    FOR ch FROM 'A' TO 'E' DO

        FOR c FROM 'A' TO ch DO
            PRINT c
        END FOR
        PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 6"

    // Pattern 6: Lowercase letters repeated
    FOR ch FROM 'a' TO 'e' DO

        FOR c FROM 'a' TO 'e' DO
            PRINT c
        END FOR
        PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 7"

    // Pattern 7: Hollow square of stars
    FOR i FROM 1 TO 8 DO

        FOR j FROM 1 TO 8 DO
            IF i == 1 OR i == 8 OR j == 1 OR j == 8 THEN
                PRINT "* "
            ELSE
                PRINT "  "
            END IF
        END FOR
        PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 8"

    // Pattern 8: Inverted triangle of stars
    FOR i FROM 1 TO 6 DO

        FOR j FROM i TO 6 DO
            PRINT "* "
        END FOR
        PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 9"

    // Pattern 9: Pyramid of stars
    FOR i FROM 1 TO 6 DO

        FOR j FROM i TO 6 DO
            PRINT " "
        END FOR
        FOR j FROM 1 TO i DO
            PRINT "*"
        END FOR
        FOR j FROM 1 TO i - 1 DO
            PRINT "*"
        END FOR
        PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 10"

    // Pattern 10: Inverted pyramid of stars
    FOR i FROM 1 TO 6 DO

        FOR j FROM 1 TO i DO
            PRINT " "
        END FOR
        FOR j FROM i TO 6 DO
            PRINT "*"
        END FOR
        FOR j FROM i TO 5 DO
            PRINT "*"
        END FOR
        PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 11"

    // Pattern 11: Diagonal and top border of stars
    FOR i FROM 1 TO 6 DO

        FOR j FROM 6 TO 1 STEP -1 DO
            IF i == 1 OR j == 6 OR i == j THEN
                PRINT "* "
            ELSE
                PRINT "  "
            END IF
        END FOR
        PRINT new line
       END FOR

       PRINT new line
       PRINT "Pattern 12"

    // Pattern 12: Specific star pyramid
    FOR i FROM 1 TO 6 DO

        FOR j FROM i TO 6 DO
            PRINT " "
        END FOR
        FOR j FROM 1 TO i DO
            IF j == 2 OR (i == 6 AND j != 1) THEN
                PRINT "*"
            ELSE
                PRINT " "
            END IF
        END FOR
        FOR j FROM 1 TO i DO
            IF j == i OR i == 6 THEN
                PRINT "*"
            ELSE
                PRINT " "
            END IF
        END FOR
        PRINT new line
      END FOR

7. END





