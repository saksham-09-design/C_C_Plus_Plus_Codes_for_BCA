#define dol_val 82.10;
#include<iostream>
using namespace std;
class dollar{
    double dol;
    public:
    void get_dol(){
        cout << "Enter Amount in Dollar" << endl;
        cin >> dol;
    }
    double ret_dol(){
        return dol;
    }
    void show(){
        cout << "The Amount in Dollar: " << dol << endl;
    }
};
class rupee{
    double rs;
    public:
    rupee(dollar d1){
        rs = d1.ret_dol();
        rs = rs * dol_val;
    }
    void show(){
        cout << "The Amount in Rupee: " << rs << endl;
    }
};
int main(){
    dollar d1;
    d1.get_dol();
    rupee r1=d1;
    r1.show();
}
