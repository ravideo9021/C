#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *root = NULL;

void AddNode();
void display();
int length();
void delete();

int main()
{
    printf("1. Add Node\n");
    printf("2. length\n3. Display all Data\n4. Delete\n0. Exit\n");

    while(1){
        int choice;
        printf("\nPress(0-4): ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                AddNode();
                break;

            case 2:
                printf("length = %d\n", length());
                break;
                
            case 3:
                display();
                break;
                
            case 4:
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


void AddNode(){
    int n;
    printf("Add node at: ");
    scanf("%d", &n);

    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->link = NULL; 

    if (root == NULL){
        root = temp;
        return;
    }
    if (n == 1){
        temp->link = root;
        root = temp;
    }
    else{
        
    }
}

void display()
{
    struct node *p;
    p = root;
    
    while (p != NULL)
    {
        printf("Data: %d\n", p->data);
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