#include <iostream>
using namespace std;
int main(){
  int byte,time;
    const int bytePerSecond = 960;
    cout <<"Enter the size of your file: ";
    cin>>byte;
    time=byte/bytePerSecond;
    int hours, minutes, seconds, days;
days = time /86400;    
time= time % 86400;
hours = time /3600;
time= time % 3600;
minutes = time / 60;
seconds = time % 60;
    cout<<"The time it takes to send a file is: "<<days<< " days " << hours<<" hrs "<< minutes<< " mins "<< seconds<<" Seconds";



  return 0;
}
