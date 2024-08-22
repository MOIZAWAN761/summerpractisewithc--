#include<iostream>
#include<string.h>
using namespace std;

char* making_1st_word_capital(char* str){
    str[0]-=32;
    for (int i = 1; str[i]; i++)
    {
        if (str[i]==' ')
        {
            if (str[i+1]!=' '&&str[i+1]!='\0')
            {
                if (str[i+1]>='a'&& str[i+1]<='z')
                {
                    str[i+1]-=32;
                }
                
            }
            
            
        }
        
    }
    return str;
}

int main(){
    char str1[100];
    cout<<"enter a string";
    cin.getline(str1,100);
    cout<<endl<<str1;
    strcpy(str1,making_1st_word_capital(str1));
    cout<<endl<<str1;
}
