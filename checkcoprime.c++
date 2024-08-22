#include<iostream>
using namespace std;

int main(){
    int num1,num2,coprime;
    cout<<"enter two numbers";
    cin>>num1>>num2;

    int least=num1<num2?num1:num2;
    for (int  i = 1; i <= least; i++)
    {
        if (num1%i ==0 && num2%i ==0 ){
            coprime=i;
        }
    }
    if (coprime==1)
    {
        cout<<"yes both the number is coprime";
    }
    else
    {
        cout<<"num is not coprime";
    }
    
    
}