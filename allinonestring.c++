#include<iostream>
#include<string.h>
using namespace std;
// make structure for storing word in this
struct word
{
    char word[20];
};


// bool ispalindrome(char str[]){
//     int len=strlen(str)/2;
//     int l_ind=strlen(str)-1;
//    int count =0;
//     for (int i = 0; i < len; i++)
//     {
//         if (str[i]==str[l_ind-i])
//         {
//             count++;
//         }
//         else{
//             break;
//         }
//     }

//     return (count==len)?true:false;
    
    
// }



// trrimming space from both ends

// char* removespace(char *s){
//    char *p=(char *)malloc(strlen(s));
//    int i=0,j=0;
//    while (*(s+i))
//    {
//     while (*(s+i)==' ')
//     {
//         i++;
//     }
//     while (*(s+i)!=' ' &&*(s+i)!='\0')
//     {
//         *(p+j)==*(s+i);
//         i++;
//         j++; 
//     }
//     if (*(s+i)=='\0' && *(p+j-1)==' ' )
//     {
//         j--;
//     }
//     *(p+j)==*(s+i);
//     j++;
    
    
    
//    }
//    return p;
    
// }


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

//count words
int totalwords(char *s){
    int i=0,count=0;
    while (*(s+i))
    {
        if (*(s+i)==' ')
        {
           count++;
        }
        i++;
    }
    return count+1;
}



// reverse string in c++

char* reverse(struct word* ptr,char *str){
    int i=0,k=0;
    char temp[20];
    while (*(str+i))
    {
        int j=0;
        while(*(str+i)!=' ' && *(str+i)!='\0')
        {
            temp[j]=*(str+i);
            i++;
            j++;
        }
        if (*(str+i)==' ')
        {
            i++;
        }
        temp[j]=' ';
        strcpy(ptr[k].word,temp);
        k++;
    }
    char* q=(char *)malloc(strlen(str));
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
    char str[100];
    // fgets(str,20,stdin);
    // if (str[strlen(str)-1]='\n')
    // {
    //    str[strlen(str)-1]='\0' ;
    // }

    gets(str);
    
    cout<<"length before calling function"<<strlen(str);
    strcpy(str,remove_space(str));
    cout<<"length after calling function"<<strlen(str);
    cout<<endl<<str;

    int no_of_words=totalwords(str);

    struct word* ptr=(struct word*)calloc(no_of_words,sizeof(struct word));
    strcpy(str,reverse(ptr,str));
    cout<<endl<<str;


}