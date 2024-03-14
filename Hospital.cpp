#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Person{
    char name[30], sex[6];
    int dd, mm, yyyy;
    public:
    void getPerson(){
        cout << "Enter the Name" << endl;
        cin >> name;
        cout << "Enter Sex (Male/Female/Ohters)" << endl;
        cin >> sex;
        cout << "Enter the Date of Birth (DD/MM/YYYY)"  << endl;
        cin >> dd >> mm >> yyyy; 
    }
    void showPerson(){
        cout << "The Name is: " << name << endl;
        cout << "The Sex is: " << sex << endl;
        cout << "The Date of Birth is: " << dd << ":" << mm << ":" << yyyy << endl;
    }
};
class Doctor: public Person{
    char Specilization[30];
    public:
    void getDoctor(){
        cout << "Enter The Spelization" << endl;
        cin >> Specilization;
    }
    void showDoctor(){
        cout << "The Doctor is Specilized in: " << Specilization << endl;
    }
};
class Patient: public Person{
    int Casenumber, dda, mma, yya, ddd, mmd, yyd, bill_number;
    char Disease[20];
    public:
    void getPatient(){
        cout << "Enter the Case Number" << endl;
        cin >> Casenumber;
        cout << "Enter the Date of Admission (DD/MM/YYYY)" << endl;
        cin >> dda >> mma >> yya;
        cout << "Enter the Disease" << endl;
        cin >> Disease;
        cout << "Enter the Date of Discharge (DD/MM/YYYY)" << endl;
        cin >> ddd >> mmd >> yyd;
        cout << "Enter the Bill Number" << endl;
        cin >> bill_number;
    }
    void showPatient(){
        cout << "The Case Nuber is: " << Casenumber << endl;
        cout << "The Date of Addmission is: " << dda << ":" << mma << ":" << yya << endl;
        cout << "The Disease is: " << Disease << endl;
        cout << "The Date of Discharge is: " << ddd << ":" << mmd << ":" << yyd << endl;
        cout << "The Bill Number is: " << bill_number << endl;
    }
};
int main(){
    char choice;
    cout << "Who's Data You Want to Enter " << endl << "Press D for Doctor." << endl << "Press P for Patient" << endl;
    cin >> choice;
    if(choice=='D'||choice=='d'){
        Doctor d1;
        d1.getPerson();
        d1.getDoctor();
        d1.showPerson();
        d1.showDoctor();
    }
    else if(choice=='P'||choice=='p'){
        Patient p1;
        p1.getPerson();
        p1.getPatient();
        p1.showPerson();
        p1.showPatient();
    }
    else{
        cout << "Wrong choice!" << endl;
        getch();
        exit(0);
    }
    getch();
}