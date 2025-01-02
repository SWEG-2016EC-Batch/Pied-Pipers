#include<iostream>
#include <ctype.h>
using namespace std;
int main(){
// Scoring and Grading
int* total_scores = new int[num_students];
char* grades = new char[num_students];
string correct_answers[20] = {"TRUE", "TRUE", "FALSE", "TRUE", "FALSE",
                              "A", "B", "C", "D", "A",
                              "B", "C", "D", "A", "B",
                              "VERB TO BE", "WILLIAM SHAKESPEARE", "VERB", "SPEAKING", "AMERICA"};

for (int i = 0; i < num_students; ++i) {
    int total_score = 0;
    for (int j = 1; j <= 20; ++j) {
        if (students[i][j] == correct_answers[j - 1]) {
            total_score += 2;
        } else if (students[i][j].empty()) {
            total_score += 0;
        } else {
            total_score -= 1;
        }
    }
    total_scores[i] = total_score;
    float percentage = total_score * 2.5;
    if (percentage >= 90 && percentage <= 100) {
        grades[i] = 'A';
    } else if (percentage >= 80 && percentage < 90) {
        grades[i] = 'B';
    } else if (percentage >= 70 && percentage < 80) {
        grades[i] = 'C';
    } else if (percentage >= 60 && percentage < 70) {
        grades[i] = 'D';
    } else {
        grades[i] = 'F';
    }

  // Bubble sort to rank students based on total scores
    for (int i = 0; i < num_students - 1; ++i) {
        for (int j = 0; j < num_students - i - 1; ++j) {
            if (total_scores[j] < total_scores[j + 1]) { // Descending order
                // Swap marks
                int tempMarks = total_scores[j];
                total_scores[j] = total_scores[j + 1];
                total_scores[j + 1] = tempMarks;

                // Swap student IDs
                string* tempStudent = students[j];
                students[j] = students[j + 1];
                students[j + 1] = tempStudent;

                // Swap grades
                char tempGrade = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = tempGrade;
            }
        }
    }



  return 0;
}


