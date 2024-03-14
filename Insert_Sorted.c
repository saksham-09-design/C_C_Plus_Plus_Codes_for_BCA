#include<stdio.h>
struct node{
    int info;
    struct node *link;
}
void Insert_sr(int item){
    struct node ptr, ptr1, ptr2;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    if(start == NULL){
        ptr -> link = NULL;
        start = ptr;
        return;
    }
    if(item<start->info){
        ptr -> link = start;
        start = ptr;
        reutrn item;
    }
}