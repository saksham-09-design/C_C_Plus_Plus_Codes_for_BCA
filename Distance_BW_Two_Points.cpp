#include<iostream>
#include<math.h>
using namespace std;
class Distsnce_Point{
    float x,y;
    public:
    void get_point(){
        cout << "Enter X and Y Coordinates";
        cin >> x >> y;
    }
    float operator-(Distsnce_Point ds){
        float dist;
        dist = sqrt(pow((ds.x-x),2)+pow((ds.y-y),2));
        return dist;
    }
};
int main(){
    Distsnce_Point d1,d2;
    float distance;
    d1.get_point();
    d2.get_point();
    distance = d1 - d2;
    cout << "The distance between two points is " << distance;
}