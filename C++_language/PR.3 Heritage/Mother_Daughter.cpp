//2. WAP with a mother class and an inherited daughter class. Both of them should have a method void display ()that prints a message (different for mother and daughter). In the main define a daughter and call the display() method on it in c++.

#include<iostream>
using namespace std;

class mother{
	public:
		void display(){
			cout<<"I am mother"<<endl;
		}
};


class daughter : public mother{
	public:
		void display(){
			cout<<"I am daughter"<<endl;
		}
};

int main()
{
	daughter Daughter;
	Daughter.display();
	
	return 0;
}
