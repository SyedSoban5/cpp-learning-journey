// ------------------------------------------------------------
// File: library_management.cpp
// Topic: Library Management System
// Description: Mini project demonstrating OOP with classes, 
//              arrays, and member functions for managing books.
// ------------------------------------------------------------

#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    bool isAvailable;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
        isAvailable = true;
    }

    void borrowBook()
    {
        if (isAvailable)
        {
            cout << title << " borrowed successfully.\n";
            isAvailable = false;
        }
        else
            cout << title << " is not available right now.\n";
    }

    void returnBook()
    {
        isAvailable = true;
        cout << title << " returned successfully.\n";
    }

    void display()
    {
        cout << "Title : " << title << ", Author: " << author;
        cout << ", Available: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

int main()
{
    Book library[3] = {
        Book("C++ Basics", "Bjarne Stroustrup"),
        Book("Data Structures", "Soban Ali"),
        Book("AI Fundamentals", "John Doe")
    };

    cout << "--- Library Books ---\n";
    for (int i = 0; i < 3; i++)
        library[i].display();

    cout << "\nBorrowing 'Data Structures'...\n";
    library[1].borrowBook();

    cout << "\nLibrary Status:\n";
    for (int i = 0; i < 3; i++)
        library[i].display();

    cout << "\nReturning 'Data Structures'...\n";
    library[1].returnBook();

    cout << "\nLibrary Status:\n";
    for (int i = 0; i < 3; i++)
        library[i].display();

    return 0;
}
