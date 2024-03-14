#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class BankAccount{
    double accountBalance;
    int accountNumber;
    char accountHolderName[30];
    public:
    BankAccount(int acno, char ac[], double bal){
        accountNumber = acno;
        strcpy(accountHolderName,ac);
        accountBalance = bal;
    }
    BankAccount(){
        accountBalance = 0;
        accountNumber = 0;
        strcpy(accountHolderName,"");
    }
    void deposit(double amt){
        accountBalance += amt;
    }
    void witdhraw(double amt){
        if(amt<accountBalance){
            accountBalance-=amt;
        }
        else
            cout << "Insufficient Funds" << endl;
    }
    void displayBalance(){
        cout << "The Account Balance is: " << accountBalance << endl;
    }    
};
int main(){
    BankAccount b2(101,"abc",2000);
    cout << "Enter the Amount to Deposit";
    double amt;
    cin >> amt;
    b2.deposit(amt);
    b2.displayBalance();
     cout << "Enter the Amount to Widthraw";
    double amt1;
    cin >> amt1;
    b2.witdhraw(amt1);
    b2.displayBalance();
}