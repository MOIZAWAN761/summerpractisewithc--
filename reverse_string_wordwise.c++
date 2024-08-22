#include<iostream>
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

char* reverse(struct word *ptr,char* str){
    // here store string in structure variable
    int i=0,k=0;
    char temp[0];
    while (*(str+i))
    {
       int j=0;
       while(*(str+i)!= ' ' &&*(str+i)!='\0')
       {
        temp[j]=*(str+i);
        i++;
        j++;
       }

       if (*(str+i)==' ')
       {
        i++;
        
       }
       temp[j]='\0';
       strcpy(ptr[k].word,temp);
       k++;
       
    }
    char *q=(char *)malloc(strlen(str));
    *(q+0)='\0';
    k--;
    while (k)
    {
        strcat(q,ptr[k].word);
        strcat(q," ");
        k--;
        
    }
    strcat(q,ptr[0].word);
    
    return q;
}


int main(){
    // first thing to take input from user
    char str[100];
    cout<<"enter a string";
    gets(str);
    // check length before using function
    cout<<endl<<"before removing spaces length of string is"<<strlen(str);
    strcpy(str,remove_extra_space(str));
    // check length for checking function is properly working or not
    cout<<endl<<"before removing spaces length of string is"<<strlen(str);

    // count the no of words in string
    int no_of_word=no_of_words(str);
    cout<<endl<<"the number of words in stirng is"<<no_of_word;

    // declare pointer which will point to dynamically allocated memory of structure variables
    struct word* ptr=(struct word*)calloc(no_of_word,sizeof(struct word));

    // call reverse function that will revverse our string word wise
    strcpy(str,reverse(ptr,str));
    cout<<endl<<str;

}