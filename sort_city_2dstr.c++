#include<iostream>
#include<string.h>
using namespace std;
// taking input from user
void input(char str[][20],int n){
    
    for (int i = 0; i < n; i++)
    {
        cout<<"enter a string"<<i+1;
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';

    }
    

}

void sort_city(char str[][20],int n){
    input(str,n);
    char temp[20];
    int i,j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            if (strcmp(str[j],str[j+1])>0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
            
        }
        
    }
    
}

int main(){
    // int r,c;
    // cout<<"enter the number of string";
    // cin>>r;
    // cout<<"enter the size of string";
    // cin>>c;

    char str[10][20];
    sort_city(str,10);
    cout<<endl<<"after sorting city names";
    for (int i = 0; i < 10; i++)
    {
        cout<<endl<<str[i];
        
    }
    
}