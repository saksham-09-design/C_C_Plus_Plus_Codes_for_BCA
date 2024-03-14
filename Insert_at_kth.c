#include<stdio.h>
void main(){
    int a[50], i, item, pos, n;
    printf("Enter the Number of elements\n");
    scanf("%d", &n);
    printf("Enter Elements\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter the item to insert\n");
    scanf("%d", &item);
    printf("Enter Position at which item should be inserted\n");
    scanf("%d", &pos);
    for(i=n; i>pos-1; i--)
        a[i] = a[i-1];
    a[pos-1] = item;
    printf("The New array is\n");
    n++;
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
}