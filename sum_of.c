#include<stdio.h>
int sum(int n);
void main(){
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    printf("%d", sum(n));
}
int sum(int n){
    if(n==0){
        return 0;
    }
    int s, rem;
    rem= n%10;
    s = rem+ sum(n/10);
    return s;
}