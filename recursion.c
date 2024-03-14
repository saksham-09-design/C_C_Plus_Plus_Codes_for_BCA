#include <stdio.h>
int fact(int n);
void main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("%d is the factorial of the given number", fact(n));
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int f, fn= fact(n-1);
    f = fn * n;
    return f;
}