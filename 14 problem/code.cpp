#include<iostream>
using namespace std;
void writeTable(int num){
    for(int i =1 ; i<=10; i++){
        cout<<num <<" X "<<i<<" = "<<num*i<<endl;
    }
}
int main(){
    int num ;
    cout<<"Enter the num : ";
    cin>>num;

    writeTable(num);

}