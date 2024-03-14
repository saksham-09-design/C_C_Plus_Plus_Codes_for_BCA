#include<stdio.h>
void main(){
    float num, total , mean;
    int n=0;
    printf("Enter a number");
    scanf("%f", &num);
    total=num;
    do{  
        scanf("%f", &num);
        total= total + num;
        n++;
    }while(num!=0);
    mean= total / n;
    printf("Mean of entered numbers is %f", mean);
}