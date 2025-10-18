// ------------------------------------------------------------
// File: student_scores_summary.cpp
// Topic: Student Scores Summary
// Description: Stores student scores in an array and calculates
//              total, average, highest, and lowest score.
// ------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int scores[SIZE];
    int total = 0, highest, lowest;

    cout << "Enter scores of " << SIZE << " students:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        total += scores[i];
    }

    highest = lowest = scores[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (scores[i] > highest)
            highest = scores[i];
        if (scores[i] < lowest)
            lowest = scores[i];
    }

    cout << "\n--- Scores Summary ---\n";
    cout << "Total Score  : " << total << endl;
    cout << "Average Score: " << (double)total / SIZE << endl;
    cout << "Highest Score: " << highest << endl;
    cout << "Lowest Score : " << lowest << endl;

    return 0;
}
