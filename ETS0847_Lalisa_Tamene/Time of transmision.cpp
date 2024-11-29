#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
    const int transmissionRate = 960;
    const long long fileSizeInBytes = 419430400;

    long long totalSeconds = fileSizeInBytes / transmissionRate;

    long long days = totalSeconds / (24 * 3600);
    totalSeconds %= (24 * 3600);

    long long hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    long long minutes = totalSeconds / 60;
    totalSeconds %= 60;

    long long totalseconds = totalSeconds;

    cout << "File size: " << fileSizeInBytes << " bytes" << endl;
    cout << "Transmission rate: " << transmissionRate << " characters per second" << endl;
    cout << "Time to send the file: "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << totalseconds << " seconds." << endl;

    return 0;
}
