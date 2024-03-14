#include<iostream>
using namespace std;
int swap(int &, int &);
int main(){
    int a, b;
    cout << "Enter Two Numbers";
    cin >> a >> b;
    swap(a,b);
    cout << a << endl << b;
    return 0;
}
int swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}