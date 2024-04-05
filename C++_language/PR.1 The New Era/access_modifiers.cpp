//WAP which illustrates the use of public and private access modifiers.

#include<iostream>
using namespace std;

class MyClass{
	public:
		string color;
	
};

class MyPrivateClass{
	private:
		string Name;
};

int main()
{
	MyClass myclass;
	MyPrivateClass myprivateclass;
	
	cout<<"colors:- ";
	cin>>myclass.color;
	
	cout<<"Name:- ";
	cin>>myprivateclass.Name;
}
