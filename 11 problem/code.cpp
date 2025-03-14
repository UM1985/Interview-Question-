#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter  a number : ";
    cin >> num;

    if (isPrime(num))
    {
        cout << "Given Number is Prime!";
    }
    else
    {
        cout << "Given Number is not Prime!";
    }
}