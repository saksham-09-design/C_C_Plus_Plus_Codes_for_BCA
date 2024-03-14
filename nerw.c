#include <stdio.h>
void checkcharacter(char str[], char ch);
void main(){
    char str[100];
    char ch;
    printf("enter the word:");
    scanf("%s", str);
    //printf("%s", str);
    printf("Enter the character you want to check:");
    fflush(stdin);
    scanf("%c", &ch);
    checkcharacter(str, ch);
}
void checkcharacter(char str[], char ch){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==ch){
            printf("Yes");
            return;                
        }
        else{
            i++;
        }
    }
    printf("No");
}
