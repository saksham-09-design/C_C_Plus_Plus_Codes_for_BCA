#include<stdio.h>
void main(){
    void selection_sort(int[], int);
    int a[100], n, i;
    printf("Enter the Number of Elements.\n");
    scanf("%d", &n);
    printf("Enter the Elements\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    selection_sort(a,n);
    printf("The Sorted Array is: \n");
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
}
void selection_sort(int b[], int m){
    int minimum(int[], int, int);
    int i, j, k;
    for(i=0; i<m-1; i++){
        j = minimum(b, m, i);
        k = b[i];
        b[i] = b[j];
        b[j] = k;
    }
}
int minimum(int c[], int end, int start){
    int min, loc, i;
    min = c[start];
    loc = start;
    for(i=start+1; i<end; i++){
        if(min>c[i]){
            min = c[i];
            loc = i;
        }
    }
    return loc;
}