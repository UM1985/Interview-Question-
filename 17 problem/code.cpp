#include<iostream>
#include<limits.h>
using namespace std;

int Maximum(int arr[] , int size){
    int n = INT_MIN;
    
    for(int i =0 ; i <size ; i++){
         if(arr[i]>n){
            n = arr[i];
         }
    }
     return n;
    }

int Minimum(int arr[] , int size){
int n = INT_MAX;

for(int i =0 ; i <size ; i++){
     if(arr[i]<n){
        n = arr[i];
     }
}
 return n;
}

int main(){

    int arr[] = {3,44,665,554,6432,544,3634,66,443,345};

    int size = sizeof(arr)/sizeof(arr[1]);

    int maximum = Maximum(arr , size);
    int minimum = Minimum(arr , size);

    cout<<"Maximum value in the given array is "<<maximum<<endl;
    cout<<"Minimum value in the given array is "<<minimum<<endl;
      
}