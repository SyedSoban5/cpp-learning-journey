#include <iostream>
using namespace std;

int findMax(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main()
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Maximum = " << findMax(x, y, z) << endl;
    return 0;
}
