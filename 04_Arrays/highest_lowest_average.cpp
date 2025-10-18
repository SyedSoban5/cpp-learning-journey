// ------------------------------------------------------------
// File: highest_lowest_average.cpp
// Topic: Array Statistics
// Description: Finds the highest, lowest, and average of numbers
//              stored in an array (realistic data analysis example)
// ------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int SIZE;
    cout << "Enter number of elements: ";
    cin >> SIZE;

    double numbers[SIZE];
    double sum = 0, highest, lowest;

    cout << "Enter the numbers:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    highest = lowest = numbers[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (numbers[i] > highest)
            highest = numbers[i];
        if (numbers[i] < lowest)
            lowest = numbers[i];
    }

    cout << "\n--- Array Analysis ---\n";
    cout << "Highest Number: " << highest << endl;
    cout << "Lowest Number : " << lowest << endl;
    cout << "Average       : " << sum / SIZE << endl;

    return 0;
}
