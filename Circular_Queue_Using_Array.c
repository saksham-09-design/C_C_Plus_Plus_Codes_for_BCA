#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
int a[MAX];
int front = -1, rear = -1;
void enqueue(int item){
    if((rear == MAX-1 && front == 0)||(rear+1 == front)){
        printf("Queue Full\n");
        return;
    }
    else if(rear == -1){
        rear = 0;
        front = 0;
    }
    else if(rear == MAX-1)
        rear = 0;
    else
        rear++;
    a[rear] = item;
}
int dequeue(){
    int item;
    if(front == -1){
        printf("Empty Queue\n");
        return 0;
    }
    else if(front == rear){
        item = a[front];
        front = -1;
        rear = -1;
        return item;
    }
    else if(front == MAX-1){
        item = a[front];
        front = 0;
        return item;
    }
    else{
        item = a[front];
        front++;
        return item;
    }
}
void display(){
    int i;
    if(front == -1){
        printf("Empty Queue\n");
        return;
    }
    if(front<rear){
        for(i = front; i <= rear; i++)
            printf("%d\n", a[i]);
        return;
    }
    else{
        for(i = front; i < MAX; i++)
            printf("%d\n", a[i]);
        for(i = 0; i <= rear; i++)
            printf("%d\n", a[i]);
    }
}
void main(){
    int choice, item;
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