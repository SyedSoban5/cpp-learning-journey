// ------------------------------------------------------------
// File: employee_management.cpp
// Topic: Employee Management System
// Description: Demonstrates inheritance, arrays of objects,
//              and employee salary calculation.
// ------------------------------------------------------------

#include <iostream>
using namespace std;

// Base class
class Employee
{
protected:
    string name;
    int id;

public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
    }

    virtual void display()
    {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

// Derived class
class FullTimeEmployee : public Employee
{
private:
    double salary;

public:
    FullTimeEmployee(string n, int i, double s) : Employee(n, i)
    {
        salary = s;
    }

    void display()
    {
        cout << "Full-Time Employee -> ";
        Employee::display();
        cout << "Salary: $" << salary << endl;
    }
};

int main()
{
    const int SIZE = 3;
    FullTimeEmployee employees[SIZE] = {
        FullTimeEmployee("Soban", 101, 5000),
        FullTimeEmployee("Ali", 102, 4500),
        FullTimeEmployee("Sara", 103, 5200)
    };

    cout << "--- Employee Details ---\n";
    for (int i = 0; i < SIZE; i++)
        employees[i].display();

    return 0;
}
