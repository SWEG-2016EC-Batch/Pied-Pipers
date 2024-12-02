# Problem Analysis 
## Problem Statement 
* The program calculates the number of miles an automobile can be driven without refueling
     * The user should enter both the capacity of the automobile fuel tank (in gallons) and the miles per gallon (MPG) the automobile can drive.

     * The output will be the total number of miles the automobile can be driven without refueling.

     * The number of miles an automobile can be driven without refueling is calculated by multiplying the miles per gallon by the capacity of the fuel in the tank 

## Algorithm 

1. **Start**

2. **Accept inputs**:
   - The capacity of the automobile fuel tank (in gallons).
   - The miles per gallon (MPG) the automobile can be driven.

3. **Check the valaidity of the inputs**:

    3.1. If the inputs are valid (numeric and greater than zero), proceed to step 4.

    3.2. If the inputs are invalid (less than zero or non-numeric ), print "Invalid input" and go to step 6.

4. **Calculate the total miles** as the product of tank capacity by the miles per gallon.

5. **Print** the total number of miles the automobile can be driven without refueling.

6. **Stop**

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/"`Accept the input
       * The capacity of the
automobile fuel tank
   (in gallons)
       * The miles per gallon
      the automobile
     can be driven.`"/]


    B --> D{"`Check the input's Validity
(numeric or greaterthan zero)`"}
    D -- False --> E[/Invalid Input/]
    E --> M([Stop])
    D -- True --> G["`Calculate the total miles
can be driven
without refuelling
Tot miles = Capacity * MPG
        `"]
    G --> L[/Print
total number of miles the
          automobile can be driven
           without refueling./]
    L --> M([Stop])
