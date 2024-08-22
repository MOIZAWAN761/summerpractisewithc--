#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
    int age;
    char name[20];
    long int salary;
};

// function for taking input

employee input(){
    employee emp1;
    cout<<"enter employee age";
    cin>>emp1.age;
    cout<<"enter employee name";
    cin.ignore();
    cin.getline(emp1.name,20);
    cout<<"enter employee salary";
    cin>>emp1.salary;

    return emp1;
}

void display(employee emp){
    cout<<endl<<emp.age;
    cout<<endl<<emp.name;
    cout<<endl<<emp.salary;
}

long int find_high_sal(employee emp[],int n){
    long int max_sal=000;
    for (int i = 0; i < n; i++)
    {
        if (emp[i].salary>max_sal)
        {
            max_sal=emp[i].salary;
        }
        
    }
    return max_sal;
    
}

void sort(employee emp[],int n){
    int t,i,j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if (emp[j].salary>emp[j+1].salary)
            {
               t=emp[j].salary;
               emp[j].salary=emp[j+1].salary;
               emp[j+1].salary=t;
            
            }
            
        }
        
    }



    

}


void sort_name(employee emp[],int n){
    int i,j;
    char t[20];
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if (strcmp(emp[j].name,emp[j+1].name)>0)
            {
              strcpy( t,emp[j].name);
               strcpy(emp[j].name,emp[j+1].name);
              strcpy( emp[j+1].name,t);
            
            }
            
        }
        
        
    }



    

}

int main(){
    struct employee emp[10];
    cout<<"enter the data of students";
    for (int i = 0; i < 10; i++)
    {
        emp[i]=input();
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<endl<<endl;
        display(emp[i]);
    }
    

    cout<<endl<<find_high_sal(emp,10);

    sort(emp,10);
    
    cout<<endl<<"printing after sorting";
    for (int i = 0; i < 10; i++)
    {
        cout<<endl<<endl;
        display(emp[i]);
    }


sort_name(emp,10);
    
    cout<<endl<<"printing after sorting";
    for (int i = 0; i < 10; i++)
    {
        cout<<endl<<endl;
        display(emp[i]);
    }

    // cout<<"enter employee data";
    // emp1=input();
    // display(emp1);

}
