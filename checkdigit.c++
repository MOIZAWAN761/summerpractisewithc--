// #include<iostream>
// using namespace std;
// bool checkdigit(int num,int digit){
   
    
//     while (num)
//     {
//         if(num%10==digit){
//             return true;
           
           
//         }
//         num/=10;
        
//     }
//      return false;
    
    

// }

// int main(){
//      int numb,dig;
//          cout<<endl<<"ENTER THE NUMBER";
//          cin>>numb;
//          cout<<endl<<"ENTER THE DIGIT";
//          cin>>dig;
//          if (checkdigit(numb,dig))
//          {
//             cout<<endl<<dig<<"IS PRESENT IN GIVEN NUMBER";
//          }
//          else
//          {
//              cout<<endl<<dig<<"IS NOT PRESENT IN GIVEN NUMBER";
//          }
// }



#include <iostream>
using namespace std;

bool checkdigit(int num, int digit) {
    while (num) {
        if (num % 10 == digit) {
            return true;
        }
        num /= 10;  // Correct the division to num
    }
    return false;
}

int main() {
    int numb, dig;
    cout << endl << "ENTER THE NUMBER: ";
    cin >> numb;
    cout << endl << "ENTER THE DIGIT: ";
    cin >> dig;
    
    if (checkdigit(numb, dig)) {
        cout << endl << dig << " IS PRESENT IN GIVEN NUMBER";
    } else {
        cout << endl << dig << " IS NOT PRESENT IN GIVEN NUMBER";
    }

    return 0;
}
