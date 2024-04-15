#include<iostream>
using namespace std;

class RBI{
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

class SBI : public RBI{
    public:
        SBI()
        {
            rate = 6.8;
        }
};

class BOB : public RBI{
    public:
        BOB()
        {
            rate = 4.0;
        }
};

class ICICI : public RBI{
    public:
        ICICI()
        {
            rate = 2.3;
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
    
    cout<<"Bank Of Baroda:- "<<endl;
    cout << "Interest: " << bob.calculateInterest(amount) << endl;
    
    cout<<"ICICI Bank:- "<<endl;
    cout << "Interest: " << icici.calculateInterest(amount) << endl;
    return 0;
}

