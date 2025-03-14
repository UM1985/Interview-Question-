#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isMagicNumber(int num) {
    while (num > 9) {
        num = sumOfDigits(num);
    }
    return (num == 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isMagicNumber(num))
        cout << num << " is a Magic Number.\n";
    else
        cout << num << " is not a Magic Number.\n";

    return 0;
}
