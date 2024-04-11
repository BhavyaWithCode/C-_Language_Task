#include<iostream>
using namespace std;

class Employee{
	public:
		int emp_id;
		string name;
		string emp_role;
		int emp_age;
		double salary;
		int experience;
		string city;
		string emp_company_name;
};

int main()
{
	Employee employees[2];
	
	int i;
	
	for(i = 0; i < 2; i++)
	{
		cout<<"Enter The Details Of Employee " << i+1 << ":" <<endl;
		
		cout<<"Enter The Employee ID      :- ";
		cin>>employees[i].emp_id;
		
		cout<<"Enter The Employee Name    :- ";
		cin>>employees[i].name;
		
		cout<<"Enter The Employee Role    :- ";
		cin>>employees[i].emp_role;
		
		cout<<"Enter The Employee Salary  :- ";
		cin>>employees[i].salary;
		
		cout<<"Enter The Employee Experience  :- ";
		cin>>employees[i].experience;
		
		cout<<"Enter The Employee City    :- ";
		cin>>employees[i].city;
		
		cout<<"Enter The Employee Company :- ";
		cin>>employees[i].emp_company_name;
	}
	
	cout<<"Employees Information :- "<<endl;
	
	for(i = 0; i < 2; i++)
	{
		cout<<"Employee "<< i+1 << ":" <<endl;
		cout<<"ID           : "<< employees[i].emp_id  <<endl;
		cout<<"Name         : "<<employees[i].name     <<endl;
		cout<<"Role         : "<<employees[i].emp_role <<endl;
		cout<<"Salary       : "<<employees[i].salary <<endl;
		cout<<"Experience   : "<<employees[i].experience <<endl;
		cout<<"City         : "<<employees[i].city <<endl;
		cout<<"Company Name : "<<employees[i].emp_company_name <<endl;
	}
	
	return 0;
}

