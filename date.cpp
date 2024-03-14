#include<iostream>
#include<conio.h>
using namespace std;
class date{
    int dd, mm, yy;
    public:
    void getdate(){
        cout << "Enter Date in DD/MM/YY Format" << endl;
        cin >> dd >> mm >> yy;
    }
    void show(){
        cout << "The added date is = " << dd << "/" << mm << "/" << yy << endl;
    }
    date operator+(date dd2){
        date temp;
        temp.dd = dd + dd2.dd;
        temp.mm = mm + dd2.mm;
        temp.yy = yy + dd2.yy;
        if(temp.dd>30)
            {
                temp.mm++;
                temp.dd = temp.dd - 30;
            }
            if(temp.mm>12)
            {
                temp.yy++;
                temp.mm = temp.mm - 12;
            }
            return temp;
    }
};
int main(){
    date d1, d2, d3;
    d1.getdate();
    d2.getdate();
    d3 = d1 + d2;
    d3.show();
    getch();
}