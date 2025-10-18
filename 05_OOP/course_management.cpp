// ------------------------------------------------------------
// File: course_management.cpp
// Topic: OOP Mini Project
// Description: University Course Management System using classes,
//              arrays, and member functions. Students can enroll
//              in courses and view their registered courses.
// ------------------------------------------------------------

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int studentID;
    string courses[5];
    int courseCount;

public:
    Student(string n, int id)
    {
        name = n;
        studentID = id;
        courseCount = 0;
    }

    void enrollCourse(string course)
    {
        if (courseCount < 5)
        {
            courses[courseCount] = course;
            courseCount++;
            cout << course << " enrolled successfully!" << endl;
        }
        else
            cout << "Cannot enroll more than 5 courses!" << endl;
    }

    void displayCourses()
    {
        cout << "\n--- Courses of " << name << " (ID: " << studentID << ") ---\n";
        for (int i = 0; i < courseCount; i++)
            cout << i + 1 << ". " << courses[i] << endl;
    }
};

int main()
{
    Student s1("Soban", 101);

    s1.enrollCourse("Data Structures");
    s1.enrollCourse("Algorithms");
    s1.enrollCourse("Artificial Intelligence");
    s1.enrollCourse("Operating Systems");

    s1.displayCourses();

    return 0;
}
