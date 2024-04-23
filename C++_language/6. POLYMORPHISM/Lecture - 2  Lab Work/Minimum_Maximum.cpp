#include <iostream>
using namespace std;

class Number 
{
    int value;

public:
    void input() 
	{
        cout << "Enter a Number: ";
        cin >> value;
    }

    void output() 
	{
        cout << "Value: " << value << endl;
    }

    int getValue() 
	{
        return value;
    }
    
    int operator>(Number b)
	{
        return this->value > b.value ? 1 : 0;
    }
    
    int operator<(Number d)
	{
        return this->value < d.value ? 1 : 0;
    }
};

int main() 
{
    Number b, d;

    b.input();
    b.output();
    
    d.input();
    d.output();

    int isBigger = (b > d) ? 1 : 0;
    int isSmaller = (b < d) ? 1 : 0;

    cout << "Is the first number bigger than the second? " << isBigger << endl;
    cout << "Is the first number smaller than the second? " << isSmaller << endl;

    return 0;
}
