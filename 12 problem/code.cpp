#include <iostream>
using namespace std;

int Factorial(int num)
{
    int factorial = 1;
    for (int i = num; i > 0; i--)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int num;

    cout << "Enter any number : ";
    cin >> num;

    int factorial = Factorial(num);

    cout << "Factorial of " << num << " is " << factorial;
}