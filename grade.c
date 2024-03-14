#include<stdio.h>
void main(){
    float num1, num2, num3, num4, num5, total, percentage;
    printf("Enter you marks in English");
    scanf("%f", &num1);
    printf("Enter you marks in punjabi");
    scanf("%f", &num2);
    printf("Enter you marks in hindi");
    scanf("%f", &num3);
    printf("Enter you marks in math");
    scanf("%f", &num4);
    printf("Enter you marks in science");
    scanf("%f", &num5);
    total=num1+num2+num3+num4+num5;
    percentage=total/5;
    if(percentage>=90&&percentage<=100){
        printf("your percentage is %f", percentage);
        printf("Your grade is A");
    }
    else if(percentage>=80){
        printf("your percentage is %f", percentage);
        printf("Your grade is B");
    }
    else if(percentage>=70){
        printf("your percentage is %f", percentage);
        printf("Your grade is C");
    }
    else if(percentage>=60){
        printf("your percentage is %f", percentage);
        printf("Your grade is D");
    }
    else if(percentage<60){
        printf("your percentage is %f", percentage);
        printf("Sorry you are fail");
    }
}