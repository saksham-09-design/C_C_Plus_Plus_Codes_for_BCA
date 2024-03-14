#include<stdio.h>
void main(){
    int i,n , j;
    printf("Enter the number");
    scanf("%d",&n);
   /* for(i=0; i<10; i++){
        for(j=0; j<i+1; j++)
            printf("*");
        printf("\n");
    }*/
    for(i=n; i>0; i--){
        for(j=0; j<i; j++){
             printf("*");
        }
    printf("\n");
    }
}