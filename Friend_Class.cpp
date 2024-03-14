#include<iostream>
using namespace std;
class one{
    int a;
    public:
    void geta(){
        cout << "Enter a" << endl;
        cin >> a;
    }
    friend class two;
};
class two{
    public:
    void printa(one oo1){
        cout << oo1.a << "Entered";
    }
};
int main(){
    one o1;
    two t1;
    o1.geta();
    t1.printa(o1);
}