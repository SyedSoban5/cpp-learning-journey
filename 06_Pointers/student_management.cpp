#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float cgpa;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n]; // dynamic array

    // Input student data
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, students[i].name);
        cout << "Enter roll no: ";
        cin >> students[i].rollNo;
        cout << "Enter CGPA: ";
        cin >> students[i].cgpa;
    }

    // Display student data
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name
             << ", Roll No: " << students[i].rollNo
             << ", CGPA: " << students[i].cgpa << endl;
    }

    delete[] students; // free memory
    return 0;
}
