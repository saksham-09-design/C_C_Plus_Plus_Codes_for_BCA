#include <stdio.h>
struct vectoraddition{
    int x;
    int y;
};
struct complex{
    int m;
    int n;
};

void vectoraddition(struct vectoraddition v1, struct vectoraddition v2, struct vectoraddition sum);

void main(){
    struct complex a={5,6};
    struct complex *ptr= &a; 
    printf("The imaginary part is %d", ptr->m);
    printf("The real part is %d", ptr->n);
}

void vectoraddition(struct vectoraddition v1, struct vectoraddition v2, struct vectoraddition sum){
    sum.x= v1.x +v2.x;
    sum.y = v1.y + v2.y;
    printf("%d is the value of x\n", sum.x);
    printf("%d is the value of y", sum.y);
}