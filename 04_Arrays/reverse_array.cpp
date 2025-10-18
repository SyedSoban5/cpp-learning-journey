// ------------------------------------------------------------
// File: reverse_array.cpp
// Topic: Reverse Array
// Description: Takes an array of numbers from user and displays
//              the array in reverse order.
// ------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    cout << "Enter " << SIZE << " numbers:\n";
    for (int i = 0; i < SIZE; i++)
        cin >> numbers[i];

    cout << "\nArray in reverse order:\n";
    for (int i = SIZE - 1; i >= 0; i--)
        cout << numbers[i] << " ";

    cout << endl;
    return 0;
}
