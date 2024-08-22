#include<iostream>
using namespace std;

int main(){
    int arr[2][3];
    cout<<endl<<"ENTER THE VALUES IN ARRAY 1:";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<endl<<"AFTER TRANSPOSE NOW ARRAY 1:";
    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int j = 0; j <2 ; j++)
        {
            cout<<arr[j][i]<<"  ";
        }
        
    }
    
    
}