#include <iostream>
using namespace std;

int main() {
    int num = 1, n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= i; j++) { 
            if (j == 1 || j == i || i == n) {  
                
                cout << num;
            } else {
                cout << " ";
            }
            num++; 
        }
        cout << endl;
    }
    return 0;
}
