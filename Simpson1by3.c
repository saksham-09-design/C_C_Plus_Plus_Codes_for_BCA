#include<stdio.h>
#include <math.h>
float f(float x){
    printf("%f = %f\n",x, 1/(4*x+5));
    return 1/(4*x+5);
}
void main(){
    int i, n;
    float a, b, ans, sum, h;
    printf("Enter the Limits of Integration:\n");
    scanf("%f %f", &a, &b);
    printf("Enter the Number of Intervals: \n");
    scanf("%d", &n);
    h = (b-a)/n;
    sum = f(a) + f(b);
    for(i = 2; i<=n-1; i = i+2)
        sum = sum + 2*f(a + (i*h));
    for(i = 1; i<=n-1; i = i+2)
        sum = sum + 4*f(a + (i*h));
    ans = sum * (h/3);
    printf("The answer is: %f", ans);
}