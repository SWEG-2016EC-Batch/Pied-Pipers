# Problem analysis and Algorithm design

## Problem analysis

### Input

1.Test Score

2.Quiz Score

3.Project Score 

4.Assignment Score

5.Final Exam Score

### Output

1.Total Mark: The computed total mark out of 100.

2.Letter Grade: The corresponding grade based on the total mark.

### Process

1.Weighted Contributions:

    1.1 Compute the contribution of each score to the final total mark using the given weights:
    
        Test: 15%
        
        Quiz: 5%
        
        Project: 20%
        
        Assignment: 10%
        
        Final Exam: 50%
        
2.Calculate Total Mark:

      Total Mark = (Test × 0.15) + (Quiz × 0.05) + (Project × 0.20) + (Assignment × 0.10) + (Final Exam × 0.50).
      
3.Determine Letter Grade:

    3.1 Based on the total mark:
    
        90–100: A
        
        80–89: B
        
        70–79: C
        
        60–69: D
        
        Below 60: F
        
### Algorithm

Step 1: Start.

Step 2: Input the following scores from the user:

          2.1 Test score
          
          2.2 Quiz score 
          
          2.3 Project score 
          
          2.4 Assignment score 
          
          2.5 Final exam score 
          
Step 3: Calculate the total mark using the formula:

        Total Mark = (Test × 0.15) + (Quiz × 0.05) + (Project × 0.20) + (Assignment × 0.10) + (Final Exam × 0.50).
        
Step 4: Determine the letter grade based on the total mark:

        If total mark ≥ 90, grade = 'A'.
        
        Else if total mark ≥ 80, grade = 'B'.
        
        Else if total mark ≥ 70, grade = 'C'.
        
        Else if total mark ≥ 60, grade = 'D'.
        
        Else, grade = 'F'.
        
Step 5: Output the total mark and letter grade.

Step 6: End.







