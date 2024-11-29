/* A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long 
it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may 
take days. */

#include <iostream>
using namespace std;

int main() {

    int transmissionRate = 960;
    int fileSize; 
    double time; 
   
  cout << "Enter the file size to be transferred: ";
    cin >> fileSize;

  
    time = fileSize / transmissionRate;
    cout << "Time to send the file:" << time << "seconds" << endl;
    
    return 0;
}
