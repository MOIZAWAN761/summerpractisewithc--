#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class mystring
{
private:
    char *s;
    int len;
protected:
    char *inputstring(){
        char *p=NULL,*q=NULL;
        int size=1,i;
        char ch;
        p=new char[size];
        p[0]='\0';
         cout<<endl<<"enter a character";
        while (1)
        {
           
            ch=getch();
            if (ch=='\r')
            {
                break;
            }
            q=new char[size+1];
            for ( i = 0; i < size; i++)
            {
                q[i]=p[i];
            }
            q[i-1]=ch;
            q[i]='\0';
            
            delete [] p;
            size++;
            p=new char[size];

            strcpy(p,q);
            delete[] q;


            
            
        }
        return p;
    }

    int getlen(char arr[]){
        int i;
        for (i = 0; arr[i]; i++);
        return i;
        
    }

    public:
    mystring(){s=NULL;len=0;}

    void setstring(){
        if (s!=NULL)
        {
            delete s;
            len=0;
            
        }
        s=inputstring();
        len=getlen(s);
        
    }
    void setstring(char arr[]){
        if (s!=NULL)
        {
            delete s;
            len=0;
            
        }
        len=getlen(arr);
        s=new char[len+1];
        strcpy(s,arr);
    
        
    }
   
   void display(){
    cout<<endl<<s<<endl<<"the length of string"<<len;
   }

    ~mystring(){
        delete s;
    }
};

int main(){
    mystring obj1;
    char str[]="moiz awan";
    obj1.setstring(str);
    obj1.display();


    mystring obj2;
    obj2.setstring();
    obj2.display();
}
