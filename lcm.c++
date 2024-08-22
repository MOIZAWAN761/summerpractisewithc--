#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"enter two numbers";
    cin>>num1>>num2;

    int grt=(num1>num2)?num1:num2;
    for ( int i = grt; i >=grt; i++)
    {
        if (i%num1==0 && i%num2==0)
        {
            cout<<"lcm of both number is "<<i;
            break;
        }
        
    }
    
}