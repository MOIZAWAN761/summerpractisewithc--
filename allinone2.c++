#include<iostream>
using namespace std;


// /function for checking area 

int findarea(int rad){
    return 3.14*rad*rad;

}

// function for calculating interest
double calcinterest(int amount,int time,float rate){
    int si=amount*time*rate/100.0;
    return si;
}

// FUNCTION FOR CHECKING EVEN AND NUM
int checknum(int num){
    return num%2;
}

// function for printinf first n natural num
void natnum(int num){
    for (int i = 1; i <= num; i++)
    {
       cout<<"  " <<i;
    }
    
}

// FUNCTION FOR PRINTING FIRST N ODD NUMBER
void oddnum(int num){
    int i=1;
    
    cout<<i<<"  ";
    for ( i = 1; i <= num; i++)
    {
        
       cout<<"  " <<2*i-1;
    }
    
}

// function for factorial
int fact(int num){
    int fact=1;

    while (num)
    {
        fact*=num;
        num--;
        
    }
    return fact;
}


// FUNCTION FOR CHECKING THE NUMBER OF COMBINATIONS
int checkcombination(int item,int combination){
    int factone=1;
    int facttwo=1;
    combination=(item-combination)*combination;
    while (item)
    {
       factone*=item;
       item--;

    }
    // while (combination)
    // {
    //     facttwo*=combination;
    //     combination--;
    // }
    int ncr=factone/combination;
    return ncr;
    
}

// permutaton function
int checkrelation(int item,int combination){
    int factone=1;
    int facttwo=1;
    combination=(item-combination);
    while (item)
    {
       factone*=item;
       item--;

    }
    // while (combination)
    // {
    //     facttwo*=combination;
    //     combination--;
    // }
    int ncr=factone/combination;
    return ncr;
    
}

// fucntion for checking digit
bool checkdigit(int num,int digit){
   
    
    while (num)
    {
        if(num%10==digit){
            return true;
           
        }
        num/=10;
        
    }
     return false;
    
    

}


// function for checking prime factor
void checkprimefactor(int num){
    int i=2;
    cout<<endl<<"THE PRIME FACOTR OF "<<num<<"ARE : ";
    while (num)
    {
      if (num%i==0)
      {
        cout<<endl<<i<<" , ";
        num/=i;
        if (i>num)
        {
            break;
        }
        
      }
      else{
        i++;
      }
      
      
    }
    

}

int main(){
    int choice;
    while (choice)
    {
        cout<<endl<<endl<<"FOR AREA OF CIRCLE PRESS 1";
        cout<<endl<<"FOR CALCULATING INTEREST PRESS 2";
        cout<<endl<<"FOR CHECKING ODD AND EVEN NUMBER PRESS 3";
        cout<<endl<<"FOR PRINTING NATURAL NUMBER PRESS 4";
        cout<<endl<<"FOR PRINTING ODD NUMBER PRESS 5";
        cout<<endl<<"FOR CALCULATING FACTORIAL PRESS 6";
        cout<<endl<<"FOR CHECKING THE NUMBER OF COMBINATION PRESS 7";
        cout<<endl<<"FOR CHECKING THE NUMBER OF relation PRESS 8";
        cout<<endl<<"FOR CHECKING THE DIGIT PRESENT IN NUMBER PRESS 9";
        cout<<endl<<"FOR CHECKING THE PRIME FACTORS PRESS 10";
        cout<<endl<<"FOR EXIT PRESS 0";
        cout<<endl<<endl<<"ENTER YOUR CHOICE";
        cin>>choice;

        switch (choice)
        {
        case 1:
        int rad;
        cout<<endl<<endl<<"ENTER THE RADIUS OF CIRCLE";
        cin>>rad;
        cout<<endl<<"THE RADIUS OF  CORCLE IS   "<<findarea(rad)<<endl;
            break;


        case 2:
        int amount,time;
        float rate;
        cout<<endl<<"ENTER THE AMOUNT THAT YOU U GIVEN";
        cin>>amount;
        cout<<endl<<"ENTER THE INTERSET PERCENTAGE";
        cin>>rate;
         cout<<endl<<"ENTER THE TIME ";
         cin>>time;

         cout<<endl<<"YOUR INTEREST IS RS:"<<calcinterest(amount,time,rate);
         break;

         case 3:
         int num;
         cout<<endl<<"ENTER THE NUMBER THAT YOU WANT OT CHECK";
         cin>>num;
         if (checknum(num)%2==1)
         {
            cout<<endl<<"NUMBER IS ODD";}
            else
            {
                cout<<endl<<"NUMBER IS ODD";
            }
            break;
            
         case 4:
         int num1;
         cout<<endl<<"enter the limit of the numbers that u want to check";
         cin>>num1;
         natnum(num1);
         break;

         case 5:
         int num2;
         cout<<endl<<"enter the limit of the numbers that u want to check";
         cin>>num2;
         oddnum(num2);
         break;


         case 6:
         int num3;
         cout<<endl<<"enter NUMBER THAT U WANT TO CHECK FACTORAIAL";
         cin>>num3;
         cout<<endl<<"THE FACTORIAL OF"<<num3<<"IS"<<fact(num3);
         break;



         case 7:
         int item,combination;
         cout<<endl<<"enter the number of item";
         cin>>item;
         cout<<endl<<"enter the number of combination";
         cin>>combination;

         cout<<endl<<"total combiantion is"<<checkcombination(item,combination);
         break;

         case 8:
         int item1,combination1;
         cout<<endl<<"enter the number of item";
         cin>>item1;
         cout<<endl<<"enter the number of combination";
         cin>>combination1;

         cout<<endl<<"total combiantion is"<<checkrelation(item1,combination1);
         break;


         case 9:
         int numb,dig;
         cout<<endl<<"ENTER THE NUMBER";
         cin>>numb;
         cout<<endl<<"ENTER THE DIGIT";
         cin>>dig;
         if (checkdigit(numb,dig))
         {
            cout<<endl<<dig<<"IS PRESENT IN GIVEN NUMBER";
         }
         else
         {
             cout<<endl<<dig<<"IS NOT PRESENT IN GIVEN NUMBER";
         }
         break;


         case 10:
         int number;
         cout<<endl<<"ENTER THE NUMBER THAT U WANT TO CHECK PRIME FACTORS";
         cin>>number;
         checkprimefactor(number);
         break;
         


        case 0:
        exit(0);
        break;
        
        default:
        cout<<endl<<"INVALID CHOICE";
            break;
        }

    }
    
   


}