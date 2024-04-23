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
    
    int operator==(Number d) 
	{
        return this->value == d.value;
    }
};

int main() 
{
    Number b, d;

    b.input();
    b.output();
    
    d.input();
    d.output();

    int isDifferent = (b == d);
    
    if(isDifferent)
    {
    	cout << "The values are the same." << endl;	
	}
    else
	{
		cout << "The values are not the same." << endl;    	
	}


    return 0;
}
