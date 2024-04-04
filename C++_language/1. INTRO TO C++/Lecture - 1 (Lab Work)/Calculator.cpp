//WAP to create a basic calculator with +, -, *, /and %
//operations using switch case and UDF. Add never
//ending functionality using loop.in c++

#include<iostream>
using namespace std;

int add(FirstNumber + SecondNumber)
{
	return FirstNumber + SecondNumber;
}

int sub(FirstNumber - SecondNumber)
{
	return FirstNumber - SecondNumber;
}

int multiply(FirstNumber * SecondNumber)
{
	return FirstNumber * SecondNumber;
}

int division(FirstNumber / SecondNumber)
{
    if(SecondNumber != 0)
    {
    	return FirstNumber / SecondNumber;
	}
	else
	{
		cout<< " Error : Division By Zero!"
	}
}

int Modulo(FirstNumber % SecondNumber)
{
	return FirstNumber % SecondNumber;
}

int main()
{
	char operations;
	int FirstNumber, SecondNumber;
	
	cout<< "Enter The Operations ( +, -, *, /and % ) :- ";
	cin>>operations;
	
	cout<<"Enter The FirstNumber :- ";
	cin>>FirstNumber;
	
	cout<<"Enter The SecondNumber :- "
	cin>>SecondNumber 
	
	switch(operation)
	{
		case '+':
			cout << "Result : " <<FirstNumber + SecondNumber <<endl;
			break;
		case '-':
			cout << "Result : " <<FirstNumber - SecondNumber <<endl;
			break;
		case '*':
			cout << "Result : " <<FirstNumber * SecondNumber <<endl;
			break;
		case '/':
			cout << "Result : " <<FirstNumber / SecondNumber <<endl;
			break;
		case '%':
			cout << "Result : " <<FirstNumber % SecondNumber <<endl;
			break;
		
		default:
			cout << "Invalid operation. Please try again." << endl;
			break;
	}
	char choice;
	cout<<"Do You Want To Continue (y/n)?";
	cin>>choice;
	
	if(choice!=y && choice!=Y)
	{
		break;
	}
}
