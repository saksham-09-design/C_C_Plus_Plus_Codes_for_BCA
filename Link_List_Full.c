#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *start;
void ins_beg(int item){
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    if(start == NULL){
        ptr -> link = NULL;
        start = ptr;
        return;
    }
    ptr -> link = start;
    start = ptr;
}
void ins_end(int item){
    struct node *ptr, *ptr1;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    if(start == NULL){
        ptr -> link = NULL;
        start = ptr;
        return;
    }
    ptr1 = start;
    while(ptr1 -> link != NULL)
        ptr1 = ptr1 -> link;
    ptr1 -> link = ptr;
    ptr -> link = NULL;
}
void ins_kth(int item, int k){
    struct node *ptr, *ptr1;
    int i;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    if(start == NULL){
        printf("List Empty element inserted at begining\n");
        ptr -> link = NULL;
        start = ptr;
        return;
    }
    if(k == 1){
        ptr -> link = start;
        start = ptr;
        return;
    }
    ptr1 = start;
    i = 1;
    while(i < k-1 && ptr1 -> link != NULL){
        ptr1 = ptr1 -> link;
        i++;
    }
    if(ptr1 -> link == NULL){
        printf("Position Not found element inserted at end\n");
        ptr1 -> link = ptr;
        ptr -> link = NULL;
        return;
    }
    ptr -> link = ptr1 -> link;
    ptr1 -> link = ptr;
}
void ins_sort(int item){
    struct node *ptr, *ptr1, *ptr2;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    if(start == NULL){
        ptr -> link = NULL;
        start = ptr;
        return;
    }
    if(item < start -> info){
        ptr -> link = start;
        start = ptr;
        return;
    }
    ptr1 = start;
    ptr2 = start -> link;
    while(item > ptr2 -> info && ptr2 != NULL){
        ptr1 = ptr2;
        ptr2 = ptr2 -> link;
    }
    if(ptr2 == NULL){
        ptr1 -> link = ptr;
        ptr -> link = NULL;
        return;
    }
    ptr1 -> link = ptr;
    ptr -> link = ptr2;
}
int del_beg(){
    struct node *ptr;
    int item;
    if(start == NULL){
        printf("List Empty\n");
        return 0;
    }
    ptr = start;
    item = start -> info;
    start = start -> link;
    free(ptr);
    return item;
}
int del_end(){
    struct node *ptr, *ptr1;
    int item;
    if(start == NULL){
        printf("List Empty\n");
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
    return item;
}
int del_kth(int k){
    struct node *ptr, *ptr1;
    int i, item;
    if(start == NULL){
        printf("List Empty\n");
        return 0;
    }
    ptr = start;
    if(k == 1){
        item = start -> info;
        start = start -> link;
        free(ptr);
        return item;
    }
    ptr1 = start -> link;
    i = 2;
    while(i < k && ptr1 != NULL){
        ptr = ptr1;
        ptr1 = ptr1 -> link;
        i++;
    }
    if(ptr1 == NULL){
        printf("Position Not Found\n");
        return 0;
    }
    item = ptr1 -> info; 
    ptr -> link = ptr1 -> link;
    free(ptr1);
    return item;
}
void del_item(int item){
    struct node *ptr, *ptr1;
    if(start == NULL){
        printf("List Empty\n");
        return;
    }
    ptr = start;
    if(item == start -> info){
        start = start -> link;
        free(ptr);
        printf("Item Deleted\n");
        return;
    }
    ptr1 = start -> link;
    while(item != ptr1 -> info && ptr1 != NULL){
        ptr = ptr1;
        ptr1 = ptr1 -> link;
    }
    if(ptr1 == NULL){
        printf("Item Not found\n");
        return;
    }
    ptr -> link = ptr1 -> link;
    free(ptr1);
    printf("Item Deleted\n");
}
void search(int item){
    struct node *ptr;
    int count;
    if(start == NULL){
        printf("List Empty\n");
        return;
    }
    ptr = start;
    count = 1;
    while(ptr != NULL){
        if(item == ptr -> info){
            printf("Item Found at %dst Position\n", count);
            return;
        }
        else{
            ptr = ptr -> link;
            count++;
        }
    }
}
void reverse(){
    struct node *ptr, *loc;
    if(start == NULL){
        printf("List Empty\n");
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
    if(start == NULL){
        printf("List Empty\n");
        return;
    }
    ptr = start;
    while(ptr -> link != NULL){
        ptr1 = ptr;
        while(ptr1 != NULL){
            if(ptr -> info > ptr1 -> info){
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
    if(start == NULL){
        printf("List Empty\n");
        return;
    }
    ptr = start;
    while(ptr != NULL){
        printf("%d\n", ptr -> info);
        ptr = ptr -> link;
    }
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
        }
        ptr = ptr -> link;
    }
    return count;
}
void main(){
    int item, k, choice;
    while(1){
        printf("Select The operation:\n");
        printf("1. Insert at Begining\n");
        printf("2. Insert at Ending\n");
        printf("3. Insert at Kth\n");
        printf("4. Insert Sorted\n");
        printf("5. Delete Begning\n");
        printf("6. Delete Ending\n");
        printf("7. Delete Kth\n");
        printf("8. Delete Item\n");
        printf("9. Reverse\n");
        printf("10 Sort\n");
        printf("11 Display\n");
        printf("12. Search\n");
        printf("13. Count Non-Zero elements\n");
        printf("14. Exit\n");
        printf("Note:\nIt is not recomended to use any other Insertion Method while using Insertion Sorted.\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("Enter Item\n");
                    scanf("%d", &item);
                    ins_beg(item);
                    break;
            case 2: printf("Enter Item\n");
                    scanf("%d", &item);
                    ins_end(item);
                    break;
            case 3: printf("Enter Item\n");
                    scanf("%d", &item);
                    printf("Enter Position\n");
                    scanf("%d", &k);
                    ins_kth(item, k);
                    break;
            case 4: printf("Enter Item\n");
                    scanf("%d", &item);
                    ins_sort(item);
                    break;
            case 5: item = del_beg();
                    printf("The deleted Item is: %d\n", item);
                    break;
            case 6: item = del_end();
                    printf("The deleted Item is: %d\n", item);
                    break;
            case 7: printf("Enter Position\n");
                    scanf("%d", &k);
                    item = del_kth(k);
                    printf("The Deleted item is: %d\n", item);
                    break;
            case 8: printf("Enter Item\n");
                    scanf("%d", &item);
                    del_item(item);
                    break;
            case 9: reverse();
                    printf("Reversed List is:\n");
                    display();
                    break;
            case 10: sort();
                     printf("Sorted List is:\n");
                     display();
                     break;
            case 11: display();
                     break;
            case 12: printf("Enter Item\n");
                     scanf("%d", &item);
                     search(item);
                     break;
            case 13: k = count_nonzero();
                     printf("The total no. of Non-Zero items: %d", k);
                     break;
            case 14: exit(0);
            default: printf("Wrong Choice\n");
        }
    }
}