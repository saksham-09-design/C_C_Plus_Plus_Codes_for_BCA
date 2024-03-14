#include<iostream>
using namespace std;
class num{
    int a, b;
    public:
    void getdata(){
        cout << "Enter a and b" << endl;
        cin >> a >> b;
    }
    friend num operator++(num);
    void show(){
        cout << "The Incremented values are: " << a << "\n" << b;
    }
};
num operator++(num n1){
    n1.a = n1.a+1;
    n1.b = n1.b+1;
    return n1;
}
int main(){
    num n1, n2;
    n1.getdata();
    n2 = ++n1;
    n2.show();
}