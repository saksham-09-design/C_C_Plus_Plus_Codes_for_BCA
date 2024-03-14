#include<iostream>
using namespace std;
class num{
    int a, b;
    public:
    void getdata(){
        cout << "Enter a and b" << endl;
        cin >> a >> b;
    }
    void operator++(){
        a = a+1;
        b = b+1;
    }
    void show(){
        cout << "The Incremented values are: " << a << "\n" << b;
    }
};
int main(){
    num n1;
    n1.getdata();
    ++n1;
    n1.show();
}