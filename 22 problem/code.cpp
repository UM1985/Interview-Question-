#include <iostream>
using namespace std;

void deleteByPosition(int arr[], int &size, int pos) {
    if (pos < 0 || pos >= size) {
        cout << "Invalid position!" << endl;
        return;
    }
    
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // Reduce array size
}

void deleteByValue(int arr[], int &size, int value) {
    int pos = -1;

    // Find position of value
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Value not found in array!" << endl;
        return;
    }

    deleteByPosition(arr, size, pos);
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {2,32,42,1,4,32,44,6,45,4,656,3,6,44,2,3};
    int  size = sizeof(arr)/ sizeof(arr[0]);
    int choice,pos,value;

    cout << "Choose deletion method:\n";
    cout << "1. Delete by Position\n";
    cout << "2. Delete by Value\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter position to delete (0-based index): ";
        cin >> pos;
        deleteByPosition(arr, size, pos);
    } else if (choice == 2) {
        cout << "Enter value to delete: ";
        cin >> value;
        deleteByValue(arr, size, value);
    } else {
        cout << "Invalid choice!" << endl;
    }

    cout << "Updated array: ";
    displayArray(arr, size);

    return 0;
}
