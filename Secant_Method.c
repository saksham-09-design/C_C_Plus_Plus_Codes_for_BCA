#include<stdio.h>
#include<stdlib.h.>
#include<math.h>
float f(float x){
    return x*x*x-5*x+3;
}
void main(){
    float x0, x1, x2, f0, f1, f2, e;
    printf("Enter the Approximations: ");
    scanf("%f %f", &x0, &x1);
    printf("Enter the Tolerance Limit: ");
    scanf("%f", &e);
    printf("x0             x1           x2\n");
    f0 = f(x0);
    f1 = f(x1);
    do{
        x2 = ((x0*f1)-(x1*f0))/(f1-f0);
        f2 = f(x2);
        printf("%f      %f      %f\n", x0, x1, x2);
        f0 = f1;
        x0 = x1;
        f1 = f2;
        x1 = x2;
    }while(fabs(x1-x0)>e);
    printf("The root is: %f", x2);
}