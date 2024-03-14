#include<stdio.h>
#define MAX 100
int a[MAX];
int top = -1;
void push(int item){
    top++;
    if(top == MAX){
        printf("Overflow\n");
        top--;
        return;
    }
    a[top] = item;
}
int pop(){
    int item;
    if(top == -1){
        printf("Underflow\n");
        return 0;
    }
    else{
        item = a[top];
        top--;
        return item;
    }   
}
int isDigit(char ch){
    if(ch>='0' && ch<='9')
        return 1;
    else
        return 0;
}
void main(){
    char str[100], c;
    int i, j, k, l, ans;
    printf("Enter the Postfix String\n");
    gets(str);
    i = 0;
    while(str[i] != '\0'){
        c = str[i];
        if(isDigit(c)){
            push(c-48);
        }
        else{
            l = pop();
            j = pop();
            switch(c){
                case '+': k = j+l;
                        break;
                case '-': k = j-l;
                        break;
                case '*': k = j*l;
                        break;
                case '/': k = j/l;
                        break;
                default: k = 0;
            }
            push(k);
        }
        i++;
    }
    ans = pop();
    printf("The result is: %d\n", ans);
}