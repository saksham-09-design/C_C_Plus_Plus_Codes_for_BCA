#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *start;
void ins_beg(int item){
    struct node *ptr;
   (struct node *)malloc(sizeof(struct node));
    ptr->info = item;
    ptr->link = start;
    start = ptr;
}
void ins_kth(int item, int k){
    int i;
    struct node *ptr, *ptr1;
    (struct node *)malloc(sizeof(struct node));
    (struct node *)malloc(sizeof(struct node));
    ptr->info = item;
    ptr1 = start;
    i = 1;
    while(i<k-1 && ptr1->link != NULL){
        ptr1 = ptr1->link;
        i++;
    }
    ptr->link = ptr1 -> link;
    ptr1->link = ptr;
}
void print_link(){
    struct node *ptr;
    ptr = start;
    while(ptr->link == NULL){
        printf("%d", ptr -> info);
        ptr = ptr->link;
    }
}
void main(){
    int item, n, k;
    char ch;
    do{
        printf("Select the operation you want to perform from the below menu\n");
        printf("1. For Insertion at the begining\n");
        printf("2. For Insertion at Random Position\n");
        printf("3. For Printing\n");
        printf("Enter the choice\n");
        fflush(stdin);
        scanf("%d", &n);
        fflush(stdin);
        switch(n){
            case 1: 
                printf("Enter the Item to insert\n");
                scanf("%d", &item);
                fflush(stdin);
                ins_beg(item);
                break;
            case 2:
                printf("Enter the Item to insert\n");
                scanf("%d", &item);
                fflush(stdin);
                printf("Enter the position\n");
                scanf("%d", &k);
                fflush(stdin);
                ins_kth(item, k);
                break;
            case 3:
                printf("The Link List is:\n");
                print_link();
                break;
            default: 
                printf("Wrong choice!");
                exit(0);
        }
    printf("Want to perform more?");
    scanf("%c", &ch);
    fflush(stdin);
    }while(ch=='y'||ch=='Y');
}
/*
#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *start = NULL;

void ins_beg(int item) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->info = item;
    ptr->link = start;
    start = ptr;
}

void ins_kth(int item, int k) {
    int i;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->info = item;
    struct node *ptr1 = start;
    i = 1;
    while (i < k - 1 && ptr1 != NULL) {
        ptr1 = ptr1->link;
        i++;
    }
    if (ptr1 != NULL) {
        ptr->link = ptr1->link;
        ptr1->link = ptr;
    }
}

void print_link() {
    struct node *ptr = start;
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->link;
    }
    printf("\n");
}

int main() {
    int item, n, k;
    char ch;
    do {
        printf("Select the operation you want to perform from the below menu\n");
        printf("1. For Insertion at the beginning\n");
        printf("2. For Insertion at Random Position\n");
        printf("3. For Printing\n");
        printf("Enter the choice\n");
        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("Enter the Item to insert\n");
                scanf("%d", &item);
                ins_beg(item);
                break;
            case 2:
                printf("Enter the Item to insert\n");
                scanf("%d", &item);
                printf("Enter the position\n");
                scanf("%d", &k);
                ins_kth(item, k);
                break;
            case 3:
                printf("The Link List is:\n");
                print_link();
                break;
            default:
                printf("Wrong choice!\n");
                exit(0);
        }

        printf("Want to perform more? (y/n): ");
        scanf(" %c", &ch);

    } while (ch == 'y' || ch == 'Y');

    // Free allocated memory before exiting
    struct node *current = start;
    while (current != NULL) {
        struct node *temp = current;
        current = current->link;
        free(temp);
    }

    return 0;
}

*/