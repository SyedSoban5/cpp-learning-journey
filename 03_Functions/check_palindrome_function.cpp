#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n, rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return (rev == temp);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;

    return 0;
}
