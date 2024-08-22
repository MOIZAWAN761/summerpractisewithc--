// #include<iostream>
// #include<string.h>
// using namespace std;

// int case_ignore_comparision(char str1[],char str2[]){
//     int i;
//     for (int i = 0;  str1[i]; i++)
//     {
//         if (str1[i]>='a' && str1[i]<='z')
//         {
//             str1[i]-=32;
//         }
        
//     }
//     for (int i = 0;  str2[i]; i++)
//     {
//         if (str2[i]>='a' && str2[i]<='z')
//         {
//             str2[i]-=32;
//         }
        
//     }
//     for (int i = 0; str1[i]&&str2[i]  ; i++)
//     {
//         if (str1[i]!=str2[i])
//         {
//             return 0;
//         }
        
//     }
//     if (str1[i]==str2[i])
//     {
//         return 1;
//     }
    
//     else
//     {
//         return 0; 
//     }
    
    
// }

// int main(){
//     char str1[100];
//     char str2[100];

//     cout<<"enter first stirng";
//     fgets(str1,20,stdin);
//     cout<<"enter second stirng";
//     fgets(str1,20,stdin);

//     if (!case_ignore_comparision(str1,str2))
//     {
//         cout<<endl<<"string are not equal";
//     }
//   else
//     {
        
//         cout<<endl<<"string are equal";
//     }
     
    
// } 

#include <iostream>
#include <cstring>
using namespace std;

int case_ignore_comparision(char str1[], char str2[]) {
    int i;

    // Convert str1 to uppercase
    for (i = 0; str1[i]; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] -= 32;
        }
    }

    // Convert str2 to uppercase
    for (i = 0; str2[i]; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            str2[i] -= 32;
        }
    }

    // Compare the strings
    for (i = 0; str1[i] && str2[i]; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }

    // If both strings end at the same position, they are equal
    if (str1[i] == str2[i]) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str1[100];
    char str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    if (!case_ignore_comparision(str1, str2)) {
        cout << endl << "Strings are not equal";
    } else {
        cout << endl << "Strings are equal";
    }

    return 0;
}
