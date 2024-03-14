#include<stdio.h>
#include<math.h>
float f(float x){
    return fabs(x);
}
void main(){
    int i, n;
    float a, b, ans, sum, h;
    printf("Enter the Limits of the Integration:\n");
    scanf("%f %f", &a, &b);
    printf("Enter the Number of Intervals:\n");
    scanf("%d", &n);
    h = (b-a)/n;
    printf("The h is: %f\n", h);
    sum = f(a) + f(b);
    for(i=1; i<=n-1; i++){
        sum = sum + 2*(f(a + (i*h)));
    }
    ans = sum * (h / 2);
    printf("The ans is: %f", ans);
}