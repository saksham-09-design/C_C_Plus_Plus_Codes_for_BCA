#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *left;
    struct node *right;
};
struct node *start;
void ins_beg(int item){
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    ptr -> left = NULL;
    ptr -> right = start;
    if(start == NULL){
        start = ptr;
    }
    else{
        start -> left = ptr;
        start = ptr;
    }
}
void ins_end(int item){
    struct node *ptr, *ptr1;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    ptr -> right = NULL;
    if(start == NULL){
        ptr -> left = NULL;
        start = ptr;
        return;
    }
    else{
        ptr1 = start;
        while(ptr1 -> right != NULL){
            ptr1 = ptr1 -> right;
        }
        ptr1 -> right = ptr; 
        ptr -> left = ptr1;
    }
}
void ins_kth(int item, int k){
    struct node *ptr, *ptr1, *ptr2;
    int i;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    if(start == NULL){
        printf("No elements Item inserted at begning\n");
        ptr -> left = NULL;
        ptr -> right = NULL;
        start = ptr;
        return;
    }
    ptr1 = start;
    i = 1;
    while(ptr1 != NULL && i<k-1){
        ptr1 = ptr1 -> right;
        i++;
    }
    ptr2 = ptr1->right;
    if(ptr1 == NULL){
        printf("Position Not found!\n");
        return;
    }
    ptr -> right = ptr1 -> right;
    ptr -> left = ptr2 -> left;
    ptr1 -> right = ptr;
    ptr2 -> left = ptr;
    return;
}
void display(){
    struct node *ptr;
    if(start == NULL){
        printf("List is empty\n");
        return;
    }
    ptr = start;
    while(ptr != NULL){
        printf("%d\n", ptr -> info);
        ptr = ptr -> right;
    }
    return;
}
void main(){
    int c, item, pos;
    start = NULL;
    while(1){
        printf("1. Insert beg\n");
        printf("2. Insert kth\n");
        printf("3. Insert end\n");
        printf("4. exit\n");
        printf("Enter Operation");
        scanf("%d", &c);
        switch(c){
            case 1: printf("Enter Item");
                    scanf("%d", &item);
                    ins_beg(item);
                    display();
                    break;
            case 2: printf("Enter Item");
                    scanf("%d", &item);
                    printf("Enter Postion\n");
                    scanf("%d", &pos);
                    ins_kth(item, pos);
                    display();
                    break;
            case 3: printf("Enter Item");
                    scanf("%d", &item);
                    ins_end(item);
                    display();
                    break;
            case 4: exit(0);
            default: printf("Wrong Choice\n");
        }
    }
}