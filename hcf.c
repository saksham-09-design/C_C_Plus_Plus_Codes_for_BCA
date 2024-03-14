#include<stdio.h>
void main(){
    int num1, num2, hcf, i=1;
    printf("Enter the two numbers");
    scanf("%d%d", &num1, &num2);
    while(i<=num1&&i<=num2){
        num1%i==0&&num2%i==0;
         i++;
    }
    printf("%d is the HCF of two numbers", i-1);
}