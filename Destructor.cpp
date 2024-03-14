#include<iostream>
#include<conio.h>
using namespace std;
class one{
    int *a;
    public:
    one(int n){
        a = new int[n];
        cout << "Constructor array a created";
    }
    ~one(){
        delete []a;
        cout << "Destructor Array a Destroyed";
    }
};
int main(){
    {
        one o1(5);
    }
    getch();
}