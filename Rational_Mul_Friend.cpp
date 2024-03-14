#include<iostream>
using namespace std;
class rational{
    float p,q;
    public:
    void getdata(){
        cin >> p >> q;
    }
    void show(){
        cout << p << endl << "-" << endl << q;
    }
    friend rational operator*(rational, rational);
};
rational operator*(rational rr1, rational rr2){
    rational temp;
    temp.p = rr1.p * rr2.p;
    temp.q = rr1.q * rr2.q;
    return temp;
}
int main(){
    rational r1, r2, r3;
    r1.getdata();
    r2.getdata();
    r3 = r1*r2;
    r3.show();
}