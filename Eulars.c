#include<stdio.h>
float f(float x, float y){
    return x*y;
}
void main(){
    float x0, y0, x1, y1, xn, h;
    int i, n;
    printf("Enter the initial conditions: x0, yo:\n");
    scanf("%f %f", &x0, &y0);
    printf("Enter the Number of steps:\n");
    scanf("%d", &n);
    printf("Enter the Nth value, xn\n");
    scanf("%f", &xn);
    h = (xn-x0)/n;
    for(i=0; i<n; i++){
        x1 = x0 + h;
        y1 = y0 + h * f(x0, y0);
        printf("%f \t %f\n", x1, y1);
        x0 = x1;
        y0 = y1;
    }
}