#include<stdio.h>
void main(){
    float x[100], y[100], xp, yp=0, p;
    int i, j, n;
    printf("Enter the Number of elements");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter the value of x");
        scanf("%f", &x[i]);
        printf("Enter the value of y");
        scanf("%f", &y[i]);
    }
    printf("Enter the Interpolation point");
    scanf("%f", &xp);
    for(i=0; i<n; i++){
        p = 1;
        for(j=0; j<n; j++){
            if(j!=i)
                p = p*((xp - x[j])/(x[i] - x[j]));
        }
        yp = yp + y[i] * p;
        printf("Sum = %f\n", yp);
    }
    printf("The interpolated value of %f is %f", xp, yp);
}