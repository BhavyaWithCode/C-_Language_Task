//WAP to find all even elements from given 1D array in c++.

#include<iostream>
using namespace std;


int main()
{
	int size;
	int i;
	cout<<"Enter The Size Of Array :- "
	cin>>size;
	
	int array[size];
	cout<<"Enter The Elements Of The Array :- "
	for(i = 0; i < size; i++)
	{
		cin>>array[i];
	}
	cout<<"Even Elements Of The Array :- "
	for(i = 0 i < size; i++)
	{
		if(array[i] % 2 == 0)
		{
			cout<<array[i] <<" ";
		}
	}
}
