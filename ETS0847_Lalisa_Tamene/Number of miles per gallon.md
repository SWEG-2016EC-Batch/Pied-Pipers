
# Problem Analysis and Algorithm design for Mile Calculator




## Problem Analysis:
### Input
1. Fuel tank capacity (in gallons)
2. Miles per gallon (mpg)

### Output
Number of miles the automobile can be driven without refueling.

### Calculation: 
  To find out the number of miles the automobile can be driven, multiply the fuel tank capacity by the miles per gallon.


## Algorithm:
1. Start
2. Declare variables for gallonCapacity, mile_per_gallon, and miles.
3. Prompt the user to input the fuel tank capacity in gallons.
4. Read and store the input value in gallonCapacity.
5. Prompt the user to input the miles per gallon.
6. Read and store the input value in mile_per_gallon.
7. Calculate the number of miles the automobile can be driven without refueling by multiplying gallonCapacity by mile_per_gallon.
8. Store the result in the variable miles.
9. Output the value of miles with an appropriate message.
10. End


## Flowchart


``` mermaid

flowchart TD
    A([start]) --> B[Declare cap_fuel, mile_perGallon, num_miles ]
    B --> C[/Read cap_fuel/]
    C --> D{Is cap_fuel invalid input ?}
    D -->|Yes| R[/Print "Invalid input!"/]
    R --> K
    D --> |No| F[/Read mile_perGallon/]
    F --> G{Is mile_perGallon invalid input ?}
    G -->|Yes| R
    G -->|No| I[num_miles = cap_fuel * mile_perGallon]
    I --> J[/Print num_miles/]
    J --> K([end])
```
