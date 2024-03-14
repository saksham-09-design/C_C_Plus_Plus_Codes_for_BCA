#include<stdio.h> 
void main(){
    int i, num1, num2;
    printf("Enter the starting value of range:");
    scanf("%d", &num1);
    printf("Enter the ending value of range:");
    scanf("%d", &num2);        
    for(int j=num1; j<=num2; j++){
        for(int i=2; i<=j; i++){
            if(j%i==0){
                if(i==j){
                    printf("%d\n", j);
                }
                else {
                    break;
                }
            }
            else {
                continue;
            }
        }
    }
}