#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x){
    printf("%f\n",x*x*x-4*x+1);
    return x*x*x-4*x+1;
}
float fdr(float x){
    printf("%f\n",3*x*x-4);
    return 3*x*x-4;
}
void main(){
    float x0, x1, f0, f1, e, fd;
    printf("Enter the value of x0:");
    scanf("%f", &x0);
    printf("Enter the Tolerance Limit: ");
    scanf("%f", &e);
    printf("x0\tx1\n");
    do{
        f0 = f(x0);
        fd = fdr(x0);
        if(f0 == 0.0){
            printf("Mathematical Error\n");
            exit(0);
        }
        x1 = x0 - (f0/fd);
        f1 = f(x1);
        printf("%f      %f\n", x0, x1);
        x0 = x1;
    }while(fabs(f1)>e);
    printf("The root is %f", x1);
}