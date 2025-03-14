#include<iostream>
using namespace std;

int Reverse(int num){
   int  temp = num ;
   int rev =0;

    while (temp >0){
        rev = rev*10 + (temp%10);
        temp /= 10;
    }
    return rev;
}

int main(){
    int num;
    
    cout<<"Enter any Number : ";
    cin>>num;

    int rev = Reverse(num);

    cout<<"Reverse of " <<num <<" is " <<rev;
}