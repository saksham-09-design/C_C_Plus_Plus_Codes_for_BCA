#include <stdio.h>
float conver(float n);
void main(){
    float n;
    printf("Enter the temperature in celsius:");
    scanf("%f", &n);
    conver(n);
}
float conver(float n){
    printf("%f", (n * 1.8)+32);
}