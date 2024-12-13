#include <iostream>
using namespace std;

int main () {
    
   char ch = 'A';
   int rows, columns;
   int choice;
   
     cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
  cout << "Enter the choice of pattern: ";
    cin >> choice;
if (cin.fail() || rows <= 0 || columns <= 0) {
cout << "Invalid input";
}else{
    switch(choice) {
      case 1:
            cout << "Rectangle of Numbers" << endl;
            for (int i = 1; i <=rows; i++) {
                for (int j = 1; j <=columns; j++)
                    cout << j << " ";
                cout << endl;
            }
            cout <<endl;
             break;
        case 2:
            cout << "Rectangle of Alphabet" << endl; 
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++)
                    cout << ch++ << " ";
                cout << endl;
            }
            cout <<endl;
        break;
       case 3: 
            cout << "Half pyramid of numbers aligned to right" << endl;
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++)
                    cout << j << " ";
                cout << endl;
            }
            cout <<endl;
            break;     
      case 4: 
           cout << "Half pyramid of numbers aligned to left" << endl;
            for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= (rows - i) * 3; space++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j << "  ";
        }
        cout << endl;
    }

           break;
       case 5:
            cout << "Inverted half pyramid of Alphabets" << endl;
            for (int i = 1; i <= rows; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch << " ";
            }
            cout <<endl;
            }
           break;  
            case 6:
            cout << "Rectangle of alphabets" << endl;
            
            for (int i = 1; i <=rows; i++) {
                for (char ch = 'a'; ch < 'a' + columns; ch++)
                    cout << ch << " ";
                     cout << endl;
            }
            cout <<endl;
          break; 
           case 7: 
            cout << "Inverted half pyramid of stars " << endl;
            
            for (int i = rows; i >0; i--) {
                for (int j = 0; j <i; j++)
                    cout << "*";
                cout << endl;
            }
            cout <<endl;
         break; 
            case 8:
            cout << "Full pyramid of stars" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < rows - i; j++)
                    cout << " ";
                for (int j = 0; j <= i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;
        case 9:
            cout << "Inverted full pyramid of stars" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < i; j++)
                    cout << " ";
                for (int j = 0; j < rows - i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;
          case 10:
              cout << "Hollow full pyramid of stars" << endl;
              for (int i = 0; i < rows; i++) {
                for (int j = 0; j < rows - i; j++)
                  cout << " ";
                  for (int j = 0; j <= i; j++)
                    if (i == 0 || i == rows - 1 || j == 0 || j == i)
                      cout << "* ";
                    else
                      cout << "  ";
                    cout << endl;
                }
                cout <<endl;
                break; 
          case 11:
              cout << "Inverted hollow half pyramid of stars" << endl;
                            for (int i = rows ; i >= 1 ; i--){
    for (int j = 1 ; j <= i ; j++){
        if ( i == rows || i == j || j == 1){
            cout << "*";
        }else{
            cout << " ";
        }
    }
    cout << endl;
   }
            break;
    case 12:
            cout << "Rectangle hallow of stars" << endl;
            for (int i = 1; i <=rows; i++) {
                for (int j = 1; j <= columns; j++) {
                if (i == 1 || i == rows|| j== 1 || j == columns) 
                   { cout <<"* ";
                   }else{
                cout << "  ";
            }
            }
            cout << endl;
            }
             break;        
          default:  
              cout << "Invalid choice" << endl;
              break; 
   }   
   }
   
    return 0;
  }
  
  
        
        
