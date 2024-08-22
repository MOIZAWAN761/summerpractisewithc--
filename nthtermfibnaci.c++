#include<iostream>
using namespace std;

int main(){
    int p=0,n=1,x,f;
    cout<<"enter the nth term of fibonaci series";
    cin>>x;
    for(int i=2;i<=x;i++){
       f=p+n;
       p=n;
       n=f;
    }
    cout<<"the nth term of fibonaci series"<<f;
}