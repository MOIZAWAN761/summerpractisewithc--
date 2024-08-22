#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;

char* inputstring(){
    char *p=NULL,*q=NULL,ch;
    int size=1,i;


  p=(char *)malloc(size);
  p[0]='\0';

  while (1)
  {
    ch=getch();
    if (ch=='\n')
    {
        break;
    }
    q=(char *)malloc(size+1);
    for ( i = 0; i < size; i++)
    {
        q[i]=p[i];
    }
    q[i-1]=ch;
    q[i]='\0';
    free(p);
    size++;
    p=(char *)malloc(size);
    strcpy(p,q);
    free(q);
    
    
  }
  return p;
}

int main(){
    char *s=inputstring();
    for ( int i = 0; s[i]; i++)
    {
        cout<<s[i];
    }
    
}