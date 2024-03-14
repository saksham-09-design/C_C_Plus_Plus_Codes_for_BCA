//#include<math.h>
#include<stdio.h>
void main(){
    int choice;
    float num1, num2, ans;
    printf("This is a Simple Calculator\n");
    printf("Enter a Number\n");
    scanf("%f", &num1);
    printf("Enter a Number\n");
    scanf("%f", &num2);
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    //printf("Press 5 for Power Calculation\n");
    printf("Enter Your Chice");
    scanf("%d", &choice);
    switch(choice){
        case 1: ans = num1 + num2;
                printf("The Addition is = %f", ans);
                break;
        case 2: ans = num1 - num2;
                printf("The Subtraction is = %f", ans);
                break;
        case 3: ans = num1 * num2;
                printf("The Multiplication is = %f", ans);
                break;
        case 4: ans = num1 / num2;
                printf("The Division is = %f", ans);
                break;
       /* case 5: ans = pow(num1,num2);
                printf("The %f raise to %f is %f", num1, num2,ans);
                break;*/
    }
}