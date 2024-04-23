#include<iostream>

using namespace std;

class substraction {
    int a;

public:
    void input() 
	{
        cout << "Enter a Number: ";
        cin >> a;
    }

    void output() 
	{
        cout << "Value: " << a << endl;
    }

    substraction operator-(substraction b)
	{
        substraction c;
        c.a = this->a - b.a;
        return c;
    }
};

int main() {
    substraction a, b, c, d;

  
    a.input();
    a.output();
    
 
    b.input();
    b.output();
    

    c = a - b;
    
    cout << "Subtraction Result: ";
    c.output();

	return 0;
}
