#include<iostream>
using namespace std;
class Number{
    float num;
    public:
    void get_num(){
        cout << "Enter a Number" << endl;
        cin >> num;
    }
    Number compare(Number nn2){
        if(num>nn2.num)
            return *this;
        else 
            return nn2;    
    }
    void show(){
        cout << "The Greater Number is: " << num << endl;
    }
};
int main(){
    Number n1,n2, n3;
    n1.get_num();
    n2.get_num();
    n3 = n1.compare(n2);
    n3.show();
}