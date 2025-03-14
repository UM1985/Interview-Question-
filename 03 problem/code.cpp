#include <iostream>
using namespace std;

void convertMoney(double m, int &beforeDecimal, int &afterDecimal) {
    beforeDecimal = static_cast<int>(m); 
    double decimalPart = m - beforeDecimal; 
    afterDecimal = static_cast<int>(decimalPart * 100); 
}

int main() {
    double m;
    cout << "Enter the amount: ";
    cin >> m;

    int beforeDecimal, afterDecimal;
    convertMoney(m, beforeDecimal, afterDecimal);

    cout << beforeDecimal << " rupees " << afterDecimal << " paisa" << endl;
    
    return 0;
}
