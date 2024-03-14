#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class matrix {
    int a[10][10], i, j, n, m, k;
public:
    void getmatrix() {
        cout << "Enter the order of matrix: ";
        cin >> m >> n;
        cout << "Enter the elements: " << endl;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
    }

    void show() {
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    matrix operator*(matrix mm2) {
        if (n != mm2.m) {
            cout << "Matrix mismatch!";
            getch();
            exit(0);
        }
        matrix temp;
        temp.m = m;
        temp.n = mm2.n;
        for (i = 0; i < temp.m; i++) {
            for (j = 0; j < temp.n; j++) {
                temp.a[i][j] = 0;
                for (k = 0; k < n; k++) {
                    temp.a[i][j] += a[i][k] * mm2.a[k][j];
                }
            }
        }
        return temp;
    }
};

int main() {
    matrix m1, m2, m3;
    m1.getmatrix();
    m2.getmatrix();
    m3 = m1 * m2;
    m3.show();
    getch();
    return 0;
}
