//WAP to get and display 4 Cars information
//using class and object by including below in c++ with class and objects
//mentioned attributes:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year


#include<iostream>

class Car 
{
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;
};

int main()
{
	Car cars[4];
	
	int i;
	
	for(i = 0; i < 4; i++)
	{
		cout<<"Enter The Details Of Cars "<< i++ << ":" <<endl;
		cout<<"Car ID:- "
		cin>>cars[i].car_id
		cout<<"Car Company Name:- "
		cin>>cars[i].car_company_name
		cout<<"Car Color:- "
		cin>>cars[i].car_color
		cout<<"Car Model:- "
		cin>>cars[i].car_model
		cout<<"Car Release Year:- "
		cin>>cars[i].car_release_year
	}
	
	cout<<"Cars Informations :- " <<endl;
	
	 for (i = 0; i < 4; i++) 
	 {
        cout << "Car " << i + 1 << ":" << endl;
        cout << "ID: " << cars[i].car_id << endl;
        cout << "Company Name: " << cars[i].car_company_name << endl;
        cout << "Color: " << cars[i].car_color << endl;
        cout << "Model: " << cars[i].car_model << endl;
        cout << "Release Year: " << cars[i].car_release_year << endl;
        cout << endl;
    }
    
    return 0;
}
