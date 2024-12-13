#include <iostream>
using namespace std;

int main() {
    double test, quize, assignment, project, final_exam, total_mark;
    char letter_grade;

    cout << "Enter the mark of test(100): ";
    cin >> test;
    cout << "Enter the mark of quize(100): ";
    cin >> quize;
    cout << "Enter the mark of assignment(100): ";
    cin >> assignment;
    cout << "Enter the mark of project(100): ";
    cin >> project;
    cout << "Enter the mark of final exam(100): ";
    cin >> final_exam;

    if (cin.fail() || test < 0 || test > 100 || quize < 0 || quize > 100|| assignment < 0 || assignment > 100|| project < 0 || project > 100 || final_exam < 0 || final_exam > 100) {
        cout << "Invalid input" << endl;
    } else {
    

    total_mark = test*0.15 + quize*0.05  + assignment*0.1 + project*0.2 + final_exam*0.5;
    
    
    if (total_mark >= 90) {
        letter_grade = 'A+';
    } else if (total_mark >= 80) {
        letter_grade = 'A';
    } else if (total_mark >= 75) {
        letter_grade = 'B+';
    } else if (total_mark >= 60) {
        letter_grade = 'B';
    }else if (total_mark >= 55) {
        letter_grade = 'C+';
    }else if (total_mark >= 45) {
        letter_grade = 'C';
    }else if (total_mark >= 30) {
        letter_grade = 'D';
    }else {
        letter_grade = 'F';
    }

    

    cout << "Your  total mark is " <<  total_mark << endl;
    cout << "Your letter grade is " << letter_grade << endl;
}
    return 0;
}
