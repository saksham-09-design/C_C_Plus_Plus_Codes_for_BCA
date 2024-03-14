#include<stdio.h>
#include<math.h>
float f(float x){
    printf("%f = %f\n",x, x/(1+x*x));
    return(x/(1+x*x));
}
void main(){
    int n, i;
    float a, b, sum, h, ans;
    printf("Enter the Limits of the Integration:\n");
    scanf("%f %f", &a, &b);
    printf("Enter the Number of intervals:\n");
    scanf("%d", &n);
    h = (b-a)/n;
    sum = 0;
    for(i=0; i<n; i=i+3)
        sum = sum + f(a+(i*h)) + 3*f(a+((i+1)*h)) + 3*f(a+((i+2)*h)) + f(a+((i+3)*h));
    ans = (sum*3*h)/8;
    printf("The answer is %f", ans);
}