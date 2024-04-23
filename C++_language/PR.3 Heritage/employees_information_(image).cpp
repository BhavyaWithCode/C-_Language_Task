#include<iostream>
using namespace std;

class Employees {
private:
    int id;
    string name;
    string role;

public:
    void setid(int empid) {
        id = empid;
    }

    void setname(string empname) {
        name = empname;
    }

    void setrole(string emprole) {
        role = emprole;
    }

    int getid() {
        return id;
    }

    string getname() {
        return name;
    }

    string getrole() {
        return role;
    }
};

class SalaryAndExperience : public Employees {
private:
    float salary;
    int experience;

public:
    void setsalary(float empsalary) {
        salary = empsalary;
    }

    void setexperience(int empexperience) {
        experience = empexperience;
    }

    float getsalary() {
        return salary;
    }

    int getexperience() {
        return experience;
    }
};


class CompanyInfo : public SalaryAndExperience {
private:
    string companyName;
    string address;

public:
    void setCompanyName(string EmpCompanyName) {
        companyName = EmpCompanyName;
    }

    void setAddress(string EmpAddress) {
        address = EmpAddress;
    }

    string getCompanyName() {
        return companyName;
    }

    string getAddress() {
        return address;
    }

};


class ContactInfo : public CompanyInfo {
private:
    string email;
    string contact;

public:
    void setEmail(string empemail) {
        email = empemail;
    }

    void setContact(string empcontact) {
        contact = empcontact;
    }

    string getEmail() {
        return email;
    }

    string getContact() {
        return contact;
    }

    void setExperience(int empexperience) {
        SalaryAndExperience::setexperience(empexperience);
    }
}; 

int main() {
    ContactInfo employee;
    
    employee.setid(1);
    employee.setname("Bhavya Nagar");
    employee.setrole("Flutter Developer");
    employee.setsalary(20000.0);
    employee.setexperience(5);
    employee.setCompanyName("ABC Company");
    employee.setAddress("Rajkot");
    employee.setEmail("bhavyanagar13@gmail.com");


    cout << "Employee ID: " << employee.getid() << endl;
    cout << "Employee Name: " << employee.getname() << endl;
    cout << "Employee Role: " << employee.getrole() << endl;
    cout << "Employee Salary: " << employee.getsalary() << endl;
    cout << "Employee Experience: " << employee.getexperience() << " years" << endl;
    cout << "Company Name: " << employee.getCompanyName() << endl;
    cout << "Address: " << employee.getAddress() << endl;
    cout << "Email: " << employee.getEmail() << endl;

    return 0;
}

