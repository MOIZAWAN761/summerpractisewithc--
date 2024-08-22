#include<iostream>
using namespace std;

int findnextprime(int num){
    while (num)
    {
        num++;
        int isprime=1;
        for (int i = 2; i <num; i++)
        {
           if (num%i==0)
           {
            isprime=0;
            break;
           } 
        }
        if (isprime)
        {
            cout<<endl<<num<<"is next number that is prime";
            break;
        }
        
        
    }
    
}


int main(){
    int num;
    cout<<"enter the form where you want to check next prime number";
    cin>>num;
    findnextprime(num);
}
