#include<stdio.h>
#include<math.h>
void main(){
    float a, b, c, d, e, root1, root2;
    printf("Enter value of a \n");
    scanf("%f", &a);
    printf("Enter value of b \n");
    scanf("%f", &b);
    printf("Enter value of c \n");
    scanf("%f", &c);
    d=b*b-4*a*c;
    e=sqrt(d);
    root1=(-b+e)/2*a;
    root2=(-b-e)/2*a;
    if(d==0){
        printf("The roots of the given quadratic equation are equal and real \n");
        printf("the roots are %f", root1);
    }
    else if(d>0){
        printf("The roots of the given quadratic equation are real but different \n");
        printf("the first root is %f \n", root1);
        printf("the second root is %f \n", root2);
    }
    else{
        printf("The real roots does not exist");
    }
}