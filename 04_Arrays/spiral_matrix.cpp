// ------------------------------------------------------------
// File: spiral_matrix.cpp
// Topic: Spiral Matrix
// Description: Fills a 2D array in a spiral order and prints it.
//              Advanced logic with nested loops and boundaries.
// ------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int matrix[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right)
    {
        // Top row
        for (int i = left; i <= right; i++)
            matrix[top][i] = num++;
        top++;

        // Right column
        for (int i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;

        // Bottom row
        for (int i = right; i >= left; i--)
            matrix[bottom][i] = num++;
        bottom--;

        // Left column
        for (int i = bottom; i >= top; i--)
            matrix[i][left] = num++;
        left++;
    }

    cout << "\nSpiral Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
