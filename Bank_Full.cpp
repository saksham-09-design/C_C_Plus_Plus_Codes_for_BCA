#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class user;
class admin{
    protected:
    double acc_bal;
    float acc_verify;
    long int acc_no; 
    int acc_pin;
    char name[30];
    public:
    void get_acc(){
        cout << "Enter Account Number: " << endl;
        cin >> acc_no;
        cout << "Enter Account Balance: " << endl;
        cin >> acc_bal;
        cout << "Enter Name: " << endl;
        cin >> name;
        cout << "Enter Verification Id No. (Aadhar/Pan)" << endl;
        cin >> acc_verify;
        cout << "Enter Pin for the Account" << endl;
        cin >> acc_pin;
    }
    friend void save_data(user);
    void show(){
        cout << "The Account Number is: " << acc_no << endl;
        cout << "The Account Balance is: " << acc_bal << endl;
        cout << "The Account Holder's Name is: " << name << endl;
        cout << "The Verification Number is: " << dec << acc_verify << endl;
        cout << "The Account Pin is: " << acc_pin << endl;
        for(int i=0;i<50;i++)
            cout << "_";
        cout << endl;
    }
};
class user: public admin{
    protected:
    long int account;
    public:
    void search_data(user u1[], int m){
        account1:
        cout << "Enter the Account Number" << endl;
        cin >> account;
        for(int i=0; i<m; i++){
            if(account == u1[i].acc_no){
                cout << "Account Found";
                pin1:
                cout << "Enter Account Pin" << endl;
                int pin;
                cin >> pin;
                if(pin == u1[i].acc_pin){
                    cout << "Pin Accepted!" << endl;
                    cout << "Here is your Account Details" << endl;
                    cout << "The Account Number is: " << acc_no << endl;
                    cout << "The Account Balance is: " << acc_bal << endl;
                    cout << "The Account Holder's Name is: " << name << endl;
                    cout << "The Verification Number is: " << dec << acc_verify << endl;
                    cout << "Thank You For Banking with us";
                    exit(0);
                }
                else{
                    cout << "Wrong Pin!" << endl;
                    cout << "Want to Re-Enter Pin or Account Number?" << endl;
                    cout << "Press P for Pin" << endl;
                    cout << "Press A for Account Number" << endl;
                    char choice;
                    cin >> choice;
                    if(choice=='y'||choice=='Y')
                        goto pin1;
                    else if(choice=='A'||choice=='a')
                       goto account1;
                    else{
                        cout << "Wrong Choice Exiting !" << endl;
                        getch();
                        exit(0);
                    }
                }
            }
            else{
                cout << "Account Not Found!" << endl;
                cout << "Want to Re-Enter?" << endl;
                char choice1;
                cin >> choice1;
                if(choice1=='y'||choice1=='Y')
                    goto account1;
            }
        }
    }
};
void save_data(user b1){
    fstream ob1("bank.txt", ios::out|ios::app);
    ob1 << "Account Number:" << b1.acc_no << endl;
    ob1 << "Account Balance:" <<b1.acc_bal << endl;
    ob1 << "Account Holder's Name:" <<b1.name << endl;
    ob1 << "Verification I'd:" << dec << b1.acc_verify << endl;
    ob1 << "Account Holder's Pin:" <<b1.acc_pin << endl;
    for(int i=0; i<50; i++)
        ob1 << "_";
    ob1 << endl;    
}
int main(){
    cout << "Are You and Admin or User?"<< endl;
    cout << "Press A for Admin and U for User" << endl;
    char choice_a;
    cin >> choice_a;
    if(choice_a=='U'||choice_a=='u')
    goto user_main;
    start:
    char user_name[30];
    char password[30];
    char def_user[10];
    char def_pass[12];
    strcpy(def_user,"BOB_2023");
    strcpy(def_pass,"user_2023");
    cout << "Enter Username" << endl;
    cin >> user_name;
    cout << "Enter Password" << endl;
    cin >> password;
    if(!strcmp(user_name,def_user) && !strcmp(password,def_pass)){
        user b[1000];
        cout << "Welcome!" << endl;
        getch();
        cout << "Enter Number of Entries" << endl;
        float no_acc;
        cin >> no_acc;
        for(int i=0; i<no_acc; i++){
            b[i].get_acc();
        }
        cout << "Want to Save on Hard Disk?" << endl;
        char c;
        cin >> c;
        if(c=='y'||c=='Y'){
            for(int i=0; i<no_acc; i++){
                save_data(b[i]);
            }
        }
        cout << "Want to Display on Screen?" << endl;
        char ch;
        cin >> ch;
        if(ch=='y'||ch=='Y'){
            for(int i=0; i<no_acc; i++){
                b[i].show();
            }
        }
        getch();
    }
    else{
        cout << "Wrong Password or Username!" << endl;
        cout << "Want to Re-Enter" << endl;
        char choice;
        cin >> choice;
        if(choice=='y'||choice=='Y'){
            goto start;
        }
    }
    user_main:
}