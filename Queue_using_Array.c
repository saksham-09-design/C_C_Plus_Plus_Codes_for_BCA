#include<stdio.h>
#include<stdlib.h>
#define Max 10
int front = -1, rear = -1;
int a[Max], n;
void enqueue(int item){
    if(rear == Max-1){
        printf("Queue Full!\n");
        return;
    }
    if(rear == -1){
        rear = 0;
        front = 0;
        a[rear] = item;
        return;
    }
    else{
        rear++;
        a[rear] = item;
    }
}
int dequeue(){
    int item;
    if(front == -1){
        printf("Queue Empty!\n");
        return item;
    }
    if(front == rear){
        item = a[front];
        front = -1;
        rear = -1;
        return item;
    }
    item = a[front];
    front++;
    return item;
}
void search(int item){
    int i;
    for(i=0; front < rear; i++)
        if(item == a[i]){
            printf("Search Successful\n");
            return;
        }
    printf("Search Unsuccessful\n");
}
void display(){
    int i;
    printf("The elements of Queue are: \n");
    for(i=front; i <= rear; i++)
        printf("%d\n", a[i]);
}
void main(){
    int item, c;
    while(1){
        printf("Select from the below menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice:");
        scanf("%d", &c);
        switch(c){
            case 1: printf("Enter Item:");
                    scanf("%d", &item);
                    enqueue(item);
                    break;
            case 2: item = dequeue();
                    printf("The deleted item is: %d\n", item);
                    break;
            case 3: printf("Enter Item to Search:");
                    scanf("%d", &item);
                    search(item);
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
            default: printf("Wrong choice\n");
        }
    }
}