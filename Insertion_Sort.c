#include<stdio.h>
void main(){
    int a[100], i, j, n, k;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++){
        k = a[i];
        j = i-1;
        while(j>=0 && k<a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = k;
    }
    printf("The Sorted array is:\n");
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
}