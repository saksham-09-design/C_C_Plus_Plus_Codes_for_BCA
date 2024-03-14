#include<stdio.h>
void main(){
    float num1, num2;
    int Choice;
    char ch;
        do{
            printf("Enter a number");
            scanf("%f", &num1);
            printf("Enter another number");
            scanf("%f", &num2);
            printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication \nEnter 4 for division\n");
            scanf("%d", &Choice);
            switch(Choice){
            case 1: printf("The sum of two numbers is %f\n", num1+num2);break;
            case 2: printf("The subtraction of two number is %f\n", num1-num2);break;
            case 3: printf("The multiplication of two number is %f\n", num1*num2);break;
            case 4: printf("The division of two number is %f\n", num1/num2);break;
            }
            fflush(stdin);
            printf("\nWant to Calculate more? (Y/N)");
            scanf("%c", &ch);
            }while(ch == 'y' || ch == 'Y');
}