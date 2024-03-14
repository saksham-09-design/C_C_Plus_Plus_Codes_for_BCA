#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *start;
void insert_beg(int item){
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    ptr -> link = start;
    start = ptr;
    printf("Item Inserted\n");
}
void insert_kth(int item, int k){
    struct node *ptr, *ptr1;
    int i;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr1 = (struct node *)malloc(sizeof(struct node));
    if(start == NULL){
        ptr -> info = item;
        ptr -> link = NULL;
        start = ptr;
        return;
    }
    ptr -> info = item;
    ptr1 = start;
    i = 1;
    while(i<k-1 && ptr1 != NULL){
        ptr1 = ptr1 -> link;
        i++;
    }
    if(ptr1 == NULL){
        printf("Position Not exist\n");
        return;
    }
    ptr -> link = ptr1 -> link;
    ptr1 -> link = ptr;
    printf("Item Inserted\n");
}
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
int del_start(){
    int item;
    struct node *ptr;
    if(start == NULL){
        printf("NO ITEM TO DELETE\n");
        return 0;
    }
    ptr = start;
    item = ptr -> info;
    start = ptr -> link;
    free(ptr);
    printf("Item Deleted\n");
    return item;
}
int del_kth(int k){
    int item, i;
    struct node *ptr, *ptr1;
    if(start == NULL){
        printf("NO ITEM TO DELETE\n");
        return 0;
    }
    if(k==1){
        ptr = start;
        item = start -> info;
        start = start -> link;
        free(ptr);
        return item;
    }
    ptr = start -> link;
    ptr1 = start;
    i = 2;
    while(i<k && ptr != NULL){
        ptr1 = ptr;
        ptr = ptr -> link;
        i++;
    }
    if(ptr==NULL){
        printf("The position doesn't exist\n");
        return 0;
    }
    item = ptr -> info;
    ptr1 -> link = ptr -> link;
    free(ptr);
    printf("Item Deleted\n");
    return item;
}
int del_end(){
    int item;
    struct node *ptr, *ptr1;
    if(start == NULL){
        printf("Underflow\n");
        return 0;
    }
    ptr = start;
    while(ptr -> link != NULL){
        ptr1 = ptr;
        ptr = ptr -> link;
    }
    item = ptr -> info;
    ptr1 -> link = NULL;
    free(ptr);
    printf("Item Deleted\n");
    return item;
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
void search(int item){
    struct node *ptr;
    int count=1;
    if(start == NULL){
        printf("Underflow\n");
        return;
    }
    ptr = start;
    while(ptr != NULL){
        if(ptr -> info == item){
            printf("Item found at %d\n", count);
            return;
        }
        else{
            ptr = ptr ->link;
            count++;
        }
    }
    printf("Item not found\n");
}
int count_nonzero(){
    struct node *ptr;
    int count = 0;
    if(start == NULL){
        printf("Link List Empty\n");
        return 0;
    }
    ptr = start;
    while(ptr != NULL){
        if(ptr -> info != 0){
            count++;
            ptr = ptr -> link;
        }
    }
    return count;
}
void main(){
    int item, c, n, k;
    start = NULL;
    printf("Enter the Number of elements\n");
    scanf("%d", &n);
    while(n>0){
        printf("Enter the item\n");
        scanf("%d", &item);
        insert_end(item);
        n--;
    }
    while(1){
        //clrscr();
        printf("Enter the Operation\n");
        printf("1. Insertion at the begining\n");
        printf("2. Insertion at kth position\n");
        printf("3. Insertion at end\n");
        printf("4. Deletion at begining\n");
        printf("5. Deletion at kth position\n");
        printf("6. Deletion at end\n");
        printf("7. Display the elements\n");
        printf("8. Search an Item\n");
        printf("9. Exit\n");
        scanf("%d", &c);
        switch(c){
            case 1: printf("Enter the item\n");
                    scanf("%d", &item);
                    insert_beg(item);
                    display();
                    break;
            case 2: printf("Enter the item\n");
                    scanf("%d", &item);
                    printf("Enter the Position\n");
                    scanf("%d", &k);
                    insert_kth(item, k);
                    display();
                    break;
            case 3: printf("Enter the item\n");
                    scanf("%d", &item);
                    insert_end(item);
                    display();
                    break;
            case 4: item = del_start();
                    printf("The deleted item is: %d\n", item);
                    display();
                    break;
            case 5: printf("Enter the position of element to be deleted\n");
                    scanf("%d", &k);
                    item = del_kth(k);
                    printf("The deleted item is: %d\n", item);
                    display();
                    break;
            case 6: item = del_end();
                    printf("The deleted item is: %d\n", item);
                    display();
                    break;
            case 7: display();
                    break;
            case 8: printf("Enter Item to search: \n");
                    scanf("%d", &item);
                    search(item);
                    break;
            case 9: exit(0);
            default: printf("Wrong Choice!");
        }
    }
}