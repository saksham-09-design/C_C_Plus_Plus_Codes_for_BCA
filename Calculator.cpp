#include<iostream>
using namespace std;
int main(){
    float a, b;
    cout << "Enter Two Numbers" << endl;
    cin >> a >> b;
    cout << "1.Add" << endl;
    cout << "2.Sub" << endl;
    cout << "3.Div" << endl;
    cout << "4.Mul" << endl;
    int i;
    cout << "Enter Choice" << endl;
    cin >> i;
    switch(i){
        case 1: cout << "Ans=" << a+b;
            break;
        case 2: cout << "Ans=" << a-b;
            break;
        case 3: cout << "Ans=" << a/b;
            break;
        case 4: cout << "Ans=" << a*b;
            break;
    }
}