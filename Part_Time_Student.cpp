#include<iostream>
#include<conio.h>
using namespace std;
class Student{
    int rollno;
    char name[30], course[30];
    public:
    void read_student(){
        cout << "Enter the Name" << endl;
        cin >> name;
        cout << "Enter the Course" << endl;
        cin >> course;
        cout << "Enter the Roll Number" << endl;
        cin >> rollno;
    }
    void show_student(){
        cout << "The Name of Student is: " << name << endl;
        cout << "The Studnt is Doing: " << course << endl; 
        cout << "The Student Roll No is: " << rollno << endl;
    }
};
class Employee{
    int emp_code;
    float salary_per_hour;
    public:
    void read_employee(){
        cout << "Enter the Employee Id" << endl;
        cin >> emp_code;
        cout << "Enter the Salary Per Hour" << endl;
        cin >> salary_per_hour;
    }
    float ret_salary(){
        return salary_per_hour;
    }
    void show_employee(){
        cout << "The Employee Id is: " << emp_code << endl;
        cout << "The Employee Salary Per Hour is: " << salary_per_hour << endl;
    }
};
class part_time_student: public Employee, public Student{
    float hours_worked, total_salary;
    public:
    void gethours(){
        cout << "Enter the Numbers of Hours worked" << endl;
        cin >> hours_worked;
    }
    void calculate_salary(){
        total_salary = ret_salary() * hours_worked;
    }
    void show_pt_student(){
        cout << "The total Salary of Student is: " << total_salary << endl;
    }
};
int main(){
    part_time_student pts1;
    pts1.read_student();
    pts1.read_employee();
    pts1.gethours();
    pts1.calculate_salary();
    pts1.show_student();
    pts1.show_employee();
    pts1.show_pt_student();
    getch();
}