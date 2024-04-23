#include <iostream>
using namespace std;

class Number 
{
    int value;

public:
    void input() 
    {
    	cout<<"Enter an number:- ";
        cin >> value;
    }

    void output() 
    {
        cout << value;
    }

    int getValue() 
    {
        return value;
    }
    
    int operator++() 
    {
        ++value;
        return this->value;
    }
};

int main() 
{
    Number b;

    b.input();

    ++b;

    b.output();

    return 0;
}

