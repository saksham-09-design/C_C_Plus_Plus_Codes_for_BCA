#include<stdio.h>
void main(){
    long int num, i=2;
    printf("Enter a number");
    scanf("%d", &num);
    while(i<num){
        if(num%i==0)
            break;
        else
            i++;
    }
    if(i==num)
        printf("Entered Number is Prime");
    else
        printf("Entered Number is not Prime");
}