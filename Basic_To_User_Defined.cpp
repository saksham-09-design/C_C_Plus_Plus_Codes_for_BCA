#include<iostream>
using namespace std;
class rupee{
    int hh,mm;
    public:
    rupee(int n){
        hh = n / 60;
        mm = n % 60;
    }
    void show(){
        cout << hh << ":" << mm;
    }
};
int main(){
    int min;
    cout << "Enter The Time in Minutes"<< endl;
    cin >> min;
    rupee r1=min;
    r1.show();
}