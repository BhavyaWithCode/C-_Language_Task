#include<iostream>
using namespace std;

class Distance{
	public:
		int inch;
		int feet;
};

int main()
{
	Distance FirstDistance, SecondDistance, TotalDistance;
	
	cout<<"Enter The First Distance:- "<<endl;
	cout<<"Feet:- "<<endl;
	cin>>FirstDistance.feet;
	cout<<"Inch:- "<<endl;
	cin>>FirstDistance.inch;
	
	cout<<"Enter The Second Distance:- "<<endl;
	cout<<"Feet:- "<<endl;
	cin>>SecondDistance.feet;
	cout<<"Inch:- "<<endl;
	cin>>SecondDistance.inch;
	
	TotalDistance.inch = FirstDistance.inch + SecondDistance.inch;
	TotalDistance.feet = FirstDistance.feet + SecondDistance.feet + (TotalDistance.inch / 12);
	TotalDistance.inch = TotalDistance.inch % 12;
	
	cout<<"The Sum Of The Distance is: "<<endl;
	cout << "Total distance: " << TotalDistance.feet << " feet " << TotalDistance.inch << " inches" << endl;

	return 0;
}

