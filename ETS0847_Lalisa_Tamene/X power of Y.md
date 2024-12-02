
# Problem Analysis and Algorithm design for Power Calculator




## Problem Analysis:
### Input
1. `x` - The base intiger
2. `y` - The exponent intiger 

### Output
The value of `x` the power of `y`.

### Calculation: 
To calculate the power, we use the function `pow`(x, y) from the `<cmath>` library, which computes the value of `x` raised to the power of `y`.

## Algorithm:
1. Start
2. Declare variables for `x` , `y` and `power`.
3. Prompt the user to input `x`.
4. Read and store the input value in x.
5. Prompt the user to input `y`.
6. Read and store the input value in `y`.
7. Calculate the power `x` raised to `y` using the `pow` function and store the result in `power`.
8. Store the result in the variable `power`.
9. Output the value of `power`.
10. End


## Flowchart

``` mermaid
flowchart TD
    A([start]) --> B[Declare and initialize result = 1]
    B --> C[/Read base and exponent/]
    C --> D{Are both base and exponent 0 ?}
    D -->|Yes|E[/Print "Undefined!"/]
    E --> L
    D --> |No| F{Is the base negative and the exponent fraction ?}
    F --> |Yes| G[/Print "It's an imaginary number and it doesn't work under real number"/]
    G --> L
    F -->|No| H{Is either of the base or the exponent or both invalid input ?}
    H -->|yes| I[/Print "Error!"/]
    I --> L
    H -->|No| J[result = base^exponent]
    J --> K[/Print result/]
    K --> L([end])
```
