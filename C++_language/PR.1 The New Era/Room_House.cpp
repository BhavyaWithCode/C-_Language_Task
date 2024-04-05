#include<iostream>
using namespace std;

class Room {
public:
    int Room_members;
    string Room_colors;
};

class house {
public:
    string house_name;
    string house_address;
};

int main() {
    Room R1;
    house h1;

    cout << "Enter The Details Of Room: " << endl;
    cout << "Room Members: ";
    cin >> R1.Room_members;

    cout << "Room Colors: ";
    cin >> R1.Room_colors;

    cout << "Enter The Details Of House: " << endl;
    cout << "House Name: ";
    cin >> h1.house_name;

    cout << "House Address: ";
    cin >> h1.house_address;

    cout << "\nHouse Details: " << endl;
    cout << "House Name: " << h1.house_name << endl;
    cout << "House Address: " << h1.house_address << endl;

    cout << "\nRoom Details: " << endl;
    cout << "Room Members: " << R1.Room_members << endl;
    cout << "Room Colors: " << R1.Room_colors << endl;

    return 0;
}

