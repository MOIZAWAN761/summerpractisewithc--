#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;

    public:
    void set_value(int a,int b){
        this->real=a;
        this->img=b;
    }

    void add(complex& obj){
        this->real+=obj.real;
        this->img+=obj.img;
    }
    void mul(complex& obj){
        this->real*=obj.real;
        this->img*=obj.img;
    }
    void div(complex& obj){
        this->real/=obj.real;
        this->img/=obj.img;
    }

    void showval(){
        cout<<"the value of real mamber"<<this->real;
        cout<<"the value of imaginary mamber"<<this->img;
    }
};


class time
{
private:
 int hour;
 int min;
 int sec;   
public:
 void setvalue(int hr,int min,int sec){
    this->hour=hr;
    this->min=min;
    this->sec=sec;
 }

 void dispaly(){
    cout<<endl<<hour<<" hr "<<min<<" min "<<sec<<" sec ";
 }
};



class date
{
private:
 int date;
 int month;
 int year;   
public:
 void setvalue(int d,int m,int y){
    this->date=d;
    this->month=m;
    this->year=y;
 }
 void getvalue(){
    cout<<"enter the date";
    cin>>this->date;
    cout<<"enter the month";
    cin>>this->month;
    cout<<"enter the year";
    cin>>this->year;
 }

 void dispaly(){
    cout<<endl<<"d="<<date<<" m="<<month<<" y="<<year;
 }

 void showdateformat2(){
//     switch (month)
//     {
//     case 1:
//     cout<<endl<<"d="<<date<<" m="<<"jan"<<" y="<<year;
//         break;
    
//     case 2:
//     cout<<endl<<"d="<<date<<" m="<<"feb"<<" y="<<year;
//         break;
    
//     case 3:
//     cout<<endl<<"d="<<date<<" m="<<"mar"<<" y="<<year;
//         break;
    
//     case 4:
//     cout<<endl<<"d="<<date<<" m="<<"apr"<<" y="<<year;
//         break;
    
//     case 5:
//     cout<<endl<<"d="<<date<<" m="<<"may"<<" y="<<year;
    
//         break;
    
//     case 6:
//     cout<<endl<<"d="<<date<<" m="<<"june"<<" y="<<year;
//         break;
    
//     case 7:
//     cout<<endl<<"d="<<date<<" m="<<"july"<<" y="<<year;
//         break;
    
//     case 8:
//     cout<<endl<<"d="<<date<<" m="<<"aug"<<" y="<<year;
    
//         break;
    
//     case 9:
//     cout<<endl<<"d="<<date<<" m="<<"sep"<<" y="<<year;
    
//         break;
    
//     case 10:
//     cout<<endl<<"d="<<date<<" m="<<"oct"<<" y="<<year;
//         break;
    
//     case 11:
//     cout<<endl<<"d="<<date<<" m="<<"nov"<<" y="<<year;
//         break;
    
//     case 12:
//     cout<<endl<<"d="<<date<<" m="<<"dec"<<" y="<<year;
//         break;
    
//     default:
//     cout<<endl<<"invlaid choice";
//         break;
//     }
//  }

  char* months[]={
    "jan",
    "feb",
    "mar",
    "apr",
    "may",
    "jun",
    "jul",
    "aug",
    "sep",
    "oct",
    "nov",
    "dec",
  };
  cout<<endl<<"d="<<date<<" m="<<months[month-1]<<" y="<<year;
  }
};

int main(){
    complex obj1;
    obj1.set_value(10,15);
    obj1.showval();

    time t1;
    t1.setvalue(3,45,20);
    t1.dispaly();

    date d1;
    d1.setvalue(14,8,1947);
    d1.showdateformat2();

    date d2;
    d2.getvalue();
    d2.dispaly();


}