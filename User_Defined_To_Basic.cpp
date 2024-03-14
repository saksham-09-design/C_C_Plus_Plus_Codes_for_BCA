#include<iostream>
using namespace std;
class time{
    int hh, mm;
    public:
    void get_time(){
        cout << "Enter Time HH:MM format" << endl;
        cin >> hh >> mm; 
    }
    void show(){
        cout << "Time = " << hh << ":" << mm << endl;
    }
    operator int(){
        int t;
        t = hh * 60;
        t = t + mm;
        return t;
    }
};
int main(){
    int min;
    time t1;
    t1.get_time();
    min = t1;
    t1.show();
    cout << "The time in Minutes is: " << min;
}