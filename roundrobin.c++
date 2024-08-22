#include<iostream>
using namespace std;

void update_score_board(int p1,int p2,int result,int chess[4][4]){
    chess[p1][p2]=result;
    chess[p2][p1]=result-2;
}

int main(){
    int chess[4][4]={0};
}