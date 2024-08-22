#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int size,max=-10000,min=100000;
    int maxi=INT_MIN;
    int s_max=INT_MIN;
    int s_min=INT_MAX;
    cout<<"ENTER THE SIZE OF ARRAY";
    cin>>size;
    int arr[size];
    int sum=0,even_sum=0,odd_sum=0;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if (arr[i]%2==0)
        {
            even_sum+=arr[i];
        }
        else
        {
           odd_sum+=arr[i]; 
        }
        if (arr[i]>max)
        {
            s_max=max;
            max=arr[i];
        }
        else if (s_max<arr[i])
        {
            s_max=arr[i];
        }
        
        
        if (arr[i]<min)
        {
            min=arr[i];
        }
        else if (arr[i]<s_min)
        {
            s_min=arr[i];
        }
        

    //   logic for finding smax
   
    
        
    }
    cout<<endl<<"THE SUM OF ARRAY IS "<<sum;
    cout<<endl<<"THE AVERAGE OF ARRAY IS "<<sum/size;
    cout<<endl<<"THE EVEN SUM OF ARRAY IS "<<even_sum;
    cout<<endl<<"THE ODD SUM OF ARRAY IS "<<odd_sum;
    cout<<endl<<"THE GREATEST ELEMENT OF ARRAY IS "<<max;
    cout<<endl<<"THE  SECOND GREATEST ELEMENT OF ARRAY IS "<<s_max;
    cout<<endl<<"THE SMALLEST ELEMENT OF ARRAY IS "<<min;
    cout<<endl<<"THE SECOND SMALLEST ELEMENT OF ARRAY IS "<<s_min;
    
}