#include<iostream>
#include<stdlib.h>
using namespace std;


int *merge(int arr1[],int size1,int arr2[2],int size2){
    int i=0,j=0,k=0;
    int *c=(int *)malloc(size1+size2*sizeof(int));
    for ( i = 0,j=0,k=0; i < size1&&j<size2; k++)
    {
        if (arr1[i]<arr2[j])
        {
            c[k]=arr1[i];
            i++;

        }
        else
        {
            c[k]=arr2[j];
            j++;
        }
        
        
    }
    while (i<size1)
    {
        c[k]=arr1[i];
        i++;
        k++;
    }
    while (j<size2)
    {
        c[k]=arr2[j];
        j++;
        k++;
    }
    
return c;
    
}


int main(){
int arr1[5]={1,3,5,7,9};
int arr2[6]={2,4,6,8,10,12};

int *p=merge(arr1,5,arr2,6);
for (int i = 0; i < 5+6; i++)
{
    cout<<" ,"<<*(p+i);
}

}