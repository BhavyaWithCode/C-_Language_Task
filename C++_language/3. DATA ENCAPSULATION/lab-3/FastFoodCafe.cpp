#include<iostream>
using namespace std;

class FastFoodCafe{
	private:
		int cafe_id;
		string cafe_name;
		string cafe_type;
		string cafe_rating;
		static string cafe_location; 
		int cafe_establish_year;
		int cafe_staff_quantity;
	
	public:
    FastFoodCafe() {}

    FastFoodCafe(int id, string name, string type, string rating, int establish_year, int staff_quantity) {
        this->cafe_id = id;
        this->cafe_name = name;
        this->cafe_type = type;
        this->cafe_rating = rating;
        this->cafe_establish_year = establish_year;
        this->cafe_staff_quantity = staff_quantity;
    }

    void displayInfo() 
	{
        cout << "Cafe ID: " << cafe_id << endl;
        cout << "Cafe Name: " << cafe_name << endl;
        cout << "Cafe Type: " << cafe_type << endl;
        cout << "Cafe Rating: " << cafe_rating << endl;
        cout << "Cafe Location: " << cafe_location << endl;
        cout << "Established Year: " << cafe_establish_year << endl;
        cout << "Staff Quantity: " << cafe_staff_quantity << endl;
        cout << "------------------------------------" << endl;
    }
};

string FastFoodCafe::cafe_location = "Rajkot";

int main()
{
	int Number_Of_FastFoodCafes;
	int i;
	
	cout << "Enter The Number Of Fast Food Cafes: ";
	cin >> Number_Of_FastFoodCafes;
	
	FastFoodCafe cafes[Number_Of_FastFoodCafes];
	
	for(i = 0; i < Number_Of_FastFoodCafes; i++)
	{
		int id, establish_year, staff_quantity;
        string name, type, rating;

        cout << "Enter details for Cafe " << i+1 << ":" << endl;
        cout << "Cafe ID: ";
        cin >> id;
        cout << "Cafe Name: ";
        cin >> name;
        cout << "Cafe Type: ";
        cin >> type;
        cout << "Cafe Rating: ";
        cin >> rating;
        cout << "Cafe Established Year: ";
        cin >> establish_year;
        cout << "Cafe Staff Quantity: ";
        cin >> staff_quantity;
        
        cafes[i] = FastFoodCafe(id, name, type, rating, establish_year, staff_quantity);
	}

    cout << "Details of Fast Food Cafes:" << endl;
    for(i = 0; i < Number_Of_FastFoodCafes; i++) 
	{
        cafes[i].displayInfo();
    }

    return 0;
}

