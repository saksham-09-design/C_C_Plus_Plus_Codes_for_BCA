#include<stdio.h>
#define MAX 100
char a[MAX];
int top = -1;
void push(char item){
	top++;
	if(top == MAX){
		printf("Overflow\n");
		top--;
		return;
	}
	a[top] = item;
}
char pop(){
	char item;
	if(top < 0){
		printf("Underflow\n");
		return '0';
	}
	item = a[top];
	top--;
	return item;
}
int Prec(char ch){
	if(ch=='*' || ch=='/')
		return 1;
	else if(ch=='+' || ch=='-')
		return 2;
	else if(ch == '(')
		return 3;
}
int isDigit(char c){
	if(c >= '0' && c <='9')
		return 1;
	else 
		return 0;
}
int evaluate(char str[]){
	int i, j, k, l, ans;
	char c;
	i = 0;
	while(str[i] != '\0'){
		c = str[i];
		if(isDigit(c))
			push(c-48);
		else{
			l = pop();
			j = pop();
			switch(c){
				case '+': k = j + l;
						  break;
				case '-': k = j - l;
						  break;
				case '*': k = j * l;
						  break;
				case '/': k = j / l;
						  break;
				default:  k = 0;
			}
			push(k);
		}
		i++;
	}
	ans = pop();
	return ans;
}
void main(){
	char str[MAX], str1[MAX], ch, ch1;
	int i,j,p, ans;
	printf("Enter the Infix Expression\n");
	gets(str);
	fflush(stdin);
	i = 0;
	j = 0;
	while(str[i] != '\0'){
		ch = str[i];
		switch(ch){
			case '(': push(ch);
				  break;
			case '+':
			case '-':
			case '*':
			case '/': p = Prec(ch);
				  while(p>=Prec(a[top]) && top >= 0){
					str1[j] = pop();
					j++;
				  }
				  push(ch);
				  break;
			case ')': ch1 = pop();
				  while(ch1 != '('){
					str1[j] = ch1;
					j++;
					ch1 = pop();
				  }
				  break;
			default: str1[j] = ch;
				 j++;
		}
		i++;
	}
	while(top >= 0){
		str1[j] = pop();
		j++;
	}
	str1[j] = '\0';
	printf("The Postfix Expression is: %s\n", str1);
	ans = evaluate(str1);
	printf("The Answer of the Expression is: %d\n", ans);
}