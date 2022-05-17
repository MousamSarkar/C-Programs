#include <iostream>
using namespace std;

bool isPalindrome(int x)
{

    int a = x, s = 0;

    if (x < 0)
        return false;

    while (a != 0)
    {
        s = (s * 10) + (int)(a % 10);
        a = (int)a / 10;
    }
    if (s == x)
        return true;
    else
        return false;
}

int main()
{

    int value;

    cout << "Enter the number : ";
    cin >> value;

    bool flag = isPalindrome(value);

    if (flag)
        cout << "Yes. Palindrome";
    else
        cout << "No, Not a palindrome";
}
