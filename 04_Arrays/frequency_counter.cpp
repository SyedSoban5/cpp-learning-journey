// ------------------------------------------------------------
// File: frequency_counter.cpp
// Topic: Frequency of Numbers
// Description: Counts how many times each number appears in an array
//              (real problem-solving scenario)
// ------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int SIZE;
    cout << "Enter number of elements: ";
    cin >> SIZE;

    int arr[SIZE];
    cout << "Enter the numbers:\n";
    for (int i = 0; i < SIZE; i++)
        cin >> arr[i];

    cout << "\n--- Frequency of Numbers ---\n";
    for (int i = 0; i < SIZE; i++)
    {
        int count = 0;
        bool counted = false;

        // Check if this element was already counted
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                counted = true;
                break;
            }
        }

        if (!counted)
        {
            for (int j = 0; j < SIZE; j++)
                if (arr[i] == arr[j])
                    count++;

            cout << arr[i] << " appears " << count << " time(s)" << endl;
        }
    }

    return 0;
}
