#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class student{
    int rno;
    char name[20];
    float marks;
    public:
    void getdata(){
        cout << "Enter Name" << endl;
        cin >> name;
        cout << "Enter Roll Number" << endl;
        cin >> rno;
        cout << "Enter Marks" << endl;
        cin >> marks;
    }
    void show(){
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rno << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main(){
    student s1, s2;
    s1.getdata();
    fstream ob1;
    ob1.open("student.txt", ios::out|ios::binary|ios::trunc);
    if(!ob1){
        cout << "Error Opening file";
        getch();
        exit(0);
    }
    ob1.write((char *)&s1, sizeof(s1));
    ob1.close();
    cout << "Data Written Successfull" << endl;
    cout << "Press a Key to read data" << endl;
    getch();
    ob1.open("student.txt", ios::in|ios::binary);
    if(!ob1){
        cout << "Error Opening file";
        getch();
        exit(0);
    }
    ob1.read((char *)&s2, sizeof(s2));
    cout << "Data Read Successfull, Press key to Show data" << endl;
    getch();
    cout << "Data is as follows:" << endl;
    s2.show();
}