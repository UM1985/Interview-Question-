#include <iostream>
using namespace std;

void Sum(int num, int &sum)
{
   int  lastdigit = num %10;
   int firstdigit =num;
    while (firstdigit >= 10)
    {
        firstdigit /= 10;
    }
    sum = firstdigit+lastdigit;
}
int main()
{
    int num, sum = 0;
    cout << "Enter any number : ";
    cin >> num;
    Sum(num, sum);
    cout << sum;
}