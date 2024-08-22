#include<iostream>
using namespace std;

// recursion functon for printing first n natural number
int print_n(int num){
    if (num>0)
    {   
       int num2=num*num;
        
      return num2+= print_n(num-1);
        // cout<<num*num<<endl;
    }
    else
    {
        return 0;
    }
    
}



// calculalting sum of digit og given number
int digitsum(int num){
    if (num>0)
    {   
       int digit=num%10;
        
      return digit+= digitsum(num/10);
        // cout<<num*num<<endl;
    }
    else
    {
        return 0;
    }
}

// printing binary of given number
void print_bin(int num){
    if (num>0)
    {
        print_bin(num/8);
        cout<<num%8;
    }
    
}


// recursive function for printing the reverse of given number
void print_rev(long int num) {
    
    if (num>0)
    {
       
        cout<<num%10;
         print_rev(num/10);

    }
    
    
}



// function for factoral through recursion
int fact(int num){
    if (num>1)
    {
        return num*fact(num-1);
    }
    else
    {
        return 1;
    }
    
    
}

// function for count digit through recursion
int count_digit(long int num){
    static int i=0;
    if (num>0)
    {
      count_digit(num/10);
      return i+=1;
    }
    

}


// recursive function of hcf
int hcf(int a,int b){
    if (a>b)
    {
        if (a%b==0)
        {
            return b;
        }
        else
        {
         hcf(a%b,b);   
        }
    }
    else
    {
        if (b%a==0)
        {
            return a;
        }else
        {
            hcf(a,b%a);
        }
        
        
        
    }
     
    
    
    
}


// calculate power of number using recursion
int numpow(int num,int pow){
    if (pow>0){
    return num*=numpow(num,--pow);
    }
    else{
        return 1;
    }

}

int main(){
   
    cout<<hcf(200,240);


}