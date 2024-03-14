#include<iostream>
#include<conio.h>
using namespace std;
class Distance_Add{
    long int kilo, met;
    public:
    void get_distance(){
        cout << "Enter Distance in KM/MM" << endl;
        cin >> kilo >> met;
    }
    void show_distance(){
        cout << "The Total Distance is" << kilo << " KilloMeters" << met << " Meters." << endl;
    }
    Distance_Add operator+(Distance_Add ds){
        Distance_Add temp;
        temp.kilo = kilo + ds.kilo;
        temp.met = met + ds.met;
            if(temp.met>1000){
                temp.met = temp.met-1000;
                temp.kilo++;
            }
        return temp;    
    }
};
int main(){
    Distance_Add ds1,ds2,ds3;
    ds1.get_distance();
    ds2.get_distance();
    ds3 = ds1 + ds2;
    ds3.show_distance();
    getch();
}