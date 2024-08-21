#include<iostream>
using namespace std;

class testresult{
    private:
    int roll_no;
    int right;
    int wrong;
    int net_score;
    static int rigth_weightage;
    static int wrong_weightage;

    public:
    void set_rollno(int r){
        roll_no=r;
    }
    void set_right(int rig){
        right=rig;
    }
    void set_wrong(int w){
        wrong=w;
    }
    void set_netscore(int n){
        net_score=n;
    }



    void get(){
        cout<<"enter the rollno";
        cin>>roll_no;
        cout<<"enter the right score";

    }

    public:
    int get_rollno(){return roll_no;}
    int get_right(){return right;}
    int get_wrong(){return wrong;}
    int get_netscore(){return net_score;}

    static void set_right_weightage(int r){rigth_weightage=r;}
    static void set_wrong_weightage(int r){wrong_weightage=r;}


    static int get_right_weightage(){return rigth_weightage;}
    static int get_wrong_weightage(){return wrong_weightage;}
    

    };
    int testresult::rigth_weightage=3;
    int testresult::wrong_weightage=1;

    void set_test_result(testresult &tr,int a,int b, int c){
        tr.set_rollno(a);
        tr.set_right(b);
        tr.set_wrong(c);
        tr.set_netscore(b*tr.get_right_weightage()-c*tr.get_wrong_weightage());
    }

    void sort_result(testresult tr[],int size){
        testresult temp;
        int i,j;
        for (int i = 0; i < size-1; i++)
        {
            for (int j= 0; j< size-1-i; j++)
            {
                if (tr[j].get_netscore()>tr[j+1].get_netscore())
                {
                    temp=tr[j];
                    tr[j]=tr[j+1];
                    tr[j+1]=temp;
                }
                
            }
            
        }
        
    }


    void print_result(testresult tr){
        cout<<endl<<tr.get_rollno()<<endl<<tr.get_right()<<endl<<tr.get_wrong()<<endl<<tr.get_netscore()<<endl<<endl;
    }

int main(){
    testresult obj[5];
    set_test_result(obj[0],100,70,30);
    set_test_result(obj[1],101,76,24);
    set_test_result(obj[2],103,69,31);
    set_test_result(obj[3],104,65,35);
    set_test_result(obj[4],105,80,20);

    sort_result(obj,5);
    for (int i = 0; i < 5; i++)
    {
        print_result(obj[i]);
    }
    
    
}
