
## Problem Analysis:
### Input

1. Test result (out of 15)
2. Quiz result (out of 5)
3. Project result (out of 20)
4. Assignment result (out of 10)
5. Final exam result (out of 50)

### Output
1. If the input is invalid, print "Invalid!".

2. If the input is valid, print the total average and determine the grade based on the total score:

       A+ for 90-100

       A for 80-89

       B+ for 75-79

       B for 60-74

       C+ for 55-59

       C for 45-54

       D for 30-44

       F for 0-29 (with a message indicating failure)


## Pseudo Code:
1. SATART

2. DECLARE test, quiz, project, assignment, final AS INTEGER
3. DECLARE total_average AS INTEGER
4. PRINT "Enter your test result out of 15: "
5. INPUT test
6. PRINT "Enter your quiz result out of 5: "
7. INPUT quiz
8. PRINT "Enter your project result out of 20: "
9. INPUT project
10. PRINT "Enter your assignment result out of 10: "
11. INPUT assignment
12. PRINT "Enter your final exam result out of 50: "
13. INPUT final
14. SET total_average TO test + quiz + project + assignment + final
15. PRINT "Your average is ", total_average
16. IF (INPUT_FAIL OR total_average < 0 OR total_average > 100) THEN
    PRINT "Invalid!"
17. ELSE

        IF total_average >= 90 THEN
        PRINT "Congrats, your grade is: A+"
        ELSE IF total_average >= 80 THEN
        PRINT "Congrats, your grade is: A"
        ELSE IF total_average >= 75 THEN
        PRINT "Your grade is: B+"
        ELSE IF total_average >= 60 THEN
        PRINT "Your grade is: B"
        ELSE IF total_average >= 55 THEN
        PRINT "Your grade is: C+"
        ELSE IF total_average >= 45 THEN
        PRINT "Your grade is: C"
        ELSE IF total_average >= 30 THEN
        PRINT "Your grade is: D"
    18. ELSE

            PRINT "Your grade is: F"
            PRINT "You failed!"

19. END


