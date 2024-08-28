#include<iostream>
using namespace std;

class parent{
    protected:
    int a;
    int b;
    public:
   parent(int val1,int val2){
    cout<<endl<<"parent constructor called";
    a=val1;
    b=val2;
   }
   parent():a(2),b(3){
    cout<<endl<<"parent constructor called";
   }
};

class child:private parent{
    private:
    int c;
    int d;
    public:
    child():parent(10,15){
         cout<<endl<<"child constructor called";
    }
  void display() {
    cout<<"val of a"<<parent::a<<endl<<"val of b"<<parent::b<<endl<<"val of c"<<c<<endl<<"val of d"<<d<<endl;
  }
};

int main(){
    child obj;
    obj.display();
}