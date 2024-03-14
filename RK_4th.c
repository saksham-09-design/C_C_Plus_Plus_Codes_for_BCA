#include <stdio.h>
#include <math.h>
float f(float x,float y) {
    return (3*x/y)-x*y;
}
int main() {
    float x0, y0,y1,x1,xn,h,k0,k1,k2,k3,k4,k;
    int i,n;
    printf("Enter Initial Conditions: x0 and y0\n");
    scanf("%f %f", &x0, &y0);
    printf("Enter Calculation Point : xn : ");
    scanf("%f",&xn);
    printf("Enter the number of steps :");
    scanf("%d",&n);
    h=(xn-x0)/n;
    for(i=0;i<n;i++)
    {
        x1=x0+h;
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        k=(k1+2*k2+2*k3+k4)/6;
        y1=y0+k;
        printf("%f\t %f\n",x1,y1);
        x0=x1;
        y0=y1;
    }
    return 0;
}