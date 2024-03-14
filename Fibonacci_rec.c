#include<stdio.h>
void fibonacci(int a, int b, int n){
    int c;
    c = a+b;
    printf("%d\t", c);
    a = b;
    b = c;
    n--;
    if(n>0){
        fibonacci(a,b,n);
    }
}
void main(){
    int n;
    printf("Enter the number of values you want to generate:");
    scanf("%d", &n);
    printf("%d\t%d\t",0,1);
    fibonacci(0,1,n-2);
}