#include<iostream>
using namespace std;

int add(int FirstNumber, int SecondNumber)
{
    return FirstNumber + SecondNumber;
}

int sub(int FirstNumber, int SecondNumber)
{
    return FirstNumber - SecondNumber;
}

int multiply(int FirstNumber, int SecondNumber)
{
    return FirstNumber * SecondNumber;
}

int division(int FirstNumber, int SecondNumber)
{
    if(SecondNumber != 0)
    {
        return FirstNumber / SecondNumber;
    }
    else
    {
        cout<< " Error : Division By Zero!";
    }
}

int Modulo(int FirstNumber, int SecondNumber)
{
    return FirstNumber % SecondNumber;
}

int main()
{
    char operation;
    int FirstNumber, SecondNumber;
    char choice;
    
    do 
	{
        cout<< "Enter The Operations ( +, -, *, / and % ) :- ";
        cin>>operation;
        
        cout<<"Enter The FirstNumber :- ";
        cin>>FirstNumber;
        
        cout<<"Enter The SecondNumber :- ";
        cin>>SecondNumber;
        
        switch(operation)
        {
            case '+':
                cout << "Result : " << add(FirstNumber, SecondNumber) <<endl;
                break;
            case '-':
                cout << "Result : " << sub(FirstNumber, SecondNumber) <<endl;
                break;
            case '*':
                cout << "Result : " << multiply(FirstNumber, SecondNumber) <<endl;
                break;
            case '/':
                cout << "Result : " << division(FirstNumber, SecondNumber) <<endl;
                break;
            case '%':
                cout << "Result : " << Modulo(FirstNumber, SecondNumber) <<endl;
                break;
            
            default:
                cout << "Invalid operation. Please try again." << endl;
                break;
        }
        
        cout<<"Do You Want To Continue (y/n)?";
        cin>>choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}

