
#include <iostream>
using namespace std;

class Hotel {
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    string hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    void setHotelInfo(int id, string name, string type, string rating, string location, int establishYear, int staffQuantity, int roomQuantity) {
        hotel_id = id;
        hotel_name = name;
        hotel_type = type;
        hotel_rating = rating;
        hotel_location = location;
        hotel_establish_year = establishYear;
        hotel_staff_quantity = staffQuantity;
        hotel_room_quantity = roomQuantity;
    }

    void displayHotelInfo() {
        cout << "Hotel ID: " << hotel_id << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "Hotel Rating: " << hotel_rating << endl;
        cout << "Hotel Location: " << hotel_location << endl;
        cout << "Hotel Established Year: " << hotel_establish_year << endl;
        cout << "Hotel Staff Quantity: " << hotel_staff_quantity << endl;
        cout << "Hotel Room Quantity: " << hotel_room_quantity << endl;
        cout << endl;
    }
};

int main() {
    int N; 
    cout << "Enter the number of hotels: ";
    cin >> N;

    Hotel hotels[N]; 
    for (int i = 0; i < N; i++) 
	{
        int id, establishYear, staffQuantity, roomQuantity;
        string name, type, rating, location;

        cout << "Enter details for Hotel " << i + 1 << ":" << endl;

        cout << "Hotel ID: ";
        cin >> id;


        cout << "Hotel Name: ";
        cin >> name;

        cout << "Hotel Type: ";
        cin >> type

        cout << "Hotel Rating: ";


        cout << "Hotel Location: ";
     

        cout << "Hotel Established Year: ";
