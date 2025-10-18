#include <iostream>
using namespace std;

int main() {
    int num = 50;
    int* ptr = &num;
    int** ptr2 = &ptr;

    cout << "Value of num: " << num << endl;
    cout << "Value via pointer: " << *ptr << endl;
    cout << "Value via pointer to pointer: " << **ptr2 << endl;

    **ptr2 = 200; // modify value using pointer to pointer
    cout << "Updated value of num: " << num << endl;

    return 0;
}
