#include<iostream>
using namespace std;

int main(){
    int size,loc,min,temp;
    cout<<"ENTER THE SIZE OF ARRAY";
    cin>>size;

    int arr[size];
    cout<<endl<<"ENTER THE VALUES IN ARRAY";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    // SORTING IN DESCENDING ORDER

    for (int i = 0; i < size; i++)
    {
        min=arr[i];
        loc=i;
        for (int j = i+1; j < size; j++)
        {
            if (min<arr[j])
            {
                min=arr[j];
                loc=j;
            }
             temp=arr[i];
            arr[i]=min;
            arr[loc]=temp;
            
        }
        
    }


    cout<<endl<<"after sorting the array"<<endl;
    for (int i = 0; i < size; i++)
    {

        cout<<"  ,"<<arr[i];
    }
    
    
    
}