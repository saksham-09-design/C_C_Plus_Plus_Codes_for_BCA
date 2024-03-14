#include<stdio.h>
void main(){
    int num1, num2, lcm, i=1;
    printf("Enter the two numbers");
    scanf("%d%d", &num1, &num2);
    do{
        if(num1%i==0&&num2%i==0){
            break;
        }
        else{
            i++;
        }
    }while(i<=num1&&i<=num2);
    printf("%d is the LCM of the two numbers", i);
}