/* A serial transmission line can transmit 960 characters a second. 
Write a program that will calculate how long it will take to send a file */

#include <iostream>
using namespace std;
int main(){
    double file_size, byte;
    int time, hours, minutes, seconds, days;   // Declaration and initaialization of variables
    const int sending_rate = 960;
  
    cout <<"Enter the size of your file (Mb): ";
    cin>>file_size;        // Enter the file size 
      if (cin.fail() || file_size < 0){   // check the file size is valid 
    cout << "invalid input"; 
    }else{
    byte = 1048576 * file_size ;   //converts the Mb file to bytes
    time=byte/sending_rate;   // calculates the time it takes to send the file
    // convert the time to days, hours,minutes and seconds;
days= time /86400;    
time= time % 86400;
hours = time /3600;
time= time % 3600;
minutes = time / 60;
seconds = time % 60;
    cout<<"The time it takes to send " << file_size << " Mb is: "<<endl<< days<< " days " <<endl << hours<<" hrs " <<endl << minutes<< " mins "<<endl<< seconds<<" Seconds";
  }
          
return 0;

}
