#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "Number is positive." << endl;
    else if (num < 0)
        cout << "Number is negative." << endl;
    else
        cout << "Number is zero." << endl;

    return 0;
}
