
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


## Algorithm:
1. START

2. DECLARE choice, num, decision, reversedNumber, digit_count, product, last, first, remNum, power AS INTEGER
3. DECLARE last_digit, first_digit, swapped, palindrome, isStrong, isPerfect, countFirstDigit AS INTEGER

4. DO


       PRINT "Enter a number: "
       INPUT num
       DECLARE orginalNum AS INTEGER = num
       PRINT "Choose an operation: "
       PRINT "1. Reverse the number"
       PRINT "2. Count the digits of the number"
       PRINT "3. Product of even digits of the number"
       PRINT "4. First and last digit and their sum"
       PRINT "5. Swap first and last digit"
       PRINT "6. Exit"
5. INPUT choice

6. SWITCH choice

           CASE 1:
           SET reversedNumber TO 0
           WHILE num != 0
           SET rem TO num % 10
           SET reversedNumber TO reversedNumber * 10 + rem
           SET num TO num / 10
           END WHILE
           PRINT "Reversed Number = ", reversedNumber
           BREAK

           CASE 2:
           SET digit_count TO 0
           WHILE num != 0
           SET digit_count TO digit_count + 1
           SET num TO num / 10
           END WHILE
           PRINT "Number of digits = ", digit_count
           BREAK

           CASE 3:
           SET product TO 1
           WHILE num != 0
           SET rem TO num % 10
           IF rem % 2 == 0
            SET product TO product * rem
           END IF
           SET num TO num / 10
           END WHILE
           PRINT "The product of the even digits = ", product
           BREAK

           CASE 4:
           SET last TO num % 10
           WHILE num != 0
           SET rem TO num % 10
           SET first TO rem
           SET num TO num / 10
           END WHILE
           PRINT "First digit = ", first
           PRINT "Last digit = ", last
           PRINT "Sum of first and last digits = ", first + last
           BREAK

           CASE 5:
           SET last_digit TO num % 10
           WHILE num != 0
           SET digit_count TO digit_count + 1
           SET num TO num / 10
           END WHILE
           SET orginalNum TO orginalNum / 10
           SET power TO POW(10, digit_count-2)
           SET remNum TO orginalNum % power
           SET first_digit TO orginalNum / power
           SET swapped TO last_digit * power + remNum * 10 + first_digit
           PRINT "Number after swapping = ", swapped
           BREAK

7. END SWITCH


8. PRINT "Do you want to stay in this program (Enter 10 to exit): "
9. INPUT decision
10. WHILE decision != 10

11. END




