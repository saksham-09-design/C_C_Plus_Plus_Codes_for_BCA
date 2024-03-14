#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float f(float x) {
    return x*exp(x)-1;
}
int main() {
    float x0, x1, x2, fx1, fx2, fx0, e;
    printf("Enter Initial Approximations:\n");
    scanf("%f %f", &x0, &x1);
    fx0 = f(x0);
    fx1 = f(x1);
    if(fx0*fx1>0){
        printf("The initial guesses are wrong\n");
        return 1;
    }
    printf("Enter the tolerance:\n");
    scanf("%f", &e);
    do{
        x2 = (x0 * fx1 - x1 * fx0)/(fx1 - fx0);
        fx2 = f(x2);
        if(fx1*fx2 < 0){
            x0 = x2;
            fx0 = fx2;
        } 
        else{
            x1 = x2;
            fx1 = fx2;
        }
        printf("x0 = %f, x1 = %f, x2 = %f\n", x0, x1, x2);
    }while (fabs(fx2)>e);
    printf("The root is %f\n", x2);
    return 0;
}