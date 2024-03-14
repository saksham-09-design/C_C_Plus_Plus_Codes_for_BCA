#include <stdio.h>
void main(){
    int age = 22;
    int *ptr = &age;
    printf("%u\n", &ptr);
    ptr++;
    printf("%u\n", ptr);
}