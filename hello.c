#include<stdio.h>
void main(){
    int year;
    printf("Enter a Year \n");
    scanf("%d", &year);
    if(year%100==0){
        if(year%400==0){
            printf("Entered Year is Leap"); //printf("5d is a Leap Year", year);
        }
        else{
            printf("Entered Year is not a Leap Year"); //printf("5d is not a Leap Year", year);
        }
    }
    else{
        if(year%4==0){
            printf("Entered Year is Leap"); //printf("5d is a Leap Year", year);
        }
        else{
            printf("Entered Year is not a Leap Year"); //printf("5d is not a Leap Year", year
        }
    }
}
