#include<stdio.h>
void main(){
    long int rem, sum=0, num, temp;
    printf("Enter the number\n");
    scanf("%ld", &temp);
    num = temp;
    for(int i=0; temp>0; i++){
        rem = temp % 10;
        sum = sum + rem;
        temp = temp/10;
    }
   /* do{
        rem = temp % 10;
        sum = sum + rem;
        temp = temp/10;
    }while(temp>0); */
    /*while(temp>0){
        rem = temp % 10;
        sum = sum + rem;
        temp = temp/10;
    }*/
    printf("The sum of  digits of %ld is %ld", num, sum);
}