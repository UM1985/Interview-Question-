#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i =1; i<=n;i++){
        int num =1;
        for(int j=1; j<=i;j++){
            if(i%2==0){
                cout<<"*";
            }else{
                cout<<num++;
            }

            
        }
        cout<<endl;
    }
}