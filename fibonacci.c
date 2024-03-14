#include <stdio.h>
int fib(int n);
void main(){
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    fib(n);
}
int fib(int n){
    int g=1, h=0;
    printf("0\n");
    printf("1\n");
    for(int i=2; i<=n; i++){
    int f = g + h;
    h = g;
    g = f; 
    printf("%d\n", f);
    }
}