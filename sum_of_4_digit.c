#include<stdio.h>
void main(){
   long int num, rem, sum=0;
    printf("Enter a Number \n");
    scanf("%ld", &num);
    for (int i=0; num>0; i++){
         rem = num%10;
         sum = sum + rem;
         num = num/10;
   }
    printf("The Sum of Digits of Number is %ld", sum);
}