#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[30][30], b[30][30], c[30][30], i, j, k, m, n, p, q, x, y;
    printf("Enter the order of first mat.\n");
    scanf("%d %d", &m, &n);
    for(i=0; i<m; i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    printf("Enter the order of 2nd mat.\n");
    scanf("%d %d", &p, &q);
    if(n!=p){
        printf("Multiply not possible");
        exit(0);
    }
    for(i=0; i<p; i++)
        for(j=0;j<q;j++)
            scanf("%d", &b[i][j]);
    x = m;
    y = q;
    for(i=0;i<x;i++)
        for(j=0;j<y;j++){
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
}