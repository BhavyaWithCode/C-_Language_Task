//WAP to convert given string into toggle case in c++.

#include<iostream>
using namespace std;

int main()
{
	string str;
	int i;
	cout<<"Enter The String:- ";
	cin>>str;
	
	for(i = 0; i < str.length(); i++)
	{
		if(str[i] >= 'a' && str[i] <='z')
		{
			str[i] = str[i] - 32;
		}
		else if(str[i] >= 'A' && str[i] <='Z')
		{
			str[i] = str[i] + 32;
		}
	}
	
	cout<<"Toggle Case String:- "<<str;
}

