#include<iostream>
using namespace std;
class rect{
    float l, b, a;
    public:
    rect(rect &r2){
        l = r2.l;
        b = r2.b;
    }
    rect(int ln, int br){
        l = ln;
        b = br;
    }
    void calarea(){
        a = l*b;
    }
    void show(){
        cout << "Area:" << a;
    }
};
int main(){
    rect r(10,20), r1(r);
    r.calarea();
    r1.calarea();
    r.show();
    r1.show();
}