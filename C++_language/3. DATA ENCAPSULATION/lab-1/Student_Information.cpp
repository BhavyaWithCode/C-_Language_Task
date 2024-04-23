#include <iostream>

using namespace std;

class Student 
{
    private:
        int stu_id;
        string stu_name;
        int stu_age;
        string stu_course;
        string stu_email;
        string stu_city;
        string stu_college;

    public:
    
        void setStudentId(int id) 
		{
            stu_id = id;
        }

        void setStudentName(string name) 
		{
            stu_name = name;
        }

        void setStudentAge(int age) 
		{
            stu_age = age;
        }

        void setStudentCourse(string course) 
		{
            stu_course = course;
        }

        void setStudentEmail(string email) 
		{
            stu_email = email;
        }

        void setStudentCity(string city) 
		{
            stu_city = city;
        }

        void setStudentCollege(string college) 
		{
            stu_college = college;
        }


        int getStudentId() 
		{
            return stu_id;
        }

        string getStudentName() 
		{
            return stu_name;
        }

        int getStudentAge() 
		{
            return stu_age;
        }

        string getStudentCourse() 
		{
            return stu_course;
        }

        string getStudentEmail() 
		{
            return stu_email;
        }

        string getStudentCity() 
		{
            return stu_city;
        }

        string getStudentCollege() 
		{
            return stu_college;
        }

        void displayStudentInfo() 
		{
            cout << "Student ID: " << getStudentId() << endl;
            cout << "Student Name: " << getStudentName() << endl;
            cout << "Student Age: " << getStudentAge() << endl;
            cout << "Student Course: " << getStudentCourse() << endl;
            cout << "Student Email: " << getStudentEmail() << endl;
            cout << "Student City: " << getStudentCity() << endl;
            cout << "Student College: " << getStudentCollege() << endl;
            cout << "----------------------" << endl;
        }
};

int main() 
{
    Student students[5];

    for (int i = 0; i < 5; i++) 
	{
        int id, age;
        string name, course, email, city, college;

        cout << "Enter details for Student " << i+1 << ":" << endl;
        cout << "Student ID: ";
        cin >> id;
        cout << "Student Name: ";
        cin >> name;
        cout << "Student Age: ";
        cin >> age;
        cout << "Student Course: ";
        cin >> course;
        cout << "Student Email: ";
        cin >> email;
        cout << "Student City: ";
        cin >> city;
        cout << "Student College: ";
        cin >> college;
        
        students[i].setStudentId(id);
        students[i].setStudentName(name);
        students[i].setStudentAge(age);
        students[i].setStudentCourse(course);
        students[i].setStudentEmail(email);
        students[i].setStudentCity(city);
        students[i].setStudentCollege(college);
        cout << endl;
    }

    cout << "Student Information:" << endl;
    for (int i = 0; i < 5; i++) 
	{
        students[i].displayStudentInfo(); 
    }

    return 0; 
}

