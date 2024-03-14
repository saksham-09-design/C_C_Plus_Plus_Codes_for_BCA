#include<stdio.h>
void main(){
    int a[50], i, pos, n;
    printf("Enter the Number of Elements\n");
    scanf("%d", &n);
    printf("Enter Elements\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter the position of Element to be Deleted\n");
    scanf("%d", &pos);
    for(i=pos-1; i<n-1; i++)
        a[i] = a[i+1];
    n--;
    printf("The New array is\n");
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
}