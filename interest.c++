#include<iostream>
using namespace std;

int main(){
    int principle,rate,time;
    float si;
    cout<<"enter the principle(amount) in R.S";
    cin>>principle;
    cout<<endl<<"enter the interst rate";
    cin>>rate;
    cout<<endl<<"enter the time in years";
    cin>>time;

    si=principle*rate*time/100.0;
    cout<<endl<<si;
}