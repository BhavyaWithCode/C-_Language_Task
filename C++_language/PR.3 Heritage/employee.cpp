#include<iostream>
using namespace std;

class personalInfo {
private:
    string name;
    int age;

public:
    void setName(string employeeName) {
        name = employeeName;
    }

    void setAge(int employeeAge) {
        age = employeeAge;
    }

    void printPersonalInfo() {
        cout << "Name:- " << name << endl;
        cout << "Age:- " << age << endl;
    }
};

class employeeInfo {
private:
    int id;
    string department;

public:
    void setID(int employeeID) {
        id = employeeID;
    }

    void setDepartment(string employeeDepartment) {
        department = employeeDepartment;
    }

    void printEmployeeInfo() {
        cout << "ID:- " << id << endl;
        cout << "Department:- " << department << endl;
    }
};

class employee : public personalInfo, public employeeInfo {
public:
    void printEmployeeDetails() {
        cout << "Employee's Details: " << endl;
        this->printPersonalInfo();
        this->printEmployeeInfo();
    }
};

int main() {
    employee emp;
    emp.setName("Bhavya Nagar");
    emp.setAge(22);
    emp.setID(7505);
    emp.setDepartment("IT");

    emp.printEmployeeDetails();

    return 0;
}

