#include<iostream>
using namespace std;
class friend_fun{
    int a;
    public:
    void geta(){
        cout << "Enter a Number";
        cin >> a;
    }
    friend void show(friend_fun);
};
void show(friend_fun f2){
    cout << "Entered Number is " << f2.a;
}
int main(){
    friend_fun f1;
    f1.geta();
    show(f1);
}