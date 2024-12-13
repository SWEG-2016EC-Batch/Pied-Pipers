#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    char letter = 'A'; 

    cout << endl;

    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << letter << " "; 
            letter++;
            if (letter > 'X') {
                letter = 'A';
            }
        }
        cout << endl; 
    }

    return 0;
}

