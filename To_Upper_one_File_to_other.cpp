#include<iostream>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ofstream ob1("file.txt");
    if(!ob1){
        cout << "Output File Can't Be Opened";
        getch();
        exit(0);
    }
    cout << "Enter Text" << endl;
    cin.get(ch);
    while(ch!='\n'){
        ob1.put(ch);
        cin.get(ch);
    }
    ob1.close();
    ifstream ob2("file.txt");
    if(!ob1){
        cout << "Input File Can't Be Opened";
        getch();
        exit(0);
    }
    ofstream ob3("upper.txt");
    if(!ob1){
        cout << "Destination File Can't Be Opened";
        getch();
        exit(0);
    }
    while(ob2.eof()==0){
        ob2.get(ch);
        ob3.put(toupper(ch));
    }
    ob2.close();
    ob3.close();
    cout << "Data Converted to Uppercase" << endl;
    getch();
}