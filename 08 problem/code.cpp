#include <iostream>
using namespace std;

int isPalindrome(int num)
{
    int temp = num;
    int rev = 0;

    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (num == rev)
    {
        cout << num << " is Palindrome Number!  ";
    }
    else
    {
        cout << num << " is not palindrome Number! ";
    }
}

int main()
{
    int num;

    cout << "Enter any Number : ";
    cin >> num;

    isPalindrome(num);
}