#include<stdio.h>
void main(){
    int m, n, o, p, k, i, j, newmatrix[30][30], x, y;
    printf("Enter the number of rows and columns of first matrix:");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of first matrix:");
    int arr1[m][n];
    for(i=0;i<m; i++ ){
        for(j=0; j<n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the number of rows and columns of second matrix:");
    scanf("%d %d", &o, &p);
    int arr2[o][p];
    printf("Enter the elements of second matrix:");
    for(i=0;i<o; i++ ){
        for(j=0; j<p; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    if(n==o){
        for(i=0; i<m; i++){
            for(j=0; j<p; j++){
                newmatrix[i][j]=0;
                for(k=0; k<o; k++){
                    newmatrix[i][j] = newmatrix[i][j] + arr1[i][k]*arr2[k][j];
                }
            }
        }
        for(i=0;i<m; i++ ){
            for(j=0; j<p; j++){
                printf("%d\t", newmatrix[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("These two matrices cannot be multiplied because the column of first matrix and the row of second matrix do not match");
    }
}