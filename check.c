#include<stdio.h>
void main(){
    int num, rem, sum=0, temp;
    printf("Enter the number");
    scanf("%d", &num);
    temp=num;
        rem = num % 10;
        sum = sum + rem*rem*rem;
        num = num/10;
        rem = num % 10;
        sum = sum + rem*rem*rem;
        num = num/10;
        rem = num % 10;
        sum = sum + rem*rem*rem;
    if(temp==sum){
        printf("It is a armstrong number");
    }
    else{
        printf("It is not a armstrong number");
    }
}