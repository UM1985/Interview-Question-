#include <iostream>
using namespace std;

void ascending(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) 
    {
        bool swapped = false; 
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) 
            break;
    }
}

void descending(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) 
    {
        bool swapped = false; 
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] < arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) 
            break;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    ascending(arr, size);
    cout << "ascending  array: ";
    printArray(arr, size);
    descending(arr, size);
    cout << "descending  array: ";
    printArray(arr, size);

    return 0;
}
