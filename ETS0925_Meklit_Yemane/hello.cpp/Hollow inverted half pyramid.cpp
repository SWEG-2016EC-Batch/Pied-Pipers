#include <iostream>
using namespace std;

int main() {
   
    for (int i = 6; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl; 
    }

    return 0;
}
