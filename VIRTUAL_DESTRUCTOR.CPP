#include<iostream>
using namespace std;
class object{
    public:
    object(){
        cout << "Base Constructor" << endl;
    }
    virtual ~object(){
        cout << "Base Destructor" << endl;
    }
};
class derive: public object{
    int *a;
    public:
    derive(){
        cout << "Derived Constructor" << endl;
        a = new int[5];
    }
    ~derive(){
        cout << "Derived Destructor" << endl;
        delete a;
    }
};
int main(){
    object *o1;
    o1 = new derive;
    delete o1;
}