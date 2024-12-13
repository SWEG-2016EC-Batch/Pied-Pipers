#include <iostream>
using namespace std;

int main () {
   int count = 1;
   char ch = 'A';
   int  c = 4, f=5, d= 7, e = 8, g= 6;
   int choice;
 
  cout << "Enter the choice of pattern: ";
    cin >> choice;

    switch(choice) {
      case 1:
            cout << "Rectangle of Numbers" << endl;
            for (int i = 1; i <=f; i++) {
                for (int j = 1; j <=f; j++)
                    cout << j << " ";
                cout << endl;
            }
            cout <<endl;
             break;
        case 2:
            cout << "Rectangle of Alphabet" << endl; 
            for (int i = 0; i < c; i++) {
                for (int j = 0; j < g; j++)
                    cout << ch++ << " ";
                cout << endl;
            }
            cout <<endl;
        break;
       case 3: 
            cout << "Half pyramid of numbers to the right" << endl;
            for (int i = 1; i <= f; i++) {
                for (int j = 1; j <= i; j++)
                    cout << j << " ";
                cout << endl;
            }
            cout <<endl;
            break;     
      case 4: 
           cout << "Half pyramid of numbers to the left" << endl;
            for (int i = 1; i <= f; i++) {
        for (int space = 1; space <= (f - i) * 3; space++) {
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
            for (int i = 1; i <= f; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch << " ";
            }
            cout <<endl;
            }
           break;  
            case 6:
            cout << "Rectangle of alphabets" << endl;
            
            for (int i = 1; i <f; i++) {
                for (char ch = 'a'; ch <= 'a'+i; ch++)
                    cout << ch << " ";
                     cout << endl;
            }
            cout <<endl;
          break; 
           case 7: 
            cout << "Inverted half pyramid of stars " << endl;
            
            for (int i = g; i >0; i--) {
                for (int j = 0; j <i; j++)
                    cout << "*";
                cout << endl;
            }
            cout <<endl;
         break; 
            case 8:
            cout << "Full pyramid of stars" << endl;
            for (int i = 0; i < g; i++) {
                for (int j = 0; j < g - i; j++)
                    cout << " ";
                for (int j = 0; j <= i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;
        case 9:
            cout << "Inverted full pyramid of stars" << endl;
            for (int i = 0; i < g; i++) {
                for (int j = 0; j < i; j++)
                    cout << " ";
                for (int j = 0; j < g - i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
            break;
          case 10:
              cout << "Hollow full pyramid of stars" << endl;
              for (int i = 0; i < g; i++) {
                for (int j = 0; j < g- i; j++)
                  cout << " ";
                  for (int j = 0; j <= i; j++)
                    if (i == 0 || i == g - 1 || j == 0 || j == i)
                      cout << "* ";
                    else
                      cout << "  ";
                    cout << endl;
                }
                cout <<endl;
                break; 
          case 11:
              cout << "Inverted hollow half pyramid of stars" << endl;
                            for (int i = g ; i >= 1 ; i--){
    for (int j = 1 ; j <= i ; j++){
        if ( i == g || i == j || j == 1){
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
            for (int i = 1; i <=d; i++) {
                for (int j = 1; j <= e; j++) {
                if (i == 1 || i == d || j== 1 || j == e) 
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
    return 0;
  }
  
  
        
        
