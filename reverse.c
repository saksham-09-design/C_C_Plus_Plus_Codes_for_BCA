#include <stdio.h>
int reverse(int n);
void main(){
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    printf("The reverse of a no. is %d", reverse(n));
}
int reverse(int n){
    int rem, rev;
    if(n<=0){
        return rev;
    }
    rem = n%10;
    rev = rev*10+ rem;
    reverse(n/10);
    return rev;
}