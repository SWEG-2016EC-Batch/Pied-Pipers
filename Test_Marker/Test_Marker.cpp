#include <iostream>
#include <string>
#include <algorithm>
#include<iomanip>
using namespace std;
int main(){
  // User Interface and Input Handling
int main() {
    int num_students, choice, functionality;
    cout << "*****************************\n"
         << "         TEST MARKER         \n"
         << "*****************************\n";

    cout << "\nEnter the number of students: ";
    cin >> num_students;
    if (cin.fail() || num_students <= 0) {
        cout << "Invalid input, please restart the program and enter a positive number.";
        cin.clear();
    } else {
        // (Passing control to next section)
    }
}
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
    do {
        // Switch cases for functionalities
        cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Which functionality do you want: " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\n1. See top 5 or top 10 students " << "\n2. Search for a student " << endl;
        cout<<"~~~~> ";
        cin >> functionality; 
          

        switch (functionality) {
            case 1: {
                // Display top students based on user choice
                cout << "Enter 5 or 10: ";
                cin >> choice;

                if (choice != 5 && choice != 10) {
                    cout << "Invalid choice. Please restart the program and enter either 5 or 10." << endl;
                    return 1;
                }

                // Display top students
                cout << "\nTop " << choice << " Students:" << endl;
                for (int i = 0; i < choice && i < num_students; ++i) {
                    cout << i + 1 << ". " << "Student ID: " << students[i][0] << " - " << total_scores[i] << " marks - Grade: " << grades[i] << endl;
                }
                break;
            }

            case 2: {
                // Search for student by ID and display their information
                cout << "Enter the ID of the student you want to check: "; 
                string student_id; 
                cin >> student_id;
                bool student_found = false; 
                for (int i = 0; i < num_students; i++) { 
                    if (students[i][0] == student_id) { 
                        student_found = true; 
                        cout << "- - - - - - - - - -"<< endl 
                             << "\nStudent ID: " << student_id 
                             << "\nTotal Score: " << total_scores[i] 
                             << "\nAnswers: "; 
                        for (int j = 1; j <= 20; j++) { 
                            cout << j<<"."<<students[i][j] << " ";
                        } 
                        cout << "\nGrade: " << grades[i] << endl << "- - - - - - - - - - " << endl; 
                        break;
                    }
                }
                if (!student_found) { 
                    cout << "Student ID: " << student_id << " not found." << endl; 
                }
                break;
            }

            default: 
                cout << "Invalid functionality. Please try again." << endl;
        }

        cout << endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl 
                    << "Do you want to continue? If yes, enter Y "<< endl 
                    <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        
        cout<<"~~~~~> ";
        
        cin >> again;

    } while (again == 'y' || again == 'Y');  

    // Free dynamically allocated memory
    for (int i = 0; i < num_students; ++i) {
        delete[] students[i];
    }
    delete[] students;
    delete[] total_scores;
    delete[] grades;

    cout << "\n********************************" << endl;
    cout << "#          THANK YOU!           #" << endl;
    cout << "********************************" << endl;
}


  return 0;
}


