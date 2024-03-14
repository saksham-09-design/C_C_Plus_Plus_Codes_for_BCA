#include<stdio.h>
float f(float x){
    return(1/(1+x*x));
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
    for(i=0; i<n; i=i+6)
        sum = sum + f(a+(i*h)) + 5*f(a+((i+1)*h)) + f(a+((i+2)*h)) + 6*f(a+((i+3)*h)) 
              + f(a+((i+4)*h)) + 5*f(a+((i+5)*h)) + f(a+((i+6)*h));
    ans = (sum*3*h)/10;
    printf("The answer is %f", ans);
}