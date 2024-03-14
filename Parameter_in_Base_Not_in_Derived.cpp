#include<iostream>
using namespace std;
class base{
    public:
    base(int a){
        cout << "Base Class Constructor with Parameters: " << a << endl;
    }
};
class derived: public base{
    public:
    derived(int b): base (b){
        cout << "Derive Class Constructor without Parameters" << endl;
    }
};
int main(){
    derived d1(10);
}