#include<stdio.h>
void main(){
    int num;
    printf("Enter the number of day");
    scanf("%d", &num);
    if(num==0)
        printf("Today is sunday");
    
    else if(num==1)
        printf("Today is monday");
    
    else if(num==2)
        printf("Today is tuesday");
    
    else if(num==3)
        printf("Today is wednesday");
    
    else if(num==4)
        printf("Today is thrusday");
    
    else if(num==5)
        printf("Today is friday");
    
    else if(num==6)
        printf("Today is saturday");
    
    else
        printf("Entered number of day do not exist");
}    
