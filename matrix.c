#include <stdio.h>
#include<conio.h>
void main(){
    int m, n, o, p, newmatrix[m][p],arr1[m][n], arr2[m][n];
    printf("Enter the number of rows and columns of first matrix:");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of first matrix:");
    for(int i=0;i<m; i++ ){
        for(int j=0; j<n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the number of rows and columns of second matrix:");
    scanf("%d %d", &o, &p);
    printf("Enter the elements of second matrix:");
    for(int i=0;i<o; i++ ){
        for(int j=0; j<p; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    if(n==o){
        for(int i=0; i<m; i++){
            for(int j=0; j<p; j++){
                newmatrix[i][j]=0;
                for(int k=0; k<n; k++){
                    newmatrix[i][j] = newmatrix[i][j] + arr1[i][k]*arr2[k][j];
                }
            }
        }
        for(int i=0;i<m; i++ ){
            for(int j=0; j<p; j++){
                printf("%d\t", newmatrix[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("These two matrices cannot be multiplied because the column of first matrix and the row of second matrix do not match");
    }
    getch();
    /*for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            newmatrix[i][j]= arr1[i][j]+arr2[i][j];
        }
    }*/
}