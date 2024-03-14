#include <stdio.h>
float square(float a);
float rectangle(float l, float b);
float circle(float r);
void main(){
    int n, r, a, l, b;
   printf("Enter 1 If you want to calculate the area of circle\n ");
   printf("Enter 2 If you want to calculate the area of rectangle \n ");
   printf("Enter 3 If you want to calculate the area of square\n");
   printf("Enter the number:");
    scanf("%d", &n);
    if(n==1){
       printf("Enter the radius of circle");
        scanf("%d", &r);
        circle(r);
    }
    else if(n==2){
       printf("Enter the length and breadth of rectangle:");
        scanf("%d%d", &l, &b);
        rectangle(l, b);
    }
    else if (n==3){
       printf("Enter the side of square");
        scanf("%d", &a);
        square(a);
    }
    else{
       printf("Wrong input");
    }
}
float circle(float r){
   printf("The area of circle is : %f", 3.14*r*r);
}
float square(float a){
   printf("The area of square is: %f", a*a);
}
float rectangle(float l, float b){
   printf("The area of rectangle is: %f", l*b);
}