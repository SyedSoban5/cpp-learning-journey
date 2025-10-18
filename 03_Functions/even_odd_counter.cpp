#include <iostream>
using namespace std;

void countEvenOdd(int start, int end)
{
    int even = 0, odd = 0;

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
}

int main()
{
    int a, b;
    cout << "Enter start and end numbers: ";
    cin >> a >> b;

    countEvenOdd(a, b);
    return 0;
}
