#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Dynamic memory allocation for 2 matrices
    int** mat1 = new int*[rows];
    int** mat2 = new int*[rows];
    int** sum  = new int*[rows];

    for (int i = 0; i < rows; i++) {
        mat1[i] = new int[cols];
        mat2[i] = new int[cols];
        sum[i]  = new int[cols];
    }

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> mat1[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> mat2[i][j];

    // Matrix addition
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    // Display sum
    cout << "\nSum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] mat1[i];
        delete[] mat2[i];
        delete[] sum[i];
    }
    delete[] mat1;
    delete[] mat2;
    delete[] sum;

    return 0;
}
