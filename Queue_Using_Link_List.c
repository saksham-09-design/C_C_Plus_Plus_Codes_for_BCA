#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *rear, *front;
void enqueue(int item){
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    ptr -> link = NULL;
    if(rear == NULL){
        rear = ptr;
        front = ptr;
    }
    else{
        rear -> link = ptr;
        rear = ptr;
    }
}
int dequeue(){
    struct node *ptr;
    int item;
    if(front == NULL){
        printf("Queue is Empty\n");
        return 0;
    }
    item = front -> info;
    ptr = front;
    if(front == rear){
        front = NULL;
        rear = NULL;
    }
    else
        front = front -> link;
    free(ptr);
    return item;
}
void search(int item){
    struct node *ptr;
    if(front == NULL){
        printf("Queue Empty\n");
        return;
    }
    ptr = front;
    while(ptr != rear){
        if(item == ptr -> info){
            printf("Item found!\n");
            return;
        }
        else
            ptr = ptr -> link;
    }
    if(item == rear -> info){
        printf("Item found!\n");
        return;
    }
    else
        printf("Item not found!\n");
}
void display(){
    struct node *ptr;
    if(front == NULL){
        printf("Queue Empty\n");
        return;
    }
    ptr = front;
    printf("The elements of Link List are: \n");
    while(ptr != rear){
        printf("%d\n", ptr -> info);
        ptr = ptr -> link;
    }
    printf("%d\n", ptr -> info);
}
void main(){
    int item, c;
    rear = NULL;
    front = NULL;
    while(1){
        printf("Enter choice from the below menu\n");
        printf("1. Enqueue \n2. Dequeue \n3. Display \n4. Search \n5. Exit\n");
        scanf("%d", &c);
        switch(c){
            case 1: printf("Enter the Item to insert\n");
                    scanf("%d", &item);
                    enqueue(item);
                    break;
            case 2: item = dequeue();
                    printf("The deleted Item is: %d\n", item);
                    break;
            case 3: display();
                    break;
            case 4: printf("Enter the Item to insert\n");
                    scanf("%d", &item);
                    search(item);
                    break;
            case 5: exit(0);
            default: printf("Wrong Choice\n");
            fflush(stdin);
        }
    }
}