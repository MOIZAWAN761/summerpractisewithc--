#include<iostream>
using namespace std;

void print_combination(int arr[],int n,int index){
    if (index==0) {
        cout<<endl;
        for (int i = 0; i < n; i++){
        cout<<arr[i];
        
    }
   
    }
    else
    {
         arr[index-1]=0;
    print_combination(arr, n,index-1);
    arr[index-1]=1;
    print_combination( arr, n, index-1);
    }
    
}

int main(){
    int arr[4]={0};
    print_combination(arr,4,4);
}