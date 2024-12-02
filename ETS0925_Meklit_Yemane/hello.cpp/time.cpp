#include <iostream>
using namespace std;
int main(){
    int transmission_rate=960;
    double file_size;
    int transmission_time;
    
    cout <<"Enter the size of your file: ";
    cin>>file_size;
    cout <<endl;
     transmission_time = file_size / transmission_rate;

    if(cin.fail() || file_size < 0){
        cout << "invalid input";
    }

    transmission_time = file_size / transmission_rate;

    if(cin.fail() || file_size < 0){
        cout << "invalid input";
    }
    else if(transmission_time < 3600){
        int minutes = (transmission_time / 60);
        int seconds = (transmission_time % 60);
        cout << "It will take " << transmission_time << " seconds to send " << file_size<< "size of file";

    } else if(transmission_time >= 3600 && transmission_time < 86400){
        int hours = (transmission_time / 3600);
        int minutes = (transmission_time % 3600)/60;
        int seconds = (transmission_time % 3600)%60;
        
else if(transmission_time < 3600){
        int minutes = (transmission_time / 60);
        int seconds = (transmission_time % 60);
        cout << "It will take " << transmission_time << " seconds to send " << file_size<< "size of file";

    } else if(transmission_time >= 3600 && transmission_time < 86400){
        int hours = (transmission_time / 3600);
        int minutes = (transmission_time % 3600)/60;
        int seconds = (transmission_time % 3600)%60;

        cout << "It will take " <<hours << " hours, "<< minutes << " minutes and " << seconds << " seconds"<<"to send "<< file_size << "amount of file";

        cout << hours << endl;
        cout << minutes << endl;
        cout << seconds << endl;
    } else if(transmission_time >= 86400){
        int days = transmission_time / 86400;
        int hours = (transmission_time % 86400)/3600;
        int minutes = ((transmission_time % 86400)%3600)/60;
        int seconds = ((transmission_time % 86400)%3600)%60;

        cout << "It will take " <<days << " days, "<<hours << " hours, "<< minutes << " minutes and " << seconds << " seconds"<< " to send"<< file_size<< " amount of file";


    }
    return 0;
