#include<iostream>
using namespace std;
class one{
    public:
    void show(){
        cout << "Inline"<< endl;
    }
    void output();
};
inline void one::output(){
    cout << "Inline_2";
}
int main(){
    one o1;
    o1.show();
    o1.output();    
}