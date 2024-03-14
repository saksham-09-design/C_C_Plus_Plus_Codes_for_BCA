#include<stdio.h>
void main(){
    int n, i=1;
    printf("Enter the value of n");
    scanf("%d", &n);
    do{
        printf("%d\t",i);
        i++;
    }while(i<=n);
}