#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char st[MAX];
int top = -1;
void push(char a){
    top++;
    if(top==MAX){
        printf("Overflow\n");
        return;
    }
    st[top] = a;
    return;
}
char pop(){
    char item;
    if(top == -1){
        printf("Underflow");
        return '\0';
    }
    item = st[top];
    top--;
    return item;
}
void main(){
    char ch[100];
    char c;
    int n, i;
    printf("Enter the Number of character in the String");
    scanf("%d", &n);
    printf("Enter the String");
    fflush(stdin);
    gets(ch);
    for(i=0; ch[i]!='\0'; i++){
        c = ch[i];
        push(c);
    }
    printf("The reverse of String is:\n");
    for(i=n; i>0; i--){
        c = pop();
        printf("%c", c);
    }
}