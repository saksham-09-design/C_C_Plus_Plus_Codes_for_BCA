#include <stdio.h>
int power(int n, int w);
void main(){
    int n,w;
    printf("Enter the number");
    scanf("%d", &n);
    printf("Enter the power ");
    scanf("%d", &w);
    printf("The value of %d raise to the power of %d is :%d ", n, w, power(n,w));
}          
int power(int n, int w){
    if(w==1){
        return n;
    }
    else{
    int ans;
    ans = power(n, w-1)*n;
    return ans;
    }
}