#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter th number of rows : ";
    cin>>n;

    for(int i=n; i>0;i--){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}