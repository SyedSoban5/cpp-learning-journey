#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue; // skips printing 5
        if (i == 8)
            break; // stops loop at 8

        cout << i << " ";
    }
    cout << endl;
    return 0;
}
