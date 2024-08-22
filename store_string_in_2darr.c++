#include<iostream>
#include<string.h>
using namespace std;
// taking input from user
void input(char str[]){
    
       cout<<endl<<"enter your string";
       cin.getline(str,100);

    }

    int count_words(char str[])
    {
        int i=0;
        int count=0;
        while (str[i])
        {
            if (str[i]==' ')
            {
                count++;
            }
            i++;
        }
     return count+1;   
    }


  void store_string(char str[],char str2[][20],int n){
    int i=0,j=0,k=0;
    str2[n][20];
    while (str[i])
    {

        int j=0;
       while (str[i]!=' '&&str[i]!='\0')
       {
        str2[k][j]=str[i];
        i++;
        j++;
       }
       str2[k][j]='\0';
       if (str[i]==' ')
       {
        i++;
        
       }
       
       k++;
       
    }
    
  }

int main(){
    char str[100];
    input(str);
    int total_words=count_words(str);
    char str2[total_words][20];
    store_string(str,str2,total_words);
    for (int i = 0; i < total_words; i++)
    {
        cout<<endl<<"This is string "<<i+1<<str2[i] ;
    }
    


    
}
