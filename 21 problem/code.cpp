#include <iostream>
using namespace std;

int insertElement(int arr[], int size, int newelement, int oldelement)
{
    for(int i =0 ; i<size ; i++){
        if(arr[i] == oldelement){
            arr[i] = newelement;
            break;
        }
    }
    cout<<"Element does not exist"<<endl;
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

    int oldelement, newelement;

    cout << "Enter the Element that you would like remove : ";
    cin >> oldelement;
    cout << "Enter the Element that you would like insert : ";
    cin >> newelement;

    insertElement(arr, size, newelement, oldelement);

    printArray(arr, size);

        return 0;
}
