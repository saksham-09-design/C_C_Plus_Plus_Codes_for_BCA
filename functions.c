#include<stdio.h>
int table(int n);
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    table(n);
}
int table(int n){
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
}