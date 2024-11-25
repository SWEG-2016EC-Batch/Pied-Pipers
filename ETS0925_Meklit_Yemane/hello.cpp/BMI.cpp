#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter the number of person you want to calculate: ";
    cin >> num;
    for(int i=1;i<=num;i++){
    double height;
    cout <<"Enter your height in m: ";
    cin>>height;
    double weight;
    cout <<"Enter your weight in kg: ";
    cin>>weight;
    double BMI;
    BMI= weight/(height * height);
    cout <<"Your body mass index is : "<<BMI<<endl;
     }
 
        return 0;
}
