#include<iostream>
using namespace std;
class human{
    char name[30];
    public:
    class date{
        int dd, mm, yy;
        public:
        void read(){
            cin >> dd >> mm >> yy;
        }
        void show(){
            cout << "DOB:" << dd << "-" << mm << "-" << yy;
        }
    }dob;
    void read(){
        cout << "Enter Name" << endl;
        cin >> name;
        cout << "Enter Date of Birth" << endl;
        dob.read();
    }
    void show(){
        cout << "Name: " << name;
        dob.show();
    }
};
int main(){
    human h1;
    h1.read();
    h1.show();
}