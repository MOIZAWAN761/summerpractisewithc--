// #include<iostream>
// using namespace std;

// int main(){
//     int num,sum,rev;
    
//     for (int i = 0; i < 1000; i++)
//     {
//        num=i;
//        sum=0;
//        rev=0;
    
    
//     while ( num!=0)
//     {
//         rev=num%10;
//         sum+=rev*rev*rev;
//         num/=10;
//     }
//     if (i==sum)
//     {
//         cout<<"armstrong"<<i;
//     }
//     }
    
// }


#include<iostream>
using namespace std;

int main(){
    
    // cout<<"enter number that you want to check armstrong";
    // cin>>num;

     for (int i = 0; i <= 1000; i++)
     {
        int temp,sum=0,count=0,rem;
        temp=i;
    while (temp!=0)
    {
       temp/=10;
       count++;
    }
    temp=i;
     while (temp)
     {
        rem=temp%10;
        int c=1;
        for (int i = 0; i < count; i++)
        {
            c*=rem;
        }
        sum+=c;
        temp/=10;
     }
    
    if (sum==i)
    {
      cout<<i<<" is armstrong";
    }
    // else
    // {
    //     cout<<"num is not armstrong";
    // }
    
     }
     

    
    
    
}