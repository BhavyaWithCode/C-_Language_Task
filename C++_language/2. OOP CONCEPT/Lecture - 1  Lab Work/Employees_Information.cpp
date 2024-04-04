//WAP to get and display 5 Employees
//information using class and object by including
//below mentioned attributes:
//- emp_id
//- emp_name
//- emp_role
//- emp_age
//- emp_salary
//- emp_experience
//- emp_city
//- emp_company_name


#include<iostream>

class Employee{
	public:
		int emp_id;
		string name[50];
		string emp_role;
		int emp_age;
		double salary;
		int experience;
		string city[50];
		string emp_company_name[50];
};


int main()
{
	Employee employees[5];
	
	int i;
	
	for(i = 0; i < 5; i++)
	{
		cout<<"Enter The Details Of Employees " << i++ <<":" <<endl;
		
		cout<<"Enter The Employees ID     :- "
		cin>>employees[i].emp_id		
		
		cout<<"Enter The String Name      :- "
		cin>>employees[i].name
		
		cout<<"Enter The Employees Role   :- "
		cin>>employees[i].emp_role
		
		cout<<"Enter The Employees Salary :- "
		cin>>employees[i].salary
		
		cout<<"Enter The Employees Experience :- "
		cin>>employees[i].experience
		
		cout<<"Enter The Employees City :- "
		cin>>employees[i].city
		
		cout<<"Enter The Employees Company :- "
		cin>>employees[i].emp_company_name
	}
	
	cout<<"Employees Informations :- "<<endl;
	
	for(i = 0; i < 5; i++)
	{
		cout<<"Employees "<< i++ << ":" <<endl;
		cout<<"ID   : "<< employees[i].emp_id  <<endl;
		cout<<"Name : "<<employees[i].name     <<endl;
		cout<<"Role : "<<employees[i].emp_role <<endl;
		cout<<"Salary : "<<employees[i].salary <<endl;
		cout<<"Experience : " <<employees[i].experience <<endl;
		cout<<"City : "<<employees[i].city <<endl;
		cout<<"Company Name : "<<employees[i].emp_company_name <<endl;
	}
	
	return 0;
}
