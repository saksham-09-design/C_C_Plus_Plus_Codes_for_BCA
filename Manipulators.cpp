#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char name[10] = "Saksham";
    int rno = 1234;
    cout << setw(15) << setfill('@') << name << endl;
    cout << hex << rno;
}