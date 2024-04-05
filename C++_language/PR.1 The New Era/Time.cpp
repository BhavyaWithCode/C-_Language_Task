#include <iostream>
using namespace std;

class Time {
public:
    int hours1;
    int minutes1;
    int hours2;
    int minutes2;
    int totalhours;
    int totalminutes;
}; 

int main() 
{
    Time t;
    
    cout << "Enter The First Time:-" << endl;
    cout << "Hours: ";
    cin >> t.hours1;
    cout << "Minutes: ";
    cin >> t.minutes1;
    

    cout << "Enter The Second Time:-" << endl;
    cout << "Hours: ";
    cin >> t.hours2;
    cout << "Minutes: ";
    cin >> t.minutes2;
    
    
    t.totalminutes = t.minutes1 + t.minutes2;
    t.totalhours = t.hours1 + t.hours2 + (t.totalminutes / 60);
    t.totalminutes = t.totalminutes % 60;
    
    
    cout << "The sum of the times is:" << endl;
    cout << "Hours: " << t.totalhours << endl;
    cout << "Minutes: " << t.totalminutes << endl;
    
    return 0;
}

