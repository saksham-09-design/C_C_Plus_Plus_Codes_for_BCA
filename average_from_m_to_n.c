#include<stdio.h>
void main(){
    float average;
    int m, n, sum=0, count=0, temp;
    printf("Enter The value of m and n");
    scanf("%d%d", &m, &n);
    temp = m;
    do{
        sum = sum + m;
        count = count + 1;
        m++;
    }while(m<=n);
    average = sum/count;
    printf("%f is the average of numbers from %d to %d", average, temp, n);
}