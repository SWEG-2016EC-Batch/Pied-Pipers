# Problem Statement
A serial transmission line can transmit 960 characters per second. The program calculates the time required to send a file of a given size.
## Problem analysis 
 The user enters the file size. 
 The output will be the time it takes to send the file

## Steps

1. **Start**

2. **Accept the file size** in MB (Megabytes).

3. **Check the file size**:

   - If the file size is valid (greater than zero and numeric), proceed to step 4.
 
   - If the file size is invalid (less than zero, non-numeric), print "Invalid input" and go to step 11.

4. **Convert file size to bytes** as the product of file size (in MB) and 1,048,576 bytes.

5. **Calculate transfer time** as the Division of  the total file size (in bytes) tp the time it takes to transfer one character (960 seconds).

6. **Convert time into its corresponding days** as the Division of the total time by 86,400 (seconds in a day).

7. **Convert time into its corresponding hours** as the remainder from step 6 divided by 3,600 (seconds in an hour).

8. **Convert time into its corresponding minutes** as the remainder from step 7 divided by 60 (seconds in a minute).

9. **Save the remaining time** as seconds

10. **Print the results**:
    - Display the time in days, hours, minutes, and seconds.

11. **Stop**

## Flowchart 

```mermaid
flowchart TD
    A([Start]) --> B[/Accept file size in MB/]
    B --> C{Check the input's Validity}
    C -- No --> D[/Invalid Input/]
    D --> E([Stop])
    C -- Yes --> F["`Convert file size to bytes`"]
    F --> G["`Calculate transfer time`"]
    G --> H["`Convert time into its
               corresponding days`"]
    H --> I["`Convert time into
          its corresponding hours`"]
    I --> J["`Convert time into
       its corresponding minutes `"]
    J --> K["`Convert time into
        its corresponding seconds`"]
    K --> L[/days, hours, minutes,
                           seconds/]
    L --> M([Stop])
