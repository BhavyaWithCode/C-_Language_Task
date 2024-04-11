#include <iostream>
using namespace std;

class Railway {
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    int trainTime;

public:
    int getTrainNumber() {
        return trainNumber;
    }

    void setTrainNumber(int number) {
        trainNumber = number;
    }

    string getTrainName() {
        return trainName;
    }

    void setTrainName(string name) {
        trainName = name;
    }

    string getSource() {
        return source;
    }

    void setSource(string src) {
        source = src;
    }

    string getDestination() {
        return destination;
    }

    void setDestination(string dest) {
        destination = dest;
    }

    int getTrainTime() {
        return trainTime;
    }

    void setTrainTime(int time) {
        trainTime = time;
    }

    void displayTrainInfo() {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << trainTime << endl;
    }
};

int main() {
    int NUM_RECORDS = 3;
    Railway trainRecords[NUM_RECORDS];

    for (int i = 0; i < NUM_RECORDS; i++) {
        int trainNumber;
        string trainName;
        string source;
        string destination;
        int trainTime;

        cout << "Enter Train Number: ";
        cin >> trainNumber;

        cout << "Enter Train Name: ";
        cin >> trainName;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Train Time: ";
        cin >> trainTime;

        trainRecords[i].setTrainNumber(trainNumber);
        trainRecords[i].setTrainName(trainName);
        trainRecords[i].setSource(source);
        trainRecords[i].setDestination(destination);
        trainRecords[i].setTrainTime(trainTime);
    }

    int searchNumber;
    cout << "Enter Train Number to search: ";
    cin >> searchNumber;
    
    if (searchNumber == trainRecords[0].getTrainNumber()) 
	{
        trainRecords[0].displayTrainInfo();
    } else if (searchNumber == trainRecords[1].getTrainNumber()) 
	{
        trainRecords[1].displayTrainInfo();
    } else if (searchNumber == trainRecords[2].getTrainNumber()) 
	{
        trainRecords[2].displayTrainInfo();
    } else 
	{
        cout << "Train record not found for the given train number." << endl;
    }
    
    return 0;
}
