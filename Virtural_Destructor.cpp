#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout << "Base Constructor" << endl;
    }
    virtual ~base(){
        cout << "Base Destructor" << endl;
    }
};
class derived: public base{
    int *a;
    public:
    derived(){
        a = new int[5];
        cout << "Derived Constructor" << endl;
    }
    ~derived(){
        delete a;
        cout << "Derived Constructor" << endl;
    }
};
int main(){
    base *b;
    b = new derived();
    delete b;
}