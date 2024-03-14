#include <stdio.h>
#include <math.h>
float f(float x,float y) {
    return x*y;
}
int main() {
    float x0, y0,y1,x1,xn,h,yn,y10,m;
    int i,n;
    printf("Enter Initial Conditions: x0 and y0\n");
    scanf("%f %f", &x0, &y0);
    printf("Enter Calculation Point : xn : ");
    scanf("%f",&xn);
    printf("Enter the value of h :");
    scanf("%f",&h);
    i=0;
    while(x0<xn)
    {
        i++;
        x1=x0+h;
        y1=y0+h*f(x0,y0);
        y10=y1;
        do
        {
            y1=y0+(h/2)*(f(x0,y0)+f(x1,y10));
            m=fabs(y1-y10);
            y10=y1;
        }while(m>0.0001);
        printf("%d \t%f\t %f\n",i,x1,y1);
        x0=x1;
        y0=y1;
    }
    return 0;
}