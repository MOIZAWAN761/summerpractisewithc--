#include<iostream>
using namespace std;

int main(){
    int c_price,s_price,earn,amount;
    float profit;
    cout<<"enter the cost price of banana per dozen";
    cin>>c_price;
    cout<<endl<<"enter the selling price per dozen";
    cin>>s_price;

    cout<<endl<<"enter the amount of banana sold";
    cin>>amount;

    if (s_price>c_price)
    {
        earn=(s_price-c_price)*amount/12;
        profit=earn*100.0/(c_price*amount/12);
        cout<<endl<<"you earned profit "<<profit<<"%";
        

    }
    else{
         earn=(c_price-s_price)*amount/12;
          profit=earn*100.0/(c_price*amount/12);
        cout<<endl<<"you  loss is "<<profit<<"%";
    }
    
}