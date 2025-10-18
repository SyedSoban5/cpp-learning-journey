// ------------------------------------------------------------
// File: linear_search.cpp
// Topic: Linear Search
// Description: Searches for a specific element in an array using
//              linear search algorithm. Shows index if found.
// ------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int SIZE;
    cout << "Enter number of elements: ";
    cin >> SIZE;

    int arr[SIZE];
    cout << "Enter " << SIZE << " numbers:\n";
    for (int i = 0; i < SIZE; i++)
        cin >> arr[i];

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == target)
        {
            cout << "Number found at position: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Number not found in the array." << endl;

    return 0;
}
