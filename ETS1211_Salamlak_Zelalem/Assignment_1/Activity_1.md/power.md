# Problem Analysis 
## Problem Statement 
* The program calculates the result of  x raised to the power of y 
     * The user enters the value of x and y.
     * The output will be x raised to the power of y .
     * x raised to the power of y is calculated by multiplying x by it self y times
## Algorithm 

1. **Start**

2. **Accept** the values of x and y.

3. **Check the validity of the inputs**:

    3.1. If both inputs are valid (numeric and not zero for both x and y at the same time), proceed to Step 4.

    3.2. If the inputs are invalid (both x and y are zero or inputs are non-numeric), print "Invalid input" and go to Step 6.

4. **Calculate x raised to the power of y** as the multiplication of x by itself y times

5. **Print** the value of x raised to the power of y .

6. **Stop**

## Flowchart 

```mermaid
flowchart TD
    A([Start]) --> B[/Accept the values of x and y./]
    B --> C{"`Check the input's
          Validity
     (numeric and not zero
      for both x and y
     at the same time)`"}
    C -- False --> D[/Invalid Input/]
    D --> M([Stop])
    C -- True --> F["`Calculate
 x raised to the power of y
           x^y
 `"]
    F --> L[/Print the value of
   x raised to the power of y /]
    L --> M([Stop])







