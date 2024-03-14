#include<stdio.h>
void main(){
    int a[30], i, j, n, k;
    printf("Enter the Number of elements\n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
        for(j=0; j<n-i-1; j++)
            if(a[j]>a[j+1]){
                k = a[j];
                a[j] = a[j+1];
                a[j+1] = k;
            }
    printf("The sorted array is:\n");
    for(i=0; i<n; i++)  
        printf("%d\n", a[i]);
}