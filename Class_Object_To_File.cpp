#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
class student{
    char name[30], standard[20];
    int rollno;
    public:
    void get_st(){
        cout << "Enter the Name of Student" << endl;
        cin >> name;
        cout << "Enter the Class of Student" << endl;
        cin >> standard;
        cout << "Enter the Roll No of Student" << endl;
        cin >> rollno;
    }
    void show(){
        cout << "Name: " << name << endl;
        cout << "Class: " << standard << endl;
        cout << "Rollno: " << rollno << endl;
    }
};
int main(){
    student s1,s2;
    s1.get_st();
    ofstream ob1;
    ob1.open("student.txt", ios::binary);
    if(!ob1){
        cout << "Error Opening Output file" << endl;
        getch();
        exit(0);
    }
    cout << "Writing contents to File" << endl;
    getch();
    ob1.write((char *)&s1, sizeof(s1));
    ob1.close();
    cout << "Want to Read contents From file?" << endl;
    char c;
    cin >> c;
    if(c=='y'||c=='Y'){
        ifstream ob2;
        ob2.open("student.txt");
        if(!ob2){
            cout << "Error Opening Input File" << endl;
            getch();
            exit(0);
        }
        ob2.read((char *)&s2, sizeof(s2));
        ob2.close();
        s2.show();
        getch();
    }
    getch();
}