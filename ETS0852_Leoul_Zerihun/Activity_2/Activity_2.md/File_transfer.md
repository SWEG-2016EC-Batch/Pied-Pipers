# Problem Statement
A serial transmission line can transmit 960 characters per second. The program calculates the time required to send a file of a given size.
## Problem analysis 
 The user enters the file size. 
 The output will be the time it takes to send the file

## Steps

1. **Start**

2. **Accept the file size** in MB (Megabytes).

3. **Validate the file size**:

   - If the file size is valid (greaterthan zero), proceed to step 4.
 
   - If the file size is invalid (less than zero, a character, or a symbol), print "Invalid input" and go to step 11.

4. **Convert file size**:
   - Multiply the file size (in MB) by 1,048,576 to convert it to bytes.

5. **Calculate transfer time**:
   - Divide the total file size (in bytes) by the time it takes to transfer one character (1/960 seconds).

6. **Calculate time in days**:
   - Divide the total time by 86,400 (seconds in a day).

7. **Calculate time in hours**:
   - Find the remainder from step 6 and divide it by 3,600 (seconds in an hour).

8. **Calculate time in minutes**:
   - Find the remainder from step 7 and divide it by 60 (seconds in a minute).

9. **Save the remaining time**:
   - Store the leftover seconds.

10. **Print the results**:
    - Display the time in days, hours, minutes, and seconds.

11. **Stop**
