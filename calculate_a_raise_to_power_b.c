#include<stdio.h>
void main(){
    int a, b, answer=1, i=1;
    printf("Enter the values of a and b");
    scanf("%d%d", &a,&b);
    do{
        answer = answer * a;
        i++;
     }while(i<=b);
     printf("The value of %d raise to power of %d is %d", a, b, answer);
}
