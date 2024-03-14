#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout << "Base Constructor" << endl;
    }
    virtual ~base(){
        cout << "Base Desturctor" << endl;
    }
};
class derived: public base{
    int *a;
    public:
    derived(){
        cout << "Derived Consturctor" << endl;
        a = new int[5];
        cout << "10 Bytes allocated to a" << endl;
    }
    ~derived(){
        cout << "Derived Destructor" << endl;
        delete a;
        cout << "10 Byted Deallocated" << endl;
    }
};
int main(){
    base *b1;
    b1 = new derived;
    delete b1;
}