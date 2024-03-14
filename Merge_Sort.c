#include<stdio.h>
void merge(int a[], int high, int mid, int low){
    int i, j, k, b[100];
    i = low;
    j = mid+1;
    k = low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k] = a[i];
            i++;
            k++;
        }
        else{
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        b[k] = a[i];
        k++;
        i++;
    }
    while(j<=high){
        b[k] = a[j];
        k++;
        j++;
    }
    for(i=low; i<=high; i++){
        a[i] = b[i];
    }
}
void merge_sort(int a[], int low, int high){
    int mid;
    if(high>low){
        mid = (high + low)/2;
        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);
        merge(a, high, mid, low);
    }
}
void main(){
    int a[100], i, n;
    printf("Enter the Number of elements\n");
    scanf("%d", &n);
    printf("Enter the Elements\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    merge_sort(a, 0, n-1);
    printf("The Sorted List is: \n");
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
}