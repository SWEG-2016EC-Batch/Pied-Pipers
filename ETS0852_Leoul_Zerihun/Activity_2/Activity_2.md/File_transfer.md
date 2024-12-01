# Problem Analysis 
## Problem Statement 
* A serial transmission line can transmit 960 of characters per second. The program calculates the time required to send a file of a given size.

   * The user enters the file size.

   * The output will be the time takes to send the file

   * The time required to send a file is calculated by dividing the file size to 960(character per second)
  

## Algorithm 

1. **Start**

2. **Accept the file size** in MB (Megabytes).

3. **Check the validity the file size**:

   3.1. If the file size is valid (greater than zero and numeric), proceed to step 4.
 
   3.2. If the file size is invalid (less than zero, non-numeric), print "Invalid input" and go to step 11.

4. **Convert file size to bytes** as the product of file size (in MB) and 1,048,576 bytes.

5. **Calculate transfer time** as the division of  the total file size (in bytes) to the time it takes to transfer one character (960 seconds).

6. **Convert time into its corresponding days** as the division of the total time by 86,400 (seconds in a day).

7. **Convert time into its corresponding hours** as the remainder from step 6 divided by 3,600 (seconds in an hour).

8. **Convert time into its corresponding minutes** as the remainder from step 7 divided by 60 (seconds in a minute).

9. **Save the remaining time** in seconds

10. **Print** the time in days, hours, minutes, and seconds.

11. **Stop**

## Flowchart 

```mermaid
flowchart TD
    A([Start]) --> B[/Accept file size in MB./]
    B --> C{Check the input's Validity}
    C -- False --> D[/Print
    Invalid Input/]
    D --> M([Stop])
    C -- True --> F["`Convert file size to bytes.
file size * 1,048,576`"]
    F --> G["`Calculate transfer time.
file size / 960`"]
    G --> H["`Convert time into its
               corresponding days.
(time / 86400)`"]
    H --> I["`Convert the remaining
                time into
          its corresponding hours.
(time % 86400 / 3600)`"]
    I --> J["`Convert the remaining
                time into
          its corresponding minutes.
(time % 86400 % 3600 / 60)`"]
    J --> K["`Save the remaining time
    in seconds
(time % 86400 % 3600 % 60)`"]
    K --> L[/Print
the time in  days, hours,
minutes and  seconds/]
    L --> M([Stop])
