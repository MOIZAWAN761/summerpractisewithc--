#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void f1(char str[],int k,int l,char temp[],int r,int i,int &index,char **ptr);

int factorial(int n){
    if (n==1 || n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

void stringcombination(char str[],int r){
    int l=strlen(str);
    int k=0,index=0;
    char temp[r+1];
    int t_combiantion=factorial(l)/(factorial(l-r)*factorial(r));
    char **ptr=(char**)malloc(sizeof(char*)*t_combiantion);
    for (int i = 0; i < t_combiantion; i++)
    {
        ptr[i]=(char *)malloc((r+1)*sizeof(char));
    }
    

f1( str, k, l, temp, r, 0,index,ptr);

for (int i = 0; i < t_combiantion; i++)
{
    cout<<endl<<ptr[i];
}
for (int i = 0; i < t_combiantion; i++)
{
    free(ptr[i]);
}
free(ptr);

    
}
void f1(char str[],int k,int l,char temp[],int r,int i,int &index,char **ptr){
  int j;
  for ( j = i+1; j <= l-r+k+1; j++)
  {
    temp[k]=str[j-1];
    if (k+1==r)
    {
        temp[k+1]='\0';
        strcpy(ptr[index],temp);
        index++;

        // cout<<temp<<endl;
    }
    else
    {
       f1( str, k+1, l, temp, r, j,index,ptr);
    }
    
    
  }
  
}

int main(){
    char str[]="abcde";
    int r=3;
     stringcombination(str,r);
}