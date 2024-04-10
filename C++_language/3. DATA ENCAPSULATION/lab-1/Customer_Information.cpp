#include <iostream>
using namespace std;

class Customer 
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_telecome_brand_name;
    string cust_mobile_number;
    string cust_city;
    int cust_simcard_validity;

public:
    void setCustomerInfo(int id, string name, int age, string brand, string number, string city, int validity) 
	{
        this->cust_id = id;
        this->cust_name = name;
        this->cust_age = age;
        this->cust_telecome_brand_name = brand;
        this->cust_mobile_number = number;
        this->cust_city = city;
        this->cust_simcard_validity = validity;
    }

    void displayCustomerInfo() 
	{
        cout << "Customer ID: " << this->cust_id << endl;
        cout << "Customer Name: " << this->cust_name << endl;
        cout << "Customer Age: " << this->cust_age << endl;
        cout << "Telecom Brand: " << this->cust_telecome_brand_name << endl;
        cout << "Mobile Number: " << this->cust_mobile_number << endl;
        cout << "Customer City: " << this->cust_city << endl;
        cout << "Simcard Validity: " << this->cust_simcard_validity << " years" << endl;
        cout << "----------------------" << endl;
    }
};

int main() 
{
    Customer customer1;
    customer1.setCustomerInfo(1, "John Doe", 25, "Jio", "9876543210", "Rajkot", 2);

    Customer customer2;
    customer2.setCustomerInfo(2, "Jane Smith", 30, "Airtel", "8765432109", "Ahmedabad", 1);

    Customer customer3;
    customer3.setCustomerInfo(3, "Mike Johnson", 35, "Vodafone", "7654321098", "Surat", 3);

    Customer customer4;
    customer4.setCustomerInfo(4, "Emily Brown", 28, "Idea", "6543210987", "Vadodara", 2);

    Customer customer5;
    customer5.setCustomerInfo(5, "David Lee", 32, "BSNL", "54321043234","jamnagar",3);
    
    return 0;
}
