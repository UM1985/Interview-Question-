#include <iostream>
using namespace std;

void Sum(int num, int &sum)
{
    int temp = num;
    while (temp > 0)
    {
        sum += (temp % 10);
        temp /= 10;
    }
}
int main()
{
    int num, sum = 0;
    cout << "Enter any number : ";
    cin >> num;
    Sum(num, sum);
    cout << sum;
}