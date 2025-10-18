#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int* ptr = &num; // pointer to num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << ptr << endl;
    cout << "Value via pointer: " << *ptr << endl;

    *ptr = 100; // modify value using pointer
    cout << "Updated value of num: " << num << endl;

    return 0;
}
