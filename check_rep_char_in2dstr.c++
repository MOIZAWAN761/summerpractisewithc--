#include<iostream>
#include<string.h>
using namespace std;


void check_rep_word(char str[][20],int n){
    int i,count=0,j;
    int f[128]={0};
    for ( i = 0;i<n; i++)
    {
        for ( j = 0; str[i][j]; j++)
        {
          f[str[i][j]]++;  
        }
        
        
    }
    char max_char;
    for ( i = 0;i<128; i++)
    {
        if (f[i]>count)
        {
            count=f[i];
            max_char=char(i);
        }
        
    }
    cout<<endl<<"the most repeating character in this stirng is"<<max_char;
}


int main(){
    char str[][20]={
        "moiz",
        "ali",
        "moiz",
        "ali",
        "saad",
        "afaq",
        "khan",
        "rafy"
    };
    
    check_rep_word(str,8);
    

}