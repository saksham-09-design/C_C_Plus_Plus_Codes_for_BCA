#include <stdio.h>
int percentage(int s,int m, int S);
void main(){
    int s, m, S;
    printf("enter your marks in Science");
    scanf("%d", &s);
    printf("enter your marks in math");
    scanf("%d", &m);
    printf("enter your marks in sanskrit");
    scanf("%d", &S);
    printf("Your percentage is : %d", percentage(s,m,S));
}
int percentage(int s, int m, int S){
    return (s+m+S)/3;
}