// // #include<iostream>
// // #include<string.h>
// // using namespace std;
// // // taking input from user
// // void input(char str[]){
    
// //        cout<<endl<<"enter your string";
// //        cin.getline(str,100);

// //     }


// //        int count_words(char str[])
// //     {
// //         int i=0;
// //         int count=0;
// //         while (str[i])
// //         {
// //             if (str[i]==' ')
// //             {
// //                 count++;
// //             }
// //             i++;
// //         }
// //      return count+1;   
// //     }

// //      void store_string(char str[],char str2[][20],int n){
// //     int i=0,j=0,k=0;
// //     str2[n][20];
// //     while (str[i])
// //     {

// //         int j=0;
// //        while (str[i]!=' '&&str[i]!='\0')
// //        {
// //         str2[k][j]=str[i];
// //         i++;
// //         j++;
// //        }
// //        str2[k][j]='\0';
// //        if (str[i]==' ')
// //        {
// //         i++;
        
// //        }
       
// //        k++;
       
// //     }
    
// //   }

// // // remove duplicate word form 2d array
// // void remove_dup_word(char new_string[][20],char str[],int n){
// //     store_string(str,new_string,n);

// //     int i,j,k;
// //     for ( i = 0; i < n-1; i++)
// //     {
// //         for ( j = i+1; j < n; j++)
// //         {
// //             if (strcmp(new_string[i],new_string[j])==0)
// //             {
// //                 for ( k = j; k < n-1; k++)
// //                 {
// //                  strcpy(new_string[k],new_string[k+1]);   
// //                 }
// //                n--;
// //                j--;
// //             }
            
// //         }
        
// //     }
    

// // }


// // int main(){
// //     char str[100];
// //     input(str);
// //     int totalwords=count_words(str);

// //     char new_str[totalwords][20];
// //     remove_dup_word(new_str,str,totalwords);
// //     for (int i = 0; i < totalwords; i++)
// //     {
// //         if (strlen(new_str[i])>0)
// //         {
// //             cout<<endl<<new_str[i];
// //         }
        
        
// //     }
    

// // }

// #include <iostream>
// #include <cstring>
// using namespace std;

// // Taking input from user
// void input(char str[]) {
//     cout << endl << "Enter your string: ";
//     cin.getline(str, 100);
// }

// int count_words(const char str[]) {
//     int i = 0;
//     int count = 0;
//     while (str[i]) {
//         if (str[i] == ' ') {
//             count++;
//         }
//         i++;
//     }
//     return count + 1;
// }

// void store_string(const char str[], char str2[][20], int n) {
//     int i = 0, k = 0;
//     while (str[i] && k < n) {
//         int j = 0;
//         while (str[i] != ' ' && str[i] != '\0') {
//             str2[k][j++] = str[i++];
//         }
//         str2[k][j] = '\0';
//         if (str[i] == ' ') {
//             i++;
//         }
//         k++;
//     }
// }

// // Remove duplicate words from 2D array
// int remove_dup_word(char new_string[][20], char str[], int n) {
//     store_string(str, new_string, n);

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (strcmp(new_string[i], new_string[j]) == 0) {
//                 for (int k = j; k < n - 1; k++) {
//                     strcpy(new_string[k], new_string[k + 1]);
//                 }
//                 n--; // Reduce the size of the array since we removed a word
//                 j--; // Check the new word at position j
//             }
//         }
//     }
//     return n;
// }

// int main() {
//     char str[100];
//     input(str);
//     int totalwords = count_words(str);

//     char new_str[totalwords][20];
//     totalwords = remove_dup_word(new_str, str, totalwords);

//     cout << "String without duplicate words:";
//     for (int i = 0; i < totalwords; i++) {
//         if (strlen(new_str[i]) > 0) { // Print only non-empty strings
//             cout << " " << new_str[i];
//         }
//     }
//     cout << endl;

//     return 0;
// }


// simple approach of removing double elements from 2d array with sorting

#include<iostream>
#include<string.h>
using namespace std;


void sort(char str[][20],int n){
    int i,j;
    char temp[20];
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j <n-i-1 ; j++)
        {
            if (strcmp(str[j],str[j+1])>0)
            {
             strcpy(temp,str[j]);
             strcpy(str[j],str[j+1]);
             strcpy(str[j+1],temp);
            }
            
        }
        
    }
    
}


void remove_duplicate(char str[][20],int n){
    sort(str,n);
    int i;
    for ( i = n-2; i >=0; i--)
    {
        if (strcmp(str[i],str[i+1])==0)
        {
            str[i+1][0]='\0';
            
        }
        
    }
    sort(str,n);
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
    
    remove_duplicate(str,8);
    int i=0;
    for(int i=0;i<8;i++)
    {
        if (str[i]!='\0')
        {
             cout<<" "<<str[i]; 
        }
        
       
        
    }
    

}