#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter th number of rows : ";
    cin>>n;

    for(int i=1; i<=n;i++){

        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1;j++){
            if(i%2==0){
                cout<<"-";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=n-1; i>0;i--){

        for(int j=n-i; j>0;j--){
            cout<<" ";
        }
        for(int j=2*i-1; j>0;j--){
            if(i%2==0){
                cout<<"-";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}