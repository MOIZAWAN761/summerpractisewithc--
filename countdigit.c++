#include<iostream>
using namespace std;

int main(){
    int count=0,num;
    cout<<"enter number";
    cin>>num;
    while (num>0)
    {
        count++;
       num= num/10;
    }
    cout<<"num is "<<count<<"digit num";
    
}