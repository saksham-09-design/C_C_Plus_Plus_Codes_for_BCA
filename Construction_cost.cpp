#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
class cement{
    protected:
    double c_bag;
    public:
    void getcement(){
        cout << "Enter the Number of Cement Bags" << endl;
        cin >> c_bag;
    }
};
class steel{
    protected:
    double s_ton;
    public:
    void getsteel(){
        cout << "Enter the Weight of Steel (in Tons)" << endl;
        cin >> s_ton;
    }
};
class wood{
    protected:
    double w_cubicfeet;
    public:
        void getwood(){
            cout << "Enter the Size of Wood (in Cubic Feet)" << endl;
            cin >> w_cubicfeet;
        }
};
class building: public cement, public steel, public wood{
    double cost;
    public:
    void calculate(){
        cost = (c_bag*150)+(w_cubicfeet*1500)+(s_ton*2800);
    }
    void show(){
        cout << "The Bill is as Under: " << endl;
        cout << "Cement: " << (c_bag*150) << endl;
        cout << "Steel:  " << (s_ton*28000) << endl;
        cout << "Wood:   " << (w_cubicfeet*1500) << endl;
        for(int i=0;i<21;i++)
            cout << "-";
        cout << endl;
        cout << "Total: " << cost << endl;;
        for(int i=0;i<21;i++)
            cout << "-";
        char c;
        cout << endl << "Want to Save This bill?" << endl;
        cin >> c;
        if(c=='y'||c=='Y'){
            ofstream ob1;
            char f_name[30];
            cout << "Enter the Name of File to be created with extension (ie .txt)" << endl;
            cin >> f_name;
            ob1.open(f_name);
            if(!ob1){
                cout << "Error Opening File!" << endl;
                getch();
                exit(0);
            }
        ob1 << "The Bill is as Under: " << endl;
        ob1 << "Cement: " << (c_bag*150) << endl;
        ob1 << "Steel:  " << (s_ton*28000) << endl;
        ob1 << "Wood:   " << (w_cubicfeet*1500) << endl;
        for(int i=0;i<21;i++)
            ob1 << "-";
        ob1 << endl;
        ob1 << "Total: " << cost << endl;;
        for(int i=0;i<21;i++)
            ob1 << "-";
        cout << "Bill Saved with file name:" << f_name << endl;
        }
    }
};
int main(){
    start:
    building b1;
    b1.getcement();
    b1.getsteel();
    b1.getwood();
    b1.calculate();
    b1.show();
    getch();
    char c;
    cout << "Want to calculate More?" << endl;
    cin >> c;
    if(c=='y'||c=='Y')
    goto start;    
}