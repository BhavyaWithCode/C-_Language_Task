#include <iostream>
using namespace std;
class X 
{
private:
    int a, b, c;
public:
    void setData(int a, int b, int c) 
	{
        this->a = a;
        this->b = b;
        this->c = c;
    }
    int getA()
	{
    	return a;
	}
	
	int getB()
	{
		return b;
	}
	
	int getC()
	{
		return c;
	}
    
};

class Y : public X 
{
public:
    int getData() 
	{
        return (getA() * getA() * getA()) + (getB() * getB() * getB()) + (getC() * getC() * getC());
    }
};

int main() 
{
    Y obj;
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    obj.setData(a, b, c);
    int sumOfCubes = obj.getData();
    cout << "Sum of cubes of the three numbers: " << sumOfCubes << endl;
    return 0;
}

