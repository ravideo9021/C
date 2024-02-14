#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *root = NULL;

void addAtFirst();
void addAtEnd();
void addAt();
void display();
int length();
void delete();
void reversePrint(struct node *);

int main()
{
    printf("\n1. Add at 1st\n2. Add at end\n3. Add At nth place\n");
    printf("4. length\n5. Display all Data\n6. Display in reverse\n7. Delete\n0. Exit\n");

    while(1){
        int choice;
        printf("\nPress(0-5): ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                addAtFirst();
                break;
                
            case 2:
                addAtEnd();
                break;
            
            case 3:
                addAt();
                break;
            
            case 4:
                printf("length = %d\n", length());
                break;
                
            case 5:
                display();
                break;
            
            case 6:
                reversePrint(root);
                break;
                
            case 7:
                delete();
                break;

            case 0:
                exit(0);
                break;
            default:
                printf("\nInvalid Choice\n");
        }
    }

    return 0;
}

void addAtFirst(){
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter a Value: ");
    scanf("%d", &temp->data);

    temp->link = root;
    root = temp;
}

void addAtEnd(){
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    
    printf("Enter a Value: ");
    scanf("%d", &temp->data);
    
    if (root == NULL)
    {
        root = temp;
        return;
    }

    struct node *p;
    p = root;
        
    while (p->link != NULL)
    {
        p = p->link;
    }
        
    p->link = temp;
}

void addAt(){
    int n;
    printf("Add node at: ");
    scanf("%d", &n);

    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node));

    printf("Enter a value: ");
    scanf("%d", &temp->data);

    struct node *p;
    struct node *q;
    
    if (n == 1){
        temp->link = root;
        root = temp;
        return;
    }

    p = root;
    if (n == length()+1){
        while (p->link != NULL)
    {
        p = p->link;
    }
        
    p->link = temp;
    return;
    }

    for (int i = 1; i < n; i++){
        q = p;
        p = p->link;
    }
    temp->link = q->link;
    q->link = temp;
}

void display()
{
    struct node *p;
    p = root;
    
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->link;
    }
}

int length(){
    struct node *p;
    p = root;
    int c = 0;
    while(p != NULL){
        c = c+1;
        p = p->link;
    }
    return c;
}

void delete(){
    if (root == NULL){
        printf("\nThere is no Linked List");
        return;
    }

    struct node *p;
    struct node *q;
    int n;
    printf("Which node you want to delete? ");
    scanf("%d", &n);

    if(n > length()){
        printf("\nnode at %d place does not exist", n);
        return;
    }

    p = root;
    
    if (n==1){
        root = p->link;
        p->link = NULL;
        free(p);
        return;
    }

    if (n == length()){
        while (p->link != NULL){
            q = p;
            p = p->link;
        }
        q->link = NULL;
        free(p);
        return;
    }

    int i = 1;
    while(i < n){
        q = p;
        p = p->link;
        i++;
    }
                
    q->link = p->link;
    p->link = NULL;
    free(p);

}

void reversePrint(struct node *p){
    if (p == NULL)
    return;

    reversePrint(p->link);
    printf("%d\t", p->data);
}