#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int x,y,result;
    cout <<"Enter the base: ";
    cin>>x;
    cout <<"Enter : ";
    cin>>y;
    result=pow(x,y);
    cout << "The result of " << x << " raised to the power " << y << " is: " << result << endl;
    return 0;
}
