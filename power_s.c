#include<stdio.h>
float power(float, float, float);
void main(){
    float a,b,ans,a_c;
    printf("Enter the Number\n");
    scanf("%f", &a);
    a_c = a;
    printf("Enter the Power\n");
    scanf("%f", &b);
    ans = power(a,b, a_c);
    printf("The Power is %f", ans);
}
float power(float a, float b, float a_c){
    if(b==1)
        return a;
    else{
        a *= a_c;
        b--;
        return(power(a,b,a_c));
    }
}