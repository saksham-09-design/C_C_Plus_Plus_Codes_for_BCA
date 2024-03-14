#include<iostream>
#include<conio.h>
using namespace std;
class emp_basic{
    int emp_code;
    char address[100], emp_name[30];
    public:
    void read(){
        cout << "Enter the Name of the employee" << endl;
        cin >> emp_name;
        cout << "Enter the Employee Id" << endl;
        cin >> emp_code;
        cout << "Enter the Employee Address" << endl;
        cin >> address;
    }
    void show(){
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Code: " << emp_code << endl;
        cout << "Employee Address: " << address << endl;
    }
};
class emp_salary: public emp_basic{
    float basic_pay, income_tax, net_sal;
    public:
    void read_salary(){
        cout << "Enter the Salary before Tax" << endl;
        cin >> basic_pay;
        cout << "Enter the Tax Rate" << endl;
        cin >> income_tax;
    }
    void calculate_salary(){
        net_sal = basic_pay + ((basic_pay * income_tax) / 100);
    }
    void show_salary(){
        cout << "The Salary after Tax is: " << net_sal;
    }
};
int main(){
    emp_salary es1;
    es1.read();
    es1.read_salary();
    es1.calculate_salary();
    es1.show();
    es1.show_salary();
    getch();
}