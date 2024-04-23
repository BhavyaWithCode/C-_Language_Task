#include<iostream>
using namespace std;

class User {
public:
    string userId;
    string password;

    int verifyCredentials(const string& userId, const string& password) {
        if (this->userId == userId && this->password == password) {
            return 1;
        } else {
            return 0;
        }
    }
};

class Item {
public:
    int itemNumber;
    string itemName;
    int quantity;
    double price;
    double discount;

    double calculateTotal() {
        return (price * quantity) - discount;
    }
};

int main() {
    string userId, password;
    cout << "Enter User ID: ";
    cin >> userId;
    cout << "Enter Password: ";
    cin >> password;
    
    User user;
    user.userId = "admin";
    user.password = "password";

    if (!user.verifyCredentials(userId, password)) {
        cout << "Invalid credentials. Exiting program." << endl;
        return 0;
    }

    int numItems;
    cout << "Enter the number of items: ";
    cin >> numItems;

    Item items[numItems];

    for (int i = 0; i < numItems; i++) {
        int itemNumber, quantity;
        string itemName;
        double price, discount;

        cout << "Item " << i + 1 << ":" << endl;
        cout << "Enter Item Number: ";
        cin >> itemNumber;
        cout << "Enter Item Name: ";
        cin >> itemName;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Discount: ";
        cin >> discount;

        items[i].itemNumber = itemNumber;
        items[i].itemName = itemName;
        items[i].quantity = quantity;
        items[i].price = price;
        items[i].discount = discount;
    }

    double overallTotal = 0.0;

    for (int i = 0; i < numItems; i++) {
        double itemTotal = items[i].calculateTotal();
        overallTotal += itemTotal;

        cout << "Total cost for " << items[i].itemName << " (Item " << items[i].itemNumber << "): " << itemTotal << endl;
    }

    cout << "Overall total cost for all items: " << overallTotal << endl;

    return 0;
}

