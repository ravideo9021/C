#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

    struct node *root = NULL;

void append();
void addAtFirst();
void addAt();
int length();
void display();
void delete();
void reversePrint();


int main(){
    int choice;
    printf("1. Add a node\n2. Add node at First\n3. Add node at end\n4. Length of List\n");
    printf("5. Reverse Print the list\n6. Delete a Node\n7. Display all Data\n0. Exit\n");
    
    while(1){
        printf("\nPress(0-7): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addAt();
                break;

            case 2:
                addAtFirst();
                break;

            case 3:
                append();
                break;

            case 4:
                printf("The length of the list is: %d",length());
                break;

            case 5:
                reversePrint();
                break;

            case 6:
                delete();
                break;

            case 7:
                display();
                break;

            case 0:
                exit(1);
                break;
        }
    }
}

void append(){
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;

    printf("Enter a Value: ");
    scanf("%d", &temp->data);

    if (root == NULL){
        root = temp; 
        return;
    }

    struct node *p;
    p = root;

    while(p->right != NULL){
        p = p->right;
    }
    p->right = temp;
    temp->left = p;
}


void addAtFirst(){
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;

    printf("Enter a Value: ");
    scanf("%d", &temp->data);

    if (root == NULL){
        root = temp; 
        return;
    }

    temp->right = root;
    root->left = temp;
    root = temp;
}


void addAt(){
    int n;
    printf("Add Node at Place: ");
    scanf("%d", &n);

    if (n > length()+1){
        printf("the list has %d elements", length());
        return;
    }
    if(n < 0){
        printf("Please Enter a positive Number");
        return;
    }

    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;

    printf("Enter a Value: ");
    scanf("%d", &temp->data);

    if (root == NULL){
        root = temp; 
        return;
    }

    if (n == 1){
    temp->right = root;
    root->left = temp;
    root = temp;
    return;
    }

    if (n == length()+1){
        struct node *p;
        p = root;

        while(p->right != NULL){
            p = p->right;
        }
        p->right = temp;
        temp->left = p;
    }

    struct node *p;
    for(int i = 1; i < n-1; i++){
        p = p->right;
    }
    temp->right = p->right;
    temp->left = p;
    p->right = temp;
}


int length(){
    int count = 0;

    struct node *p;
    p = root;

    while(p != NULL){
        p = p->right;
        count += 1;
    }
    return count;
}


void display(){
    struct node *p;
    p = root;

    int i = 1;
    while(p != NULL){
        printf("Data %d: %d\n", i, p->data);
        p = p->right;
        i++;
    }
}


void delete(){
    int x;
    printf("Which node to delete: ");
    scanf("%d", &x);

    if (x > length()){
        printf("Length of the list id %d", length());
        return;
    }

    if (x < 0){
        printf("please Enter a positive number");
        return;
    }

    if (x == 1){
        struct node *p;
        p = root;
        root = root->right;
        root->left = NULL;
        free(p);
        return;
    }

    struct node *p;
    struct node *c;
    struct node *n;

    p = NULL;
    c = root;

    for(int i = 1; i < x ; i++){
        n = c->right;
        p = c;
        c = n;
    }
    n = c->right;

    p->right = c->right;
    n->left = p;

    free(c);
    return;
}


void reversePrint(){
    struct node *p = root;

    while(p->right != NULL){
        p = p->right;
    }

    int i = 1;
    while(p != NULL){
        printf("Data %d: %d\n", i, p->data);
        p = p->left;
        i++;
    }

    return;
}