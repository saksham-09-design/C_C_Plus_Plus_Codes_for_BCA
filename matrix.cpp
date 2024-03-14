#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class matrix{
    int a[20][20], n, m, i, j;
    public:
    void getmatrix(){
        cout << "Enter the Order of Matrix";
        cin >> m >> n;
        cout << "Enter Elements";
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                {
                    cin >> a[i][j];
                }
        }
    }
    void check_matrix(matrix mm1){
        if(m!=mm1.m && n!=mm1.n)
            {
                cout << "Matrix Size Missmatch!" << endl;
                getch();
                exit(0);
            }
    }
    void show(matrix mm1){
        m = mm1.m;
        n = mm1.n;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                {
                    cout << a[i][j];
                }
                cout << endl;
        }
    }
    matrix operator+(matrix mm2){
        matrix temp;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                {
                    temp.a[i][j] = a[i][j] + mm2.a[i][j];
                }
        }
        return temp;
    }
};
int main(){
    matrix m1, m2, m3;
    m1.getmatrix();
    m2.getmatrix();
    m1.check_matrix(m2);
    m3=m1+m2;
    m3.show(m1);
    getch();
}