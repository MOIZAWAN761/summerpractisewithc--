#include<iostream>
using namespace std;

class a{
    public:
    int a;
    void fun1(){cout<<"fun1 called";}
};
class b1:virtual public a{
    public:
    int b1;
    void fun2(){cout<<"fun2 called";}
    void fun3(){cout<<"fun3 called";}
};
class b2:virtual public a{
    public:
    int b2;
    void fun3(){cout<<"fun3 called";}
};
class c:public b1,public b2{
    public:
    int c;
    void fun4( ){cout<<"fun4 called";}
};

int main(){
    c obj;
    obj.fun1();
}