#include<iostream>
#include<string.h>
using namespace std;

char* sorting(char str[]){
    int i,j;
    char temp;
    for ( i = 0; i < strlen(str)-1; i++)
    {
        for ( j = 0; j < strlen(str)-1-i; j++)
        {
            if (str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
                
            }
            
        }
      
    }
      return str;
}

int is_anagram(char str1[],char str2[]){
    return (strcmp(sorting(str1),sorting(str2))==0);
}


int main(){
    char str1[]="moiz";
    char str2[]="iom";

    if (is_anagram(str1,str2))
    {
        cout<<"string is anagram";

    }
    else
    {
        cout<<"not anagram";
    }
    
    

}