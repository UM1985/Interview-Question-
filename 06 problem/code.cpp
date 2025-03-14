#include <iostream>
using namespace std;

void Sum(int num, int &sum)
{
    int temp = num;
    int lastdigit = num % 10;
    int firstdigit = num;
    while (firstdigit >= 10)
    {
        firstdigit /= 10;
    }
    while (temp > 0)
    {
        int lastd = temp % 10;
        if (lastd != lastdigit || lastd != firstdigit)
        {
            sum += lastd;
        }
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