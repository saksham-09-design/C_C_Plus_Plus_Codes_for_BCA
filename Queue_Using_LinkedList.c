#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int info;
    struct node *link;
};
struct node *front, *rear;
void enqueue(int item){
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    ptr -> link = NULL;
    if(front == NULL){
        front = ptr;
        rear = ptr;
    }
    rear -> link = ptr;
    rear = ptr;
}
int dequeue(){
    int item;
    struct node *ptr;
    if(front == NULL){
        printf("Queue Empty\n");
        return 0;
    }
    item = front -> info;
    ptr = front;
    if(front == rear){
        front = NULL;
        rear = NULL;
    }
    front = front -> link;
    free(ptr);
    return item;
}
void display(){
    struct node *ptr;
    if(front == NULL){
        printf("No Item to display in the queue\n");
        return;
    }
    ptr = front;
    while(ptr != rear){
        printf("%d\n", ptr -> info);
        ptr = ptr -> link;
    }
    printf("%d\n", ptr -> info);
}
void main(){
    int choice, item;
    front = NULL;
    rear = NULL;
    while(1){
        printf("Enter the Operation\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("Enter the item to Insert in Queue:");
                    scanf("%d", &item);
                    enqueue(item);
                    break;
            case 2: item = dequeue();
                    printf("The Deleted item is: %d", item);
                    getch();
                    break;
            case 3: display();
                    getch();
                    break;
            case 4: exit(0);
            default: printf("Wrong choice!");
        }
    }
}