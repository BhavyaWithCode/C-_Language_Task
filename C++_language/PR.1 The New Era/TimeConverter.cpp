#include<iostream>
using namespace std;

class TimeConverter {
public:
    int hours;
    int minutes;
    int seconds;
};

int main() {
    TimeConverter converter;

    cout << "Enter The Total Seconds:- " << endl;
    cin >> converter.seconds;

    int totalSeconds = converter.seconds;

    converter.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    converter.minutes = totalSeconds / 60;
    converter.seconds = totalSeconds % 60;

    cout << "The time in (HH:MM:SS) format is: ";
    cout << converter.hours << ":" << converter.minutes << ":" << converter.seconds << endl;

    return 0;
}

