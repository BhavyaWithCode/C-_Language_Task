#include<iostream>
using namespace std;

class RBI
{
public:
    float rate;
    void getROI()
    {
        cout<<"Rate Of Interest: "<<rate<<"%"<<endl;    
    }
    float calculateInterest(float amount)
    {
        return (amount * rate) / 100.0;
    }
};

class SBI : public RBI
{
public:
    SBI()
    {
        rate = 10;
    }
    void pointOfInterest()
    {
        cout << "SBI offers various types of loans and has a wide network of branches." << endl;
    }
};

class BOB : public RBI
{
public:
    BOB()
    {
        rate = 4.0;
    }
    void pointOfInterest()
    {
        cout << "BOB provides personalized banking services and focuses on rural development." << endl;
    }
};

class ICICI : public RBI
{
public:
    ICICI()
    {
        rate = 2.3;
    }
    void pointOfInterest()
    {
        cout << "ICICI offers a range of financial products including credit cards and insurance." << endl;
    }
}; 

int main()
{
    float amount;
    cout << "Enter the amount: ";
    cin >> amount;

    SBI sbi;
    BOB bob;
    ICICI icici;
    
    cout<<"SBI Bank:- "<<endl;
    cout << "Interest: " << sbi.calculateInterest(amount) << endl;
    sbi.pointOfInterest();
    
    cout<<"Bank Of Baroda:- "<<endl;
    cout << "Interest: " << bob.calculateInterest(amount) << endl;
    bob.pointOfInterest();
    
    cout<<"ICICI Bank:- "<<endl;
    cout << "Interest: " << icici.calculateInterest(amount) << endl;
    icici.pointOfInterest();
    
    return 0;
}

