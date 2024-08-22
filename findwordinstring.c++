#include<iostream>
#include<string.h>
using namespace std;


int find_word(char str[],char word[]){
    int l;
    for ( l = 0; word[l]; l++);

    int i,k,j;

    for (int i = 0; str[i+l-1]; i++)
    {
        k=i;
        for ( j = 0; j < l; j++)
        {
            if (word[j]!=str[k])
            {
                break;
            }
            k++;
        }
        if (j==l)
        {
            return i;
        }
        
    }
    
    
    return -1;

}

int main(){
    char str1[100];
    char word[20];

    cout<<"enter your string";
    cin.getline(str1,100);
    cout<<"enter the word that u want to search in a string";
    cin.getline(word,20);
    if (find_word(str1,word)==-1)
    {
        cout<<endl<<"word is not present";
    }
    else
    {
        cout<<endl<<"word is present on index number"<<find_word(str1,word);
    }
    
    

}