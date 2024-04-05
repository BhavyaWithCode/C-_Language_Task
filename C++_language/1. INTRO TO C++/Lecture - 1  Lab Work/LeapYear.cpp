//WAP to find all leap years from 2020 to 3030 and store
//them into an array in c++.

#include <iostream>
using namespace std;

int main() {
    int startYear = 2020;
    int endYear = 3030;
    int leapYears[100];
    int count = 0;

    for (int year = startYear; year <= endYear; year++) 
	{
        if (year % 4 == 0) 
		{
            leapYears[count] = year;
            count++;
        }
    }

    cout << "Leap Year From: ";
    for (int i = 0; i < count; i++) 
	{
        cout << leapYears[i] << " ";
    }
    cout << endl;

    return 0;
}
