// ------------------------------------------------------------
// File: student_class_demo.cpp
// Topic: Classes and Objects
// Description: Demonstrates creation of a Student class with
//              data members, member functions, and encapsulation.
//              Stores and displays student details.
// ------------------------------------------------------------

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float cgpa;

public:
    // Constructor
    Student(string n, int r, float c)
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    // Member function to display student info
    void displayInfo()
    {
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA   : " << cgpa << endl;
    }

    // Member function to update CGPA
    void updateCGPA(float newCGPA)
    {
        cgpa = newCGPA;
    }
};

int main()
{
    Student s1("Soban", 101, 3.8);

    cout << "--- Student Details ---\n";
    s1.displayInfo();

    cout << "\nUpdating CGPA...\n";
    s1.updateCGPA(3.95);

    cout << "--- Updated Details ---\n";
    s1.displayInfo();

    return 0;
}
