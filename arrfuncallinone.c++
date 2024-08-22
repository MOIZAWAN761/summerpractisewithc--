#include<iostream>
using namespace std;


// function for checking the greatest element in array
int findmax(int* a,int size){
    int max=0000;
    for ( int i = 0; i < size; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    return max;
}



void sort(int* arr,int size){
    
    int max=0000;
    int loc,temp;

    // SORTING IN DESCENDING ORDER

    for (int i = 0; i < size; i++)
    {
        max=arr[i];
        loc=i;
        for (int j = i+1; j < size; j++)
        {
            if (max>arr[j])
            {
                max=arr[j];
                loc=j;
            }
             
            
        }
            temp=arr[i];
            arr[i]=max;
            arr[loc]=temp;
        
    }

    // cout<<endl<<"AFTER SORTING ARRAY NOW ELEMENTS OF ARRAY"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<" "<<arr[i];
    // }
    


}


// function for rotating array
void rotatearr(int *arr,int size,int rotate){
    
    for (int i = 0; i < rotate; i++)
    {
        int temp=arr[size-1];
        for ( int j = size-1; j >0; j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
        
    }
    
    cout<<endl;

    // printing array after rotation
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ,";
    }
    

}

// first duplicate adjacent alement
void dupelement(int* arr,int size){
    int count=0,i=0,j=1;
    sort(arr,size);

    //  cout<<endl<<"AFTER SORTING ARRAY NOW ELEMENTS OF ARRAY"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<" "<<arr[i];
    // }
  while (i<=size-2)
  {
    if (arr[i]==arr[j])
    {
        ++count;
    }
    while (arr[i]==arr[j])
    {

        j++;
    }
    i=j;
    j=j+1;
    
  }
  cout<<endl<<"total duplicate elemet in array is"<<count;

}
void arrfrequency(int* arr,int size){
    int count=0,i=0,j=1,frequency;
    sort(arr,size);

    //  cout<<endl<<"AFTER SORTING ARRAY NOW ELEMENTS OF ARRAY"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<" "<<arr[i];
    // }
  while (i<=size-2)
  {
    frequency=1;
    // if (arr[i]==arr[j])
    // {
    //     ++count;
    // }
    while (arr[i]==arr[j])
    {
        frequency++;
        j++;
    }
    cout<<endl<<"frequency of "<<arr[i]<<"is"<<frequency;
    i=j;
    j=j+1;
    
  }
  

}

int main(){
    int size,rotate;
    cout<<"ENTER THE SIZE OF ARRAY";
    cin>>size;
    int arr[size];
    cout<<"ENTER THE ELEMENT IN ARRAY";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number of rotation";
    cin>>rotate;
    // int maxnum=findmax(arr,size);
    // cout<<endl<<"THE LARGEST ELEMENT IN ARRAY IS "<< maxnum;

    arrfrequency(arr,size);
}

