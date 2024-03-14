#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
class bin_to_dec{
    long int b, dec;
    public:
    void get_bin(){
        cout << "Enter a Binary Number" << endl;
        cin >> b;
        long int left = b;
        int rem;
        for (int i=0; left>0; i++){
            rem = left%10;
            if(rem>1||rem<0){
                cout << "Please Enter only 0's and 1's string" << endl;
                exit(0);
            }
            left = left/10;
        }
    }
    void convert_to_dec(){
        long int left=b;
            int rem;
             dec=0;
        for (int i=0; left>0; i++){
            rem = left%10;
            dec = dec + (rem*pow(2,i));
            left = left/10;
        }
    }
    void show_clr(){
        cout << "The Decimal Conversion is = " << dec << endl;
    }
};
int main(){
    start:
    bin_to_dec b1;
    b1.get_bin();
    b1.convert_to_dec();
    b1.show_clr();
    char c;
    cout << "Want to perform more?(Y/N)"<< endl;
    cin >> c;
    if(c=='y'||c=='Y')
     goto start;
}