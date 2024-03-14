#include<iostream>
using namespace std;
class two;
class one{
    int a;
    public:
    void geta(){
        cout << "Enter a Number" << endl;
        cin >> a;
    }
    friend void cal_show(one, two);
};
class two{
    int b;
    public:
    void getb(){
        cout << "Enter another Number" << endl;
        cin >> b;
    }
    friend void cal_show(one, two);
};
void cal_show(one oo1, two tt1){
    int total=0;
    total = oo1.a + tt1.b;
    cout << "The sum is " << total;
}
int main(){
    one o1;
    two t1;
    o1.geta();
    t1.getb();
    cal_show(o1,t1);
}