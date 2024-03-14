#include<stdio.h>
void main(){
    int num, j, rem = 0, i, main[50];
    printf("Enter the Number");
    scanf("%d", &num);
    for(i=0; num>0; i++){
        rem = num%2;
        if(rem == 0)
            main[i] = 0;
        else
            main[i] = 1;
        num = num/2;
    }
    for(j=i-1; j>=0; j--)
        printf("%d", main[j]);
}