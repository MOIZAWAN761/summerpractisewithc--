#include<iostream>
#include<string.h>
using namespace std;

void input(char str[][20],int n){
    
    for (int i = 0; i < n; i++)
    {
        cout<<"enter a string"<<i+1;
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';

    }
    

}

int main(){
  char str[3][20];
  input(str,3);
  int i;
  for ( i = 0; i < 3; i++)
  {
    cout<<str[i];
  }
  
}