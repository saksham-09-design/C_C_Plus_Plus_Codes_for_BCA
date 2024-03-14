#include<stdio.h>
void main(){
   int num, check;
    printf("Enter the Number\n");
    scanf("%d", &num);
    check = num/2;
    while(check != 1 || check != 0)
        check = check/2;
    if(check == 1)
        printf("Odd Number\n");
    if(check == 0)
        printf("Even Number\n");
}