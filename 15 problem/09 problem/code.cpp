#include <iostream>
using namespace std;

int main() {
    int n=5;
   

    for (int i = 1; i <= n; i++) {  
        int val;
        
        if (i == 1 || i == 4 || i == 5) {
            val = 1;
        } else {
            val = 0;
        }

        for (int j = 1; j <= i; j++) { 
            cout << val << " ";
            val = 1 - val; 
        }
        cout << endl;
    }

    return 0;
}
