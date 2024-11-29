A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long it will take to send a file, given the file size. 

The problem requires file size as an input. The output will be the time it takes for a file to be transferred.

The algorithm would be:

step 1 - Start
step 2 - Accept the file size in Mb(Mega bytes)
step 3 - check the validityof the file.
     3.1 if the file is valid, goto step 4 
     3.2 if the file is invalid (if input is lessthan 0), print invalid input and goto step 11
step 4 - convert the Mb file into byte by multiplying it to 1048576.
step 5 - calculate how long does the file transfer takes as the division of the file size and the time it takes per character 
step 6 - calculate the time in days as the time divided by 86400 
step 7 - calculate the time in hours as the remainder divided by 3600 
step 8 - calculate the time in minutes as the remainder divided by 60 
step 9 - save the remainder time in seconds
step 10 - print the time in days,hours,minutes and seconds
step 11 - stop
