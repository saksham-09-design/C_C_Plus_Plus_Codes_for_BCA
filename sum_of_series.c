#include<stdio.h>
void main(){
    int x, n, r, sum, a=1, i=1;
    printf("Enter the value of x");
    scanf("%d", &x);
    printf("Enter the number of terms");
    scanf("%d", &n);
    r = x*x;
    while(i<=n){
        a = a*r;
        i++;
    }
    sum = (a-1)/(r-1);
    printf("The sum of the series is %d", sum);
}