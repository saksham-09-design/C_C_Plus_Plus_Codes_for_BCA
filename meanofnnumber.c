#include<stdio.h>
void main(){
    float mean, total, num;
    int i;
    printf("This is Mean Calculator");
    printf("Enter Number");
    scanf("%f", &num);
    total = num;
    for(i=1;num>0;i++){
        scanf("%f", &num);
        total = total + num;
    }
    mean = total/(i-1);
    printf("The Mean of Number is %f", mean);
}