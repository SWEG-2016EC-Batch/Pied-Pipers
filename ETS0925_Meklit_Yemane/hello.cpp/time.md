Problem Analysis and Algorithm design for Transfer Time Calculator
Problem Analysis:
*Input
byte - Size of the file in bytes
*Output
Time it takes to send the file, expressed in days, hours, minutes, and seconds
Calculation:
Calculate the total time in seconds using the formula: time = byte / bytePerSecond.
Algorithm:
1.Start
2.Declare variables for byte (file size in bytes), time (total time in seconds), days, hours, minutes, and seconds.
3.Initialize a constant bytePerSecond with the value 960.
4.Prompt the user to enter the size of the file in bytes.
5.Read and store the input value in byte.
6.Calculate the total time in seconds using the formula: time = byte / bytePerSecond.
7.Convert time to days, hours, minutes, and seconds:
  7.1 days = time / 86400
  7.2 Update time to time % 86400
  7.3 hours = time / 3600
  7.4 Update time to time % 3600
  7.5 minutes = time / 60
  7.6 seconds = time % 60
8.Output the time in a readable format.
9.End
