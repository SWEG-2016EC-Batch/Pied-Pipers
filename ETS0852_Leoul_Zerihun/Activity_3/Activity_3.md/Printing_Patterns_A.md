
# Problem Analysis 
## Problem Statement 
  * Write a program that performs the following:
    * Print a rectangle of numbers.
    * Print a rectangle of alphabets.
    * Print a right-aligned half pyramid of numbers.
    * Print a left-aligned half pyramid of numbers.
    * Print an inverted half pyramid of alphabets.
    * Print a rectangle of lowercase alphabets.
    * Print an inverted half pyramid of stars.
    * Print a full pyramid of stars.
    * Print an inverted full pyramid of stars.
    * Print a hollow full pyramid of stars.
    * Print an inverted hollow half pyramid of stars.
    * Print a hollow rectangle of stars.

* The variables are Initialized
## Algorithm Design 

### Pseudocode 
### Print a rectangle of numbers.

   Step 1. **Start**

   Step 2. **Declare** variables
   * rows
   * columns

   Step 3. **Initialize** variables 
   * rows= 5
   * columns= 5
    
  
       
   Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from 1 to rows
  * 4.2. Inner Loop: For j from 1 to columns

   Step 5. **Print** j with space in between 
  
   Step 6. **Print** a newline after the inner loop

   Step 7. **Stop**

 ### Print a rectangle of alphabets
  
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows
  * columns
  * ch 

   Step 3. **Initialize** variables  
  * rows= 4
  * columns= 6
  * ch= 'A'

Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from 0 to rows
  * 4.2. Inner Loop: For j from 0 to columns 

   Step 5. **Print** ch with a space in between

   Step 6. **Print** a newline after the inner loop

   Step 7. **Stop**

 ### Print a right-aligned half pyramid of numbers.
  
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows

   Step 3. **Initialize** variables  
  * rows= 5

Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from 1 to rows
  * 4.2. Inner Loop: For j from 1 to i

 Step 5. **Print** j with space in between.

 Step 6. **Print** a newline after the inner loop

 Step 7. **Stop**

 ### Print a Left-Aligned Half Pyramid of Numbers
  
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows

   Step 3. **Initialize** variables  
  * rows= 5

Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from 1 to rows
  * 4.2. Inner Loop: For space from 1 to (rows - i)*3.
  * 4.3 Inner Loop: For j from i to 1
  
 Step 5. **Print** j with space in between

 Step 6. **Print** (rows - i) spaces.

 Step 7. **Print** a newline after the inner loop.

 Step 8. **Stop**

 ### Print an Inverted Half Pyramid of Alphabets.
  
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows

   Step 3. **Initialize** variables  
  * rows= 5

Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from rows to 1
  * 4.2. Inner Loop: For ch from 'A' to 'A' + i

 Step 5. **Print** ch with space in between

 Step 6. **Print** a newline after the inner loop

 Step 7. **Stop**


  ### Print a Rectangle of Lowercase Alphabets
  
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows
  * columns

   Step 3. **Initialize** variables  
  * rows= 5
  * columns= 5
  * ch = 'a'
        
Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from 1 to rows
  * 4.2. Inner Loop: For ch from 'a' to 'a' + columns

 Step 5. **Print** ch with space in between

 Step 6. **Print** a newline after the inner loop.

 Step 7. **Stop**

 ### Print an Inverted Half Pyramid of Stars
 
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows

   Step 3. **Initialize** variables  
  * rows= 5

Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from rows to 1
  * 4.2. Inner Loop: For j from 1 to i

 Step 5. **Print** '*' with space in between

 Step 6. **Print** a newline after the inner loop.

 Step 7. **Stop**

### Print a Full Pyramid of Stars
 
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows

   Step 3. **Initialize** variables  
  * rows= 6

Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from 1 to rows
  * 4.2. Inner Loop: For j from 1 to columns-i

 Step 5. **Print** '*' with space in between

 Step 6. **Print** a newline after the inner loop.

 Step 7. **Stop**

### Print an Inverted Full Pyramid of Stars

   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows

   Step 3. **Initialize** variables  
  * rows= 6

Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from 1 to rows
  * 4.2. Inner Loop: For j from 1 to
 rows - i 
  * 4.3. Inner Loop: For spaces from 1 to i

 Step 5. **Print** '*' with space in between

 Step 6. **Print** a newline after the inner loop.

 Step 7. **Stop**

### Print a Hollow Full Pyramid of Stars
 
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows

   Step 3. **Initialize** variables  
  * rows= 6

Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from 1 to rows
  * 4.2. Inner Loop: For j from 0 to
rows
  * 4.3. Inner Loop: For spaces from rows - i

 Step 5. **check** if i is equalto zero or i is equal to the difference between rows and 1 or j is equal to zero of j is equal to i 
  * 5.1. If one is true, go to step 7.
  * 5.2. If all are false , goto step 8.

 Step 6. **Print** '*' 
 Step 7. **Print** a space
 Step 8. **Print** a newline after the inner loop.
 Step 9. **Stop**

### Print an Inverted Hollow Half Pyramid of Stars
 
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows

   Step 3. **Initialize** variables 
  * rows= 6

Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from rows to 1
  * 4.2. Inner Loop: For j from 1 to
i
  * 4.3. Inner Loop: For spaces from rows - i

 Step 5. **check** if i is equal to rows or j is equal to one or j is equal to i 
  * 5.1. If one is true goto step 7.
  * 5.2. If all are false goto step 8.

 Step 6. **Print** '*' 
 Step 7. **Print** a space
 Step 8. **Print** a newline after the inner loop.
 Step 9. **Stop**

### Print a Hollow Rectangle of Stars
 
   Step 1. **Start**

   Step 2. **Declare** variables  
  * rows
  * column

   Step 3. **Initialize** variables  
  * rows= 8
  * column= 7
Step 4. **Initialize** a loop
   
  * 4.1. Outer Loop: For i from 1 to rows
  * 4.2. Inner Loop: For j from 1 to columns

 Step 5. **check** if i is equal to rows or i is equal to 1 or  j is equal to one or j is equal to 1 or j is equal to columns 
 
  * 5.1. If one is true goto step 7.
  * 5.2. If all are false goto step 8.

 Step 6. **Print** '*' 

 Step 7. **Print** a space
 
 Step 8. **Print** a newline after the inner loop.
 
 Step 9. **Stop**
