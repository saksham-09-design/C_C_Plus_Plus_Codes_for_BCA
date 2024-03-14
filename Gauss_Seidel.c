#include<stdio.h>
#include<math.h>
#define f1(x,y,z)(-8+4*y-3*z)/4
#define f2(x,y,z)(11-3*x+2*z)/9
#define f3(x,y,z)(24-4*x-2*y)/13
void main(){
    int count = 1;
    float x0 = 0, y0 = 0, z0 = 0;
    float x1, y1, z1, e1, e2, e3, e;
    printf("Enter tolerance:");
    scanf("%f", &e);
    printf("\n count \t x \t y \t z");
    do{
        x1 = f1(x0, y0, z0);
        y1 = f2(x1, y0, z0);
        z1 = f3(x1, y1, z0);
        printf("\n %d \t %f \t %f \t %f", count, x1, y1, z1);
        e1 = fabs(x1-x0);
        e2 = fabs(y1-y0);
        e3 = fabs(z1-z0);
        count++;
        x0 = x1;
        y0 = y1;
        z0 = z1;
    }while(e1>e&&e2>e&&e3>e);
    printf("\n Solution is: x = %f, y = %f, z = %f", x1, y1, z1);
}