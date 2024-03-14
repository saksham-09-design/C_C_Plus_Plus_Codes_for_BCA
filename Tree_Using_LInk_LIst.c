#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *left;
    struct node *right;
};
struct node *root;
void insert_bst(int item){
    struct node *ptr, *pptr, *ptr1;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> info = item;
    ptr -> left = NULL;
    ptr -> right = NULL;
    if(root == NULL){
        root = ptr;
        return;
    }
    ptr1 = root;
    while(ptr1 != NULL){
        if(ptr1 -> info == item){
            printf("Duplicate NOde\n");
            free(ptr);
            return;
        }
        else if(item > ptr1 -> info){
            pptr = ptr1;
            ptr1 = ptr1 -> right;
        }
        else{
            pptr = ptr1;
            ptr1 = ptr1 -> left;
        }
    }
    if(item > pptr -> info)
        pptr -> right = ptr;
    else
        pptr -> left = ptr;
}
void preorder(struct node *p){
    if(p!=NULL){
        printf("%d\n", p -> info);
        preorder(p -> left);
        preorder(p -> right);
    }
}
void postorder(struct node *p){
    if(p!=NULL){
        postorder(p -> left);
        postorder(p -> right);
        printf("%d\n", p -> info);
    }
}
void inorder(struct node *p){
    if(p!=NULL){
        inorder(p -> left);
        printf("%d\n", p -> info);
        inorder(p -> right);
    }
}
struct node* search(int item){
    struct node *ptr;
    if(root == NULL){
        printf("Tree Empty\n");
        return NULL;
    }
    ptr = root;
    while(ptr != NULL){
        if(item == ptr -> info)
            return ptr;
        else if(item > ptr -> info)
            ptr = ptr -> right;
        else 
            ptr = ptr -> left;
    }
    return NULL;
}
void find(int item, struct node **loc, struct node **parent){
    struct node *ptr, *pptr;
    if(root == NULL){
        *loc = NULL;
        *parent = NULL;
        return;
    }
    if(item == root -> info){
        *loc = root;
        *parent = NULL;
        return;
    }
    if(item > root -> info)
        ptr = root -> right;
    else 
        ptr = root -> left;
    pptr = root;
    while(ptr != NULL){
        if(item == ptr -> info){
            *loc = ptr;
            *parent = pptr;
            return;
        }
        else if(item > ptr -> info){
            pptr = ptr;
            ptr = ptr -> right;
        }
        else{
            pptr = ptr;
            ptr = ptr -> left;
        }
    }
    *loc = NULL;
    *parent = NULL;
}
void case_a(struct node *loc, struct node *par){
    if(par == NULL)
        root = NULL;
    else if(loc == par -> left)
        par -> left = NULL;
    else 
        par -> right = NULL;
}
void case_b(struct node *loc, struct node *par){
    struct node *child;
    if(loc -> left == NULL)
        child = loc -> right;
    else 
        child = loc -> left;
    if(par == NULL)
        root = child;
    else if(loc == par -> right)
        par -> right = child;
    else
        par -> left = child;
}
void case_c(struct node *loc, struct node *par){
    struct node *suc, *parsuc, *ptr, *pptr;
    ptr = loc -> right;
    pptr = loc;
    while(ptr -> left != NULL){
        pptr = ptr;
        ptr = ptr -> left;
    }
    suc = ptr;
    parsuc = pptr;
    if(suc -> left == NULL && suc -> right == NULL)
        case_a(suc, parsuc);
    else
        case_b(suc, parsuc);
    suc -> left = loc -> left;
    suc -> right = loc -> right;
    if(par == NULL)
        root = suc;
    else if(loc == par -> left)
        par -> left = suc;
    else
        par -> right = suc;
}
void delete(int item){
    struct node *ptr, *loc, *par;
    if(root == NULL){
        printf("Tree Empty\n");
        return;
    }
    find(item, &loc, &par);
    if(loc == NULL){
        printf("Item Not found\n");
        return;
    }
    if(loc -> right == NULL && loc -> left == NULL)
        case_a(loc, par);
    else if((loc -> right != NULL && loc -> left == NULL)||(loc -> right == NULL && loc -> left != NULL))
        case_b(loc, par);
    else 
        case_c(loc, par);
    free(loc);
}
int count(struct node *p){
    if(p == NULL){
        printf("Tree empty\n");
        return 0;
    }
    else if(p -> left == NULL && p -> right == NULL)
        return 1;
    else
        return 1 + count(p -> left) + count(p -> right);
}
void main(){
    int item, ch, ch_1, no_n;
    struct node *ptr;
    root = NULL;
    while(1){
        printf("Select from the below menu:\n");
        printf("1. Insert BST\n");
        printf("2. Traverse\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Count\n");
        printf("6. Exit\n");
        printf("Enter Choice:");
        scanf("%d", &ch);
        switch(ch){
            case 1: printf("Enter item:");
                    scanf("%d", &item);
                    insert_bst(item);
                    break;
            case 2: printf("Enter the Traversal order:\n");
                    printf("1. PreOrder\n");
                    printf("2. InOrder\n");
                    printf("3. PostOrder\n");
                    scanf("%d", &ch_1);
                    switch(ch_1){
                        case 1: preorder(root);
                                break;
                        case 2: inorder(root);
                                break;
                        case 3: postorder(root);
                                break;
                        default: printf("Wrong choice\n");
                    }
                    break;
            case 3: printf("Enter Item to delete:");
                    scanf("%d", &item);
                    delete(item);
                    break;
            case 4: printf("Enter Item to search:");
                    scanf("%d", &item);
                    ptr = search(item);
                    if(ptr != NULL)
                        printf("Search Successful Item = %d\n", ptr -> info);
                    else
                        printf("Search Uncessful\n");
                    break;
            case 5: no_n = count(root);
                    printf("The Number of Nodes are: %d\n", no_n);
                    break;
            case 6: exit(0);
            default: printf("Wrong choice\n");
        }
    }
}