#include<iostream>
using namespace std;

int main(){
    int num,i=1;
    cout<<"enter even number";
    cin>>num;

    while(i<=3){
        if(num/2*2==num){
            cout<<endl<<"you have won the game";
            break;
        }
        else{
            
            if (i==3)
            {
                cout<<"sorry you have lost all the chances";
                break;
            }
            i++;
            cout<<"enter the num again";
            cin>>num;
        }

    }

}