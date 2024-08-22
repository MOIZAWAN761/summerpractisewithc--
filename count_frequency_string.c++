#include<iostream>
#include<string.h>
using namespace std;


void print_frequency(char str[]){
    int f[128]={0},i;
    for (int i = 0; str[i]; i++)
    {
        f[str[i]]++;
    }
    for (int i = 0; i<128; i++)
    {
       if (f[i]!=0)
       {
        cout << "Frequency of '" << char(i) << "' is " << f[i] << endl;
       }
        
    }
    
}

int main(){
    char str[100];
    cout<<"enter a string";
    cin.getline(str,100);
    print_frequency(str);
    
}