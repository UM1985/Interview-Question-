#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the value for num: ";
    cin >> num;
    int n1 = 0, n2 = 1, fibonacci = 0;

    cout << n1 << "," << n2;

    for (int i = 2; i < num; i++)
    {
        fibonacci = n1 + n2;
        n1 = n2;
        n2 = fibonacci;

        cout << "," << fibonacci;
    }
}
