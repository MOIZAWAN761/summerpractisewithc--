// #include<iostream>
// #include<string.h>

// using namespace std;

// void check_last_letter(char str[]){
//     int i=0,k=0,j;
//     char newstr[10][20];
//     char temp[20];
//     while (str[i])
//     {
//         j=0;
//          memset(temp, 0, sizeof(temp));
//         while (str[i] && str[i]!=' ')
//         {
//             temp[j]=str[i];
//             i++;
//             j++;
    
//         }
//          temp[j]='\0';
//         if (strlen(temp)-1=='s')
//         {
//             strcpy(newstr[k],temp);
//             k++;
//         }
//         if (str[i]==' ')
//         {
//             i++;
//         }
        
        
        
        
        
//     }
//     for ( i = 0; i < k; i++)
//     {
//         cout<<endl;
        
//             cout<<newstr[i];
        
        
//     }
    
// }

// int main(){
//     char str[]="moizs rafay kami sons kashan alis";
//     check_last_letter(str);

// }

#include<iostream>
#include<string.h>
using namespace std;

void check_last_letter(char str[]) {
    int i = 0, k = 0, j;
    char newstr[10][20];
    char temp[20];

    while (str[i]) {
        j = 0;
        // Reset temp array for each word
        memset(temp, 0, sizeof(temp));
        
        // Extract each word
        while (str[i] && str[i] != ' ') {
            temp[j] = str[i];
            i++;
            j++;
        }
        
        // Null-terminate the temp string
        temp[j] = '\0';
        
        // Check if the last character is 's'
        if (temp[j-1] == 's') {
            strcpy(newstr[k], temp);
            k++;
        }
        
        // Skip the space
        if (str[i] == ' ') {
            i++;
        }
    }
    
    // Print the words that end with 's'
    for (i = 0; i < k; i++) {
        cout << newstr[i] << endl;
    }
}

int main() {
    char str[] = "moizs rafay kami sons kashan alis";
    check_last_letter(str);
    return 0;
}
