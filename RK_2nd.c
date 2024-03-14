#include<stdio.h>
float f(float x, float y){
    return x*y;
}
void main(){
    float x0, y0, x1, y1, xn, h;
    int i;
    printf("Enter the initial conditions: x0, yo:\n");
    scanf("%f %f", &x0, &y0);
    printf("Enter the Size of steps:\n");
    scanf("%f", &h);
    printf("Enter the Nth value, xn\n");
    scanf("%f", &xn);
    while(x0<xn){
        x1 = x0 + h;
        k1 = h*f(x0, y0);
        k2 = h*f(x0+h, y0+k1);
        k = (k1+k2)/2;
        y1 = y0 + k;
        printf("%f\t %f\n", x1, y1);
        x0 = x1;
        y0 = y1;
    }
}