#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter the number: ";
    cin>>num;
    for(int i=1; i <= num; i++){
        cout<<endl;
        for(int j=1; j<=num; j++){
            cout<< j<<" ";
        }
        cout<< endl;
    }

    cout << "\n\n";
    cout << "Pattern 2" << endl;

    for(char ch = 'A'; ch <= 'X'; ch++){
    
        cout << ch << " ";
         if(ch == 'F' || ch == 'L' || ch == 'R'){
            cout << endl;
            }   
    }

    cout << "\n\n";
    cout << "Pattern 3" << endl;

    for(int i = 1; i <=5; i++){
        for(int j = 1; j <=i ;j++){
            cout << j << " ";
        }
         cout << endl;
    }

    cout << "\n\n";

    cout << "Pattern 4" << endl;

 for (int i = 1; i<=5;i++){
    for(int j = i; j<=5; j++){
        cout << "  ";
    }

    for (int j = i; j>=1; j--){
        cout << j << " ";
    }
    cout <<  endl;
 }
cout << "\n\n";

    cout << "Pattern 5" << endl;

for(char ch ='A'; ch <= 'E'; ch++){
    for(char c = 'A'; c <= ch; c++){
        cout << c << " ";
    }
    cout << endl;
}
cout << "\n\n";

    cout << "Pattern 6" << endl;

for(char ch = 'a'; ch <= 'e'; ch++){
    for(char c = 'a'; c <= 'e'; c++){
        cout << c << " ";
    }
    cout << endl;
}
cout << "\n\n";

    cout << "Pattern 7" << endl;

for(int i = 1; i <= 8; i++){
    for(int j =1; j<=8;j++){
        if(i == 1 || i == 8 || j == 1 || j == 8){
            cout << "* ";

        }else{
            cout << "  ";
        }
    }
    cout << endl;
}

cout << "\n\n";

    cout << "Pattern 8" << endl;

for(int i = 1; i <= 6; i++){
    for(int j = i; j <=6; j++){
        cout << "* ";
    }
    cout << endl;
}

cout << "\n\n";

    cout << "Pattern 9" << endl;

    for(int i =1; i<=6; i++){
        for(int j=i; j<=6; j++){
            cout << " ";
        }

        for(int j = 1; j <=i; j++){
            cout << "*";
        }

        for(int j = 1; j <= i-1; j++){
            cout << "*";
        }

        cout<< endl;
    }

    cout << "\n\n";

    cout << "Pattern 10" << endl;

    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= i; j++){
            cout << " ";
        } 
        for(int j=i;j<=6;j++){
            cout << "*";
        }
        for(int j=i;j<=6-1;j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\n";

    cout << "Pattern 11" << endl;

        for(int i = 1; i <= 6; i++){
        for(int j = 6; j >= 1; j--){
            if(i==1 || j == 6 || i == j){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "\n\n";

        cout << "Pattern 12" << endl;

    
    for(int i = 1; i <=6; i++){
        for(int j = i; j<=6; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            if(j == 2 || (i == 6 && j != 1)){
                cout << "*";
            }else{
                cout << " ";
            }            
        }

        for(int j = 1; j <= i; j++){
            if(j == i || i == 6){
                cout << "*";
            }else{
                cout << " ";
            }
        }

        cout << endl;
    }



}
    return 0;
}
