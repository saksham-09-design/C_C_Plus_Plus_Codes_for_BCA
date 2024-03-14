#include<iostream>
#include<conio.h>
using namespace std;
class time{
    int hh,mm;
    public:
    void gettime(){
        cout << "Enter Time in hh:mm format" << endl;
        cin >> hh >> mm;
    }
    void show(){
        cout << "The added time is = " << hh << ":" << mm;
    }
    time operator+ (time tt2){
        time temp;
        temp.hh = hh+tt2.hh;
        temp.mm = mm+tt2.mm;
        if(temp.mm>60)
        {
            temp.mm = temp.mm-60;
            temp.hh++;
        }
        return temp;
    }
};
int main(){
    time t1, t2, t3;
    t1.gettime();
    t2.gettime();
    t3 = t1+t2;
    t3.show();
    getch();
}