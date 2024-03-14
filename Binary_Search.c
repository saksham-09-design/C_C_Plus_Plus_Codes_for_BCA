#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[50], i, n, high, low, mid, item;
    printf("Enter number elements\n");
    scanf("%d", &n);
    printf("Enter elements in ascending order\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter the element to search\n");
    scanf("%d", &item);
    high = n-1;
    low = 0;
    mid = (high+low)/2;
    while(low<high){
        if(a[mid]==item){
            printf("Element found at %d \n", mid+1);
            exit(0);
        }
        else if(a[mid]>item)
            low = mid+1;
        else
            high = mid-1;
        mid = (high+low)/2;
    }
    printf("Element not found\n");
}