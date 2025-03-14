#include <iostream>
using namespace std;

void Swap(int arr[] , int size){
    int third = 0;
    for (int i = 0; i < size / 2; i++)
    {
        third = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = third;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[] = {3, 4, 2, 5, 6, 8, 9, 4, 3, 7, 0, 1,5};

    int size = sizeof(arr) / sizeof(arr[0]);
   
    Swap(arr,size);
}