#include<iostream>
using namespace std;

class FirstNumber{
    public:
        int FirstNum;
        void dispFirstNumber()
        {
            cout<<"Enter the first number: ";
            cin>>FirstNum;
        }
};

class SecondNumber{
    public:
        int SecondNum;
        void dispSecondNumber()
        {
            cout<<"Enter the second number: ";
            cin>>SecondNum;
        }
};

class ThirdNumber : public FirstNumber{
    public:
        int ThirdNum;
        void dispThirdNumber()
        {
            cout<<"Enter the third number: ";
            cin>>ThirdNum;
        }
};

class FourthNumber : public SecondNumber, public ThirdNumber{
    public:
        int FourthNum;
        void dispFourthNumber()
        {
            cout<<"Enter the fourth number: ";
            cin>>FourthNum;
        }
};


class Sum : public FourthNumber{
    public:
        Sum()
        {
            dispFirstNumber();
            dispSecondNumber();
            dispThirdNumber();
            dispFourthNumber();
            int total = FirstNum + SecondNum + ThirdNum + FourthNum;
            cout<<"The Sum Of The Four Numbers Is: "<<total<<endl;
        }
};

int main()
{
    Sum s;
    return 0;
}

