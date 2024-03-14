#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    long double i;
    char start;
    cout << "Want to Start?";
    cin >> start;
    if(start=='Y'||start=='y'){
        for(i=0;i<1000000001;i++)
            cout << i << endl;
    }
    else
        cout << "Wrong choice";
    getch();
}