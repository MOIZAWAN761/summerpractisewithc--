#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    do
    {
        cout<<"enter number";
        cin>>num;
        sum+=num;
    } while (num!=0);
    cout<<endl<<sum;

}