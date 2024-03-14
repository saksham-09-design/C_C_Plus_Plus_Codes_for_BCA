#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
    ofstream ob1;
    ob1.open("Student.txt");
    if(!ob1){
        cout << "Error Opening File!";
        getch();
        exit(0);
    }
    int rno;
    char name[30];
    cout << "Enter the Name" << endl;
    cin >> name;
    cout << "Enter the Roll Number" << endl;
    cin >> rno;
    ob1 << name ;
    ob1 << "\t";
    ob1 << rno;
    ob1.close();
    cout << "File Successfully created";
    char n_name[30];
    int rollno;
    cout << "Displaying the contents of file:" << endl;
    ifstream ob2;
    ob2.open("student.txt");
    if(!ob2){
        cout << "Error Opening File";
        getch();
        exit(0);
    }
    ob2 >> n_name;
    ob2 >> rollno;
    cout << "The name is " << name << endl;
    cout << "The roll no. is " << rno;
}