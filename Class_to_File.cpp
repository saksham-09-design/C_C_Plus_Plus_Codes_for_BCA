#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class student{
    char name[30];
    int rno;
    public:
    void get_st(){
        cout << "Enter the Name" << endl;
        cin >> name;
        cout << "Enter the Roll No." << endl;
        cin >> rno;
    }
    void show(){
        cout << "Name: " << name << endl;
        cout << "Roll NO: " << rno << endl;
    }
    void clear(){
        strcpy(name,"");
        rno = 0;
    }
};
int main(){
    student s1,s2;
    s1.get_st();
    ofstream ob1("Student.txt", ios::out|ios::binary|ios::trunc);
    ob1.write((char *)&s1,sizeof(s1));
    ob1.close();
    s1.clear();  //for clearing values of object
    ifstream ob2("Student.txt", ios::binary);
    ob2.read((char *)&s2,sizeof(s2));
    ob2.close();
    s2.show();
}