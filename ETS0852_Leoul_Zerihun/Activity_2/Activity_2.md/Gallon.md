# Problem Statement
The program calculates the number of miles an automobile can be driven without refueling, given the fuel tank capacity and miles per gallon (MPG).
## Problem analysis 
* The user should enter both the capacity of the automobile fuel tank (in gallons) and the miles per gallon (MPG) the automobile can drive.

* The output will be the total number of miles the automobile can be driven without refueling.

## Steps

1. **Start**

2. **Accept inputs**:
   - The capacity of the automobile fuel tank (in gallons).
   - The miles per gallon (MPG) the automobile can drive.

3. **Validate the inputs**:
   - If both inputs are valid (greater than zero and numeric), proceed to step 4.
   - If the inputs are invalid (less than zero, characters, or symbols), print "Invalid input" and go to step 6.

4. **Calculate the total miles**:
   - Multiply the tank capacity by the MPG: `total_miles = tank_capacity * MPG`.

5. **Print the result**:
   - Display the total number of miles the automobile can be driven without refueling.

6. **Stop**
