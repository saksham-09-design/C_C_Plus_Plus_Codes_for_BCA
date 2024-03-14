#define dol_val 82.10;
#include<iostream>
using namespace std;
class rupee{
    double rs;
    public:
    rupee(double r1){
        rs = r1;
    }
    rupee(){
    
    }
    void show(){
        cout << "Amount in Rupee: " << rs << endl;
    }
};
class dollar{
    double dol;
    public:
    void get_dollar(){
        cout << "Enter Amount in Dollar" << endl;
        cin >> dol;
    }
    void show_dol(){
        cout << "The Amount in Dollar: " << dol << endl;
    }
    operator rupee(){
        double rs1;
        rs1 = dol * dol_val;
        return (rupee(rs1));
    }
};
int main(){
    dollar d1;
    d1.get_dollar();
    rupee r1;
    r1 = d1;
    r1.show();
    d1.show_dol();
}