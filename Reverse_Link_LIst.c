#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *start;
void insert_end(int item){
    struct node *ptr, *ptr1;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(start == NULL){
        ptr -> info = item;
        ptr -> link = NULL;
        start = ptr;
        printf("Item Inserted\n");
        return;
    }
    ptr -> info = item;
    ptr -> link = NULL;
    ptr1 = start;
    while(ptr1 -> link != NULL){
        ptr1 = ptr1 -> link;
    }
    ptr1 -> link = ptr;
    printf("Item Inserted\n");
}
void reverse(){
    struct node *loc, *ptr;
    if(start == NULL){
        printf("Underflow\n");
        return;
    }
    ptr = start -> link;
    start -> link = NULL;
    while(ptr != NULL){
        loc = ptr;
        ptr = ptr -> link;
        loc -> link = start;
        start = loc;
    }
}
void sort(){
    struct node *ptr, *ptr1;
    int temp;
    ptr = start;
    while(ptr -> link != NULL){
        ptr1 = ptr -> link;
        while(ptr1 != NULL){
            if(ptr1 -> info < ptr -> info){
                temp = ptr -> info;
                ptr -> info = ptr1 -> info;
                ptr1 -> info = temp;
            }
            ptr1 = ptr1 -> link;
        }
        ptr = ptr -> link;
    }
}
void display(){
    struct node *ptr;
    ptr = start;
    printf("The elements of Link List are: \n");
    while(ptr != NULL){
        printf("%d\n", ptr -> info);
        ptr = ptr -> link;
    }
}
void main(){
    int n, item;
    start = NULL;
    printf("Enter the Number of elements\n");
    scanf("%d", &n);
    while(n>0){
        printf("Enter the item\n");
        scanf("%d", &item);
        insert_end(item);
        n--;
    }
    reverse();
    display();
    sort();
    display();
}