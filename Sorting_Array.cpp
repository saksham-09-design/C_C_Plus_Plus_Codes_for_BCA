/*#include<iostream>
using namespace std;
int main(){
    int a[30], i, j, n;
    cout << "Enter the Number of element" << endl;
    cin >> n;
    for(i=0; i<n; i++)
        cin >> a[i];
    cout << "Enter 1 for Increasing Order or 2 for Decreasing order" << endl;
    int ch;
    cin >> ch;
    if(ch==1){
        for(i=0; i<n; i++)
            if(a[i]>a[i+1]){
                int temp;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        for(i=0; i<n; i++)
            cout << a[i] << endl;
    }
    else if(ch==2){
            for(i=0; i<n; i++)
                if(a[i]<a[i+1]){
                    int temp;
                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                }
            for(i=0; i<n; i++)
                cout << a[i] << endl;
    }
    else
        cout << "Wrong Choice!";
}
*/