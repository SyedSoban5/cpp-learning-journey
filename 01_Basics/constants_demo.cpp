#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14159;
    float radius;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area of circle: " << PI * radius * radius << endl;

    return 0;
}
