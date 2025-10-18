// ------------------------------------------------------------
// File: array_sort.cpp
// Topic: Array Sorting
// Description: Sorts an array of numbers in ascending order
//              using the bubble sort algorithm.
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

    // Bubble sort
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Array in Ascending Order:\n";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
