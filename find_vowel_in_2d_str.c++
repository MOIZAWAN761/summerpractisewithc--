#include<iostream>
#include<string.h>
using namespace std;
// taking input from user
void input(char str[][20],int n){
    
    for (int i = 0; i < n; i++)
    {
        cout<<"enter a string"<<i+1;
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';

    }
    

}

void find_vowel(char str[][20],int row,int col){
    input(str,3);
    char vowelarr[]="aeiouAEIOU";
    int i,j,count_vowel;
    for ( i = 0; i < row; i++)
    {
        count_vowel=0;
        for ( j= 0; str[i][j]; j++)
        {
            for (int k = 0; vowelarr[k]; k++)
            {
                if (str[i][j]==vowelarr[k])
                {
                    count_vowel++;
                }
                
            }
            
            
        }
        cout<<endl<<"the number of vowel in stirng "<<i+1<<" are "<<count_vowel;
    }
    
}

int main(){
  char str[3][20];
//   input(str,3);
//   int i;
//   for ( i = 0; i < 3; i++)
//   {
//     cout<<str[i];
//   }
 find_vowel(str,3,20);
  
}