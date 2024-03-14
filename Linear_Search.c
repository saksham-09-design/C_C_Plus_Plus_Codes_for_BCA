#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[30], n, num;
    printf("Enter the No. of Elements");
    scanf("%d", &n);
    printf("Enter Elements");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter element to search");
    scanf("%d", &num);
    for(int i=0; i<n; i++){
        if(a[i]==num){
            printf("Element found at %d th position", i+1);
            exit(0);
        }
    }
    printf("Element Not Found!");
    getch();
}