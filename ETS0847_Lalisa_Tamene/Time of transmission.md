# Problem Analysis and Algorithm design for Time of transmission calculator.




## Problem Analysis:
### Input
1.  **Transimission rate** - per seconds
2. **File size** - in bytes

### Output
1. **Time to send a file**- Day, Hour, Minute, Second.


### Formula: 
 1. **Total seconds** = file size / transmission rate

## Algorithm:

1. Start
    
    Define transmissionRate as 960 characters per second
    Define fileSizeInBytes as 419430400 bytes (400MB)
    
 2. Calculate the total transmission time in seconds
    
     total Seconds = fileSizeInBytes / transmissionRate
    
 3.Convert total time into days, hours, minutes, and seconds
    
    days = totalTimeInSeconds / (24 * 3600)
    remainingSeconds = totalTimeInSeconds % (24 * 3600)
    
    hours = remainingSeconds / 3600
    remainingSeconds = remainingSeconds % 3600
    
    minutes = remainingSeconds / 60
    seconds = remainingSeconds % 60
    
  4. Output the result
    
    Print "File size: " + fileSizeInBytes + " bytes"
    Print "Transmission rate: " + transmissionRate + " characters per second"
    Print "Time to send the file: " + days + " days, " + hours + " hours, " + minutes + " minutes, " + seconds + " seconds."

5. Stop
   
## Flowchart

``` mermaid
flowchart TD
    A([start]) --> B[/Read size/]
    B --> C{Is size < 0 or invalid input ?}
    C --> |YES| D[/Invalid input!/]
    D --> G
    C -->|No| E[total seconds = size / 960]
    E --> K[change the total second in to days , hours, minutes and seconds]
    K --> F[/days, hours, minutes and seconds/]
    F --> G([end])
```
