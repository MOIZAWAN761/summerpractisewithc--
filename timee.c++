#include<iostream>
#include<time.h>

using namespace std;

void showtime(){
    time_t s;
    struct tm *currenttime;
    s=time(NULL);
    currenttime=localtime(&s);
    cout<<currenttime->tm_hour<<":"<<currenttime->tm_min<<":"<<currenttime->tm_sec;
    cout<<endl<<currenttime->tm_mday<<":"<<currenttime->tm_mon<<":"<<currenttime->tm_year;

}

int main(){
    showtime();
}