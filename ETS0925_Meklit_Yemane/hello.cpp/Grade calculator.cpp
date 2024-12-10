#include <iostream>
using namespace std;

int main() {
    
    double testScore, quizScore, projectScore, assignmentScore, finalExamScore;
    double totalMark;

    cout << "Enter Test score: ";
    cin >> testScore;

    cout << "Enter Quiz score: ";
    cin >> quizScore;

    cout << "Enter Project score: ";
    cin >> projectScore;

    cout << "Enter Assignment score: ";
    cin >> assignmentScore;

    cout << "Enter Final Exam score: ";
    cin >> finalExamScore;

    totalMark = (testScore * 0.15) + (quizScore * 0.05) + 
                (projectScore * 0.20) + (assignmentScore * 0.10) + 
                (finalExamScore * 0.50);

    char grade;
    if (totalMark >= 90) {
        grade = 'A';
    } else if (totalMark >= 80) {
        grade = 'B';
    } else if (totalMark >= 70) {
        grade = 'C';
    } else if (totalMark >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Total Mark: " << totalMark << " / 100\n";
    cout << "Letter Grade: " << grade << endl;

    return 0;
}

