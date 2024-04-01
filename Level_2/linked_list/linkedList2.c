#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *root = NULL;

void append();
void addNode();
void addNodeAtFirst();
int length();
void display();
void delete();
void reverse();

int main(){
    int choice;

    printf("1. Add Node at First\n2. Add Node at Last\n3. Add Node at nth position\n");
    printf("4. Length of List\n5. Delete a Node\n6. Reverese the list\n7. Display all Data\n");
    printf("0. exit\n");
    
    while(1){
        printf("\nPress(0-7): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addNodeAtFirst();
                break;
            case 2:
                append();
                break;
            case 3:
                addNode();
                break;
            case 4:; 
                printf("The kength of node is %d", length());
                break;
            case 5:
                delete();
                break;
            case 6:
                reverse();
                break;
            case 7:
                display();
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("\nInvalid Choice");
        }
    }

    return 0;
}


void append(){
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));

    printf("\nEnter a Value: ");
    scanf("%d", &temp->data);

    if (root == NULL){
        root = temp;
        return;
    }

    struct node *p;
    p = root;

    while(p->link != NULL){
        p = p->link;
    }

    p->link = temp;
    return;
}


void addNode(){
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node));

    printf("\nEnter a Value: ");
    scanf("%d", &temp->data);

    int n;
    
    printf("\nAdd node at postion: ");
    scanf("%d", &n);

    if (n > length()+1){
        printf("There is %d nodes, value cannot be added at position %d", length(), n);
        return;
    }

    if (root == NULL){
        root = temp;
        return;
    }

    if (n == 1){
        temp->link = root->link;
        root = temp;
        return;
    }

    if (n == length()+1){
        struct node *p;
        p = root;

        while(p->link != NULL){
            p = p->link;
        }

        p->link = temp;
        return;
    }

    struct node *p;
    p = root;

    int i = 1;
    while(i < n-1){
        p = p->link;
        i++;
    }

    temp->link = p->link;
    p->link = temp;

    return;
}


void addNodeAtFirst(){
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node));

    printf("\nEnter a Value: ");
    scanf("%d", &temp->data);

    if (root == NULL){
        root = temp;
        return;
    }

    temp->link = root;
    root = temp;

    return;
}


int length(){
    int n = 0;
    
    struct node *p;
    p = root;

    while(p != NULL){
        p = p->link;
        n++;
    }

    return n;
}


void display(){
    struct node *p;
    p = root;
    int i = 1;
    while(p != NULL){
        printf("Data %d: %d\n", i, p->data);
        p = p->link;
        i++;
    }

    return;
}


void delete(){
    int n;
    printf("Which Node to Delete: ");
    scanf("%d", &n);

    if (n > length()){
        printf("\nThere are %d node", length());
        return;
    }

    if (n == 1){
        struct node *p;
        p = root;
        root = p->link;
        free(p);
        return;
    }

    struct node *p;
    struct node *q;

    p = root;
    int i = 1;
    while(i < n){
        q = p;
        p = p->link;
        i++;
    }
    q->link = p->link;
    free(p);
}


void reverse(){
    struct node *p;
    struct node *c;
    struct node *n;

    p = NULL;
    c = root;
    n = c->link;

    while(n != NULL){
        c->link = p;
        p = c;
        c = n;
        n = n->link;
    }
    c->link = p;
    root = c;

    return;
}