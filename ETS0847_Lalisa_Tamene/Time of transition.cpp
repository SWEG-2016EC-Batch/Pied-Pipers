#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
    const int transmissionRate = 960;
    const long long fileSizeInBytes = 419430400;

    long long Seconds = fileSizeInBytes / transmissionRate;

    long long days = Seconds / (24 * 3600);
    Seconds %= (24 * 3600);

    long long hours = Seconds / 3600;
    Seconds %= 3600;

    long long minutes = Seconds / 60;
    Seconds %= 60;

    long long seconds = Seconds;

    cout << "File size: " << fileSizeInBytes << " bytes" << endl;
    cout << "Transmission rate: " << transmissionRate << " characters per second" << endl;
    cout << "Time to send the file: "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds." << endl;

    return 0;
}
