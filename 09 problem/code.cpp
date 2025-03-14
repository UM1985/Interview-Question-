#include <iostream>
#include<math.h>
using namespace std;

int checkArmstrong(int num){
    int temp = num;
    int count = 0;
    int armstrong = 0;

    while (temp > 0)
    {
        temp /= 10;
        count++;
    }

    temp =num;

    while(temp >0){
        armstrong += pow((temp%10 ), count);
        temp /=10;
    }
return armstrong;
}

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    int armstrong = checkArmstrong(num);
   
    if(armstrong == num ){
        cout<<num<<" is an armstrong number!";
    }else{
        cout<<num<<" is not an armstrong number!";
    }

}
