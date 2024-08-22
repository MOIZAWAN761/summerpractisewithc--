#include<iostream>
#include<string.h>
using namespace std;

int count_gmail(char str[][30],char g[]){
    char temp[30];
    int count=0,i,j,k,g_len=strlen(g);
    for ( i = 0; i < 10; i++)
    {
        k=0;
        for ( j = strlen(str[i])-g_len; str[i][j]; j++)
        {
            temp[k]=str[i][j];
            k++;
        }
        temp[k]='\0';

        if (strcmp(temp,g)==0)
        {
            cout<<endl<<" string "<<i+1<<" ends with gmail.com";
            count++;
        }
        else
        {
            cout<<endl<<" string "<<i+1<<" not a valid gmail id";
            
        }
        
        
        
        
    }
    return count;
}

int main(){
    char str[10][30]={
    "moizawan965@gmail.com",
    "moizawan45@yahoo.com",
    "moizawan965@hotmail.com",
    "moizawan965@bing.com",
    "moizawan965@gmail.com",
    "moizawan965@edu.com",
    "moizawan965@mozilla.com",
    "moizawan965@gmail.com",
    "moizawan965@gmail.com",
    "moizawan965@gmail.com"
    };

    char g[]="gmail.com";

    cout<<"total gmail in this are"<<count_gmail(str,g);
    
}