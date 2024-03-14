#include<stdio.h>
void main(){
    int num, max, min;
    printf("Enter the numbers");
    scanf("%d", &num);
    max = num;
    min = num;
    do{
        scanf("%d", &num);
        if(num>max){
            max=num;
        }
        if(num<min&& num< 0){
            min=num;
        }
    }while(num != 0);
    printf("The min of the given numbers is %d\nthe maximaum of the given number is %d", min, max);
}