#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int transmissionRate= 960; 
   const double fileSizeMB = 400.0; 
    
    int bytesInMB = 1048576;
    double fileSizeBytes = fileSizeMB * bytesInMB;
    
    double timeInSeconds = fileSizeBytes / transmissionRate;
    
    int days = timeInSeconds / 86400;
    timeInSeconds -= days * 86400;
    
    int hours = timeInSeconds / 3600;
    timeInSeconds -= hours * 3600; 
    
    int minutes = timeInSeconds / 60;
    timeInSeconds -= minutes * 60;
    
    int seconds = static_cast<int>(timeInSeconds);
    
    cout << fixed << setprecision(2); 
    cout << "Time to send a " << fileSizeMB << " MB file at " << transmissionRate
         << " characters per second:" << endl;
    cout << "Days: " << days << ", Hours: " << hours << ", Minutes: " << minutes
         << ", Seconds: " << seconds << endl;
    
    return 0;
}
