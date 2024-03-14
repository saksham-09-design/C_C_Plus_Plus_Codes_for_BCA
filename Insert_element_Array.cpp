#include<iostream>
using namespace std;
int main(){
    int a[30], i, j, n, element, position;
    cout << "Enter the Number of elements" << endl;
    cin >> n;
    cout << "Enter element" << endl;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Enter 1 to Insert an element" << endl << "Enter 2 to Delete an element";
    int choice;
    cin >> choice;
    if(choice == 1){
        cout << "Enter the Element to Insert" << endl;
        cin >> element;
        cout << "Enter the Position in which the element to be inserted" << endl;
        cin >> position;
        if(position-1<=n){
            for(i=n; i>=position; i--){
                a[i] = a[i-1];
            }
            a[position-1] = element;
            n += 1;
        }
        else{
            cout << "The position can't be greater than the size of array";
            cout << endl << "Entered Array:";
        }
        for(i=0; i<n; i++){
            cout << a[i] << endl;
        }
    }
    else if(choice == 2){
        cout << "Enter the Position of element to be deleted" << endl;
        cin >> position;
        if(position-1<=n){
            for(i=position-1; i<n; i++){
                a[i] = a[i+1];
            }
            n -= 1;
        }
        else{
            cout << "The position can't be greater than the size of array";
            cout << endl << "Entered Array:";
        }
        for(i=0; i<n; i++){
            cout << a[i] << endl;
        }
    }
}