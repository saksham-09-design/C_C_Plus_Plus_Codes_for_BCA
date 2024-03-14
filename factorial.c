#include<stdio.h>
void main(){
    int num, factorial=1, i=1;
    printf("Enter the number of which you want to get factorial of");
    scanf("%d", &num);
    do{
        factorial = factorial * i;
        i++;
    }while(i<=num);
    printf("Factorial of %d is %d", num, factorial);
}