#include<iostream>
#include<conio.h>
using namespace std;
class rational{
    int num, den;
    public:
    void getdata(){
        cout << "Enter the Numerator" << endl;
        cin >> num;
        cout << "Enter the Denominator" << endl;
        cin >> den;
    }
    void show(){
        cout << num << "/" << den;
    }
    rational operator*(rational rr1){
        rational temp;
        temp.num = num*rr1.num;
        temp.den = den*rr1.den;
        return temp;
    }
};
int main(){
    rational r1, r2, r3;
    r1.getdata();
    r2.getdata();
    r3 = r1 * r2;
    r3.show();
    getch();
}