#include<stdio.h>
#define MAX 100
int a[MAX];
int top = -1, n;
void main(){
    void quicksort();
    int i;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    quicksort();
    printf("The sorted List is:\n");
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
}
void quicksort(){
    int quick(int , int);
    int beg, end, loc;
    int Lower[MAX], Upper[MAX];
    if(n>0){
        top++;
        Lower[top] = 0;
        Upper[top] = n-1;
    }
    do{
        beg = Lower[top];
        end = Upper[top];
        top--;
        loc = quick(beg, end);
        if(beg<loc-1){
            top++;
            Lower[top] = beg;
            Upper[top] = loc-1;
        }
        if(loc+1<end){
            top++;
            Lower[top] = loc+1;
            Upper[top] = end;
        }
    }while(top>-1);
}
int quick(int beg, int end){
    int left, right, pivot, temp, loc;
    left = beg;
    right = end;
    pivot = beg;
    do{
        while(a[right]>=a[pivot]&&pivot!=right)
            right--;
        if(pivot == right){
            loc = pivot;
            return loc;
        }
        if(a[pivot]>a[right]){
            temp = a[pivot];
            a[pivot] = a[right];
            a[right] = temp;
            pivot = right;
        }
        while(a[left]<=a[pivot]&&pivot!=left)
            left++;
        if(pivot == left){
            loc = pivot;
            return loc;
        }
        if(a[pivot]<a[left]){
            temp = a[pivot];
            a[pivot] = a[left];
            a[left] = temp;
            pivot = left;
        }
    }while(1);
}