#include<iostream>
using namespace std;

int main(){
    int arr1[3][3],arr2[3][3];
    cout<<endl<<"ENTER THE VALUES IN ARRAY 1:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             cin>>arr1[i][j] ;
        }
        
      
    }
    cout<<endl<<"ENTER THE VALUES IN ARRAY 2:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             cin>>arr2[i][j] ;
        }
        
      
    }
    cout<<endl<<"THE product OF BOTH THE ARRAYS ARE";
    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int j = 0; j < 3; j++)
        {
            int sum=0;
            for (int k = 0; k < 3; k++)
            {
                sum+=arr1[i][k]*arr2[k][j];
            }
            cout<<sum<<"  ";
            
        //   cout<<arr1[i][j]+arr2[i][j] <<"   " ;
            
        }
        
    }
    
    
}