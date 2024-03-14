#include<stdio.h>
#include<stdlib.h>
int partition(int a[], int low, int high){
    int i, j, k, pivot;
    i = low;
    j = high + 1;
    pivot = a[low];
    do{
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i<j){
            k = a[i];
            a[i] = a[j];
            a[j] = k;   
        }
    }while(i<j);
    a[low] = a[j];
    a[j] = pivot;
    return j;
}

void quick_sort(int a[], int low, int high){
    int j;
    if(low<high){
        j = partition(a, low, high);
        quick_sort(a, low, j-1);
        quick_sort(a, j+1, high);
    }
}

void main(){
    int a[100], i, n;
    printf("Enter the Number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    quick_sort(a, 0, n-1);
    printf("The Sorted array is:\n");
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
}