#include<iostream>
#include<conio.h>
using namespace std;
class Book_Details{
    char book_t[30], book_a[30];
    float price;
    public:
    void get_book(){
        cout << "Enter the Book Title" << endl;
        cin >> book_t;
        cout << "Enter the Name of Book Author" << endl;
        cin >> book_a;
        cout << "Enter the Price of Book" << endl;
        cin >> price;
    }
    void show_book(){
        cout << "Book Title:" << book_t << endl;
        cout << "Book Author:" << book_a << endl;
        cout << "Book Price:" << price << endl;
    }
};
int main(){
    Book_Details b1;
    b1.get_book();
    b1.show_book();
}