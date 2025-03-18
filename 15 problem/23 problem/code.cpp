#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the value for n: ";
    cin >> n;
   
    for (int i = 1; i <= n-2; i++)
    { 
        if (i == 1 || i == n-2)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        { 
            for (int j = 1; j <= n; j++)
            { 
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}