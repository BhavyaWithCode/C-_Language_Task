#include<iostream>
#include<string> // Include this for using string data type

using namespace std; // Include this for using cout and cin without std:: prefix

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
        cout << "Enter The Details Of Cars " << i+1 << ":" << endl;
        cout << "Car ID: ";
        cin >> cars[i].car_id;
        cout << "Car Company Name: ";
        cin >> cars[i].car_company_name;
        cout << "Car Color: ";
        cin >> cars[i].car_color;
        cout << "Car Model: ";
        cin >> cars[i].car_model;
        cout << "Car Release Year: ";
        cin >> cars[i].car_release_year;
    }
    
    cout << "Cars Information:" << endl;
    
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

