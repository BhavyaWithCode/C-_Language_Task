//3. WAP with a mother-class animal. Inside it defines a name and age variables, and set_value() function. Then create two base classes Zebra and Dolphin which write a message telling the age and name and giving some extra information (e.g. place of origin) with only public and private. in c++

#include<iostream>
using namespace std;

class animal{
	public:
		string name;
		int age;
	public:
		void setvalue(string animalName, int animalAge)
		{
			name = animalName;
			age = animalAge;
		}
};

class zebra : public animal{
	public:
		void setvalue(string animalName, int animalAge)
		{
			name = animalName;;
			age = animalAge;
			cout<<"I am zebra named "<<name<<". i am "<<age<<"years old. "<<endl;
			cout<<"I am originally from africa"<<endl;
		}
};

class dolphin : public animal{
	public:
		void setvalue(string animalName, int animalAge)
		{
			name = animalName;
			age = animalAge;
			cout<< "I am a dolphin named " << name << ". I am " << age << " years old." <<endl;
			cout<< "I am originally from ocean";
		}
};


int main()
{
	zebra Zebra;
	Zebra.setvalue("Stripes",5);
	
	dolphin Dolphin;
	Dolphin.setvalue("Flipper",10);
	
	return 0;
}
