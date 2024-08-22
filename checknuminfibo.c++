#include<iostream>
using namespace std;
int main(){
    int p=0,n=1,x,f=p+n,flag=0;
    cout<<"enter the num that u want to check in fibonaci series";
    cin>>x;

    while (f<=x)
    {
        if(f==x){
            flag=1;
            break;
        }
        f=n+p;
        p=n;
        n=f;
    }
    if(flag){
        cout<<"yes num is present in fobonaci series";
    }
    else{
        cout<<"not present in fobonaci series";
    }
}