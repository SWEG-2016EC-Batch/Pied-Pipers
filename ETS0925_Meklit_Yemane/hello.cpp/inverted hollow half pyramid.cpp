#include <iostream>
using namespace std;

int main() {
   
    for (int i = 6; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            if (i == 6||j == 1||j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
