#include<iostream>
#include<string.h>
using namespace std;



// function to remove spaces 
char* remove_space(char *s){
  char* p;
  p=(char *)malloc(strlen(s));
  int i=0,j=0;
  while (*(s+i))
  {
    while (*(s+i)==' ')
    {
        i++;
    }
    while (*(s+i)!=' ' && *(s+i)!='\0')
    {
        *(p+j)=*(s+i);
        i++;
        j++;
    }
    if (*(s+i)=='\0' && *(p+j-1)==' ' )
    {
      j--;
    }
    
    *(p+j)=*(s+i);
    j++;
    
  }
  return p;
}

int count_words(char* str){
  int i=0;
  int count=0;
  while (*(str+i)!='\0')
  {
   if (*(str+i)== ' ')
   {
    count++;
   }
   i++;
  }
  return count+1;
}

int main(){
    char str[100];
    cout<<"ENTER A STRING";
    gets(str);
    cout<<endl<<"the length of string "<<strlen(str);
    strcpy(str,remove_space(str));
    cout<<endl<<"the length of string "<<strlen(str);
    cout<<endl<<str; 
    int num_of_words=count_words(str);
    cout<<endl<<"number of words in this string is"<<num_of_words; 
    


}

