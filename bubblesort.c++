#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    
    cout<<endl<<"enter the values in array";
    for ( int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }


    cout<<"ELEMENTS OF ARRAY BEFORE SORTING IS"<<endl;
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<"  ";
    }
    
    
    for (int i = size-1; i > 0; i--)
    {
        for (int j = size-1; j >0+; j++)
        {
            if (arr[j]<arr[j+1])
            {
               int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp; 
            }
            
            
        }
        
    }


    cout<<"ELEMENTS OF ARRAY AFTER SORTING IS"<<endl;
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<"  ";
    }


    

}