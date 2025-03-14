#include <iostream>
#include <algorithm>
using namespace std;

void checkPalindrome(int arr[], int size)
{

    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
        {
            cout << "Array is not Palindrome!" << endl;
            return;
        }
    }

    cout << "Array is Palindrome!";
}

int main()
{

    int arr[] = {1, 2, 3, 4, 3, 2, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    checkPalindrome(arr, size);
}