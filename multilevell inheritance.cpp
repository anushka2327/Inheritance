#include <iostream>
#include <string>
using namespace std;

// Parent Class
class Company {
public:
    string name = "Tech Solutions Inc.";
    
    void info() {
        cout << "Company Name: " << name << endl;
    }
};

// Child Class (derived from Company)
class Department : public Company {
public:
    string departmentName = "Software Development";
    
    void displayDepartment() {
        cout << "Department: " << departmentName << endl;
    }
};

// Child Class (derived from Department)
class Employee : public Department {
public:
    string employeeName = "Alice Johnson";

    void display() {
        info();
        displayDepartment();
        cout << "Employee: " << employeeName << endl;
    }
};

// Main Function
int main() {
    // Multilevel Inheritance
    Employee employee;
    employee.display();

    return 0;
}
output:
Company Name: Tech Solutions Inc.
Department: Software Development
Employee: Alice Johnson