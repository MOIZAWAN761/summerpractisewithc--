#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;


// make a structure in which we will store the number of words of orignal string
struct word
{
   char word[20];
};


// function 1 for removing extra space

char* remove_extra_space(char* s){
    char* p=(char *)malloc(strlen(s));
    int i=0,j=0;

    while (*(s+i))
    {
        while (*(s+i)==' ')
        {
           i++;
        }
        while (*(s+i)!= ' '&& *(s+i) != '\0')
        {
            *(p+j)=*(s+i);
            i++;
            j++;
        }
        if (*(s+i)=='\0' && *(p+j-1)==' ')
        {
            j--;
        }
        *(p+j)=*(s+i);
        j++;
        
        
        
    }
    return p;
}


// function for checking word

int no_of_words(char* str){
    int count=0,i=0;
    while (*(str+i))
    {
        if (*(str+i)==' ')
        {
            count++;
        }
        i++;
        
    }
    
    return count+1;
}


// reverse function for reversing string wordwise

void accronym(char* str){
    // here store string in structure variable
    int i=0,k=0;
    int count_words=no_of_words(str);
    char array[count_words][20];
    
    while (*(str+i))
    {
       int j=0;
       while(*(str+i)!= ' ' &&*(str+i)!='\0')
       {
        array[k][j]=*(str+i);
        i++;
        j++;
       }

       if (*(str+i)==' ')
       {
        
        i++;
        
        
       }
       array[k][j]='\0';
       
       k++;
       
    }
    // char *q=(char *)malloc(strlen(str));
    // *(q+0)='\0';
    // char temp[strlen(str)];
    k=0;
    int j=0;
    while (k<count_words-1)
    {
        // strcat(temp[j],array[k][0]);
        // strcat(q," ");
        // k--;
        cout<<array[k][0];
        cout<<" ";
        k++;
        
    }
    
    // j=0;
    // while (array[k][j])
    // {
        cout<<array[k];
    //     j++;
    // }
    
    
    
   
}

int main(){
    char str[100];
    cout<<"enter a string";
    cin.getline(str,100);
    accronym(str);


}

