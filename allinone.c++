#include<iostream>
using namespace std;

// functions
void month(){
    int num;
    cout<<"enter a month number";
    cin>>num;
    switch (num)
    {
    case 1:
        cout<<endl<<"31 days in this month";
        break;
    case 2:
        cout<<endl<<"29 days in this month";
        break;
    case 3:
        cout<<endl<<"31 days in this month";
        break;
    case 4:
        cout<<endl<<"30 days in this month";
        break;
    case 5:
        cout<<endl<<"31 days in this month";
        break;
    case 6:
        cout<<endl<<"30 days in this month";
        break;
    case 7:
        cout<<endl<<"31 days in this month";
        break;
    case 8:
        cout<<endl<<"31 days in this month";
        break;
    case 9:
        cout<<endl<<"30 days in this month";
        break;
    case 10:
        cout<<endl<<"31 days in this month";
        break;
    case 11:
        cout<<endl<<"30 days in this month";
        break;
    case 12:
        cout<<endl<<"31 days in this month";
        break;
    
    default:
    cout<<endl<<"invalid choice";
        break;
    }
}


// function2

void calculaotr(){
    int choice;
    
        cout<<endl<<"for addition press 1";
        cout<<endl<<"for subtraction press 2";
        cout<<endl<<"for multiplication press 3";
        cout<<endl<<"for divison press 4";
        cout<<endl<<"for exit press 0";


        cout<<endl<<"enter your choice";
        cin>>choice;
        int num1,num2;
        switch (choice)
        {
        case 1 :
         
         cout<<endl<<"enter two numbers";
         cin>>num1>>num2;
         cout<<endl<<num1+num2;
            break;
        case 2 :
         
         cout<<endl<<"enter two numbers";
         cin>>num1>>num2;
         cout<<endl<<num1-num2;

            break;
        case 3 :
         
         cout<<endl<<"enter two numbers";
         cin>>num1>>num2;
         cout<<endl<<num1*num2;
            break;
        case 4 :
         
         cout<<endl<<"enter two numbers";
         cin>>num1>>num2;
         cout<<endl<<num1/num2;
            break;
        case 0 :
        exit(0);
           
        
        
        default:
        cout<<endl<<"invalid choice";
            break;
        }

        
    
    
}

// days function

void days(){
    int choice;
    cout<<"enter a day number";
    cin>>choice;

    switch (choice)
    {
    case 1:
    cout<<endl<<"have a nice monday";
        break;
    case 2:
    cout<<endl<<"nice mangalwar";
        break;
    case 3:
    cout<<endl<<"budhwar mubarak";
        break;
    case 4:
    cout<<endl<<"shanivar  mubarak";
        break;
    case 5:
    cout<<endl<<"jumma  mubarak";
        break;
    case 6:
    cout<<endl<<"enjoy party";
        break;
    case 7:
    cout<<endl<<"happy holiday";
        break;

    case 0:
    exit(0);
        

    
    default:
    cout<<endl<<"invalid choice";
        break;
    }
}


// checking triangle

void checktriangle(){
    int s1,s2,s3,choice=1;
    while (1)
    {
        cout<<"for iscosclece triangel press 1";
        cout<<endl<<"for right angle triangel press 2";
        cout<<"for equilateral triangel press 3";
        cout<<"for exit press 0";
        cout<<endl<<"enter your choice";
        cin>>choice;

        switch (choice)
        {
        case 1:
        cout<<endl<<"enter the sides of triangle";
        cin>>s1>>s2>>s3;
        if (s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
        {
           if (s1==s2 || s1==s3 || s3==s2)
           {
            cout<<endl<<"triagle is isoscelce";
           }
           
        }
        else
        {
            cout<<endl<<"not an isoscelse triangle";
        }
        
        
            break;
        case 2:
        cout<<endl<<"enter the sides of triangle";
        cin>>s1>>s2>>s3;
        if (s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
        if (s1*s1+s2*s2 == s3*s3 && s1*s1+s3*s3 == s2*s2 && s3*s3+s2*s2 == s1*s1)
        {
            cout<<endl<<"angle is right angle triangle";
        }}
        else
        {
            cout<<endl<<"not a right angle triangle";
        }
        
        

            break;
        case 3:
        cout<<endl<<"enter the sides of triangle";
        cin>>s1>>s2>>s3;
         if (s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
        if (s1==s2 && s1==s3 && s2==s3)
        {
            cout<<endl<<"triangle is equilateral";
        }}
        else
        {
            cout<<endl<<"triangle is not equilateral";
            
        }
        
        

            break;
        case 0:
        exit(0);
            break;
        
        default:
        cout<<endl<<"invalid choice";
            break;
        }
    }
    
}

// function for checking grade

void checkgrade(){
    int marks;
    cout<<endl<<"enter your marks";
    cin>>marks;
         
    switch (marks)
    {
    case 90 ... 100:
    cout<<endl<<"your grade is a+";

        break;
    case 80 ... 89 :
    cout<<endl<<"your grade is b";
        break;
    case 70 ... 79:
    cout<<endl<<"your grade is c";
        break;
    case 60 ... 69:
    cout<<endl<<"your grade is d";
        break;
    case 50 ... 59:
    cout<<endl<<"your grade is e";
        break;
    case 0 ... 49:
    cout<<endl<<"your grade is f";
        break;
    
    default:
    cout<<endl<<"invalid choice5";
        break;
    }
}


int main(){
    int choice;
    do
    {
        cout<<endl<<"for month press 1";
        cout<<endl<<"for calculator press 2";
        cout<<endl<<"for days press 3";
        cout<<endl<<"for checking triangle press 4";
        cout<<endl<<"for checking grade press 5";
        cout<<endl<<"for exit press 0 ";

    cout<<"enter your choice";
    cin>>choice;

    switch (choice)
    {
        case 0:
        exit (0);
    case 1:
        month();
        break;

        case 2:
        calculaotr();
        break;
        case 3:
        days();
        break;
        case 4:
        checktriangle();
        break;
        case 5:
        checkgrade();
        break;
    
    default:
    cout<<"invalid choice"<<endl;
        break;
    }
        
    } while (choice);
    
    
    
}