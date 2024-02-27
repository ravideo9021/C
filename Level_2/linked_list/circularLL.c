#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *tail = NULL;

void addAtFirst();
void addAtEnd();
void display();
int length();
void delete();

int main(){
    int choice;
    printf("1. Add node at First\n2. Add node at End\n3. Length of list\n");
    printf("4. Delete\n5. Display\n0. Exit\n");

    while(1){
        printf("\nPress(0-3): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addAtFirst();
                break;
            case 2:
                addAtEnd();
                break;
            case 3:
                printf("The length of list is: %d", length());
                break;
            case 4:
                delete();
                break;
            case 5:
                display();
                break;
            case 0:
                exit(1);
            default:
                printf("\nInvalid Choice");
        }
    }
}

void addAtFirst(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter a Value: ");
    scanf("%d", &temp->data);

    if(tail == NULL){
        tail = temp;
        tail->link = tail;
        return;
    }

    temp->link = tail->link;
    tail->link = temp;
}

void addAtEnd(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter a Value: ");
    scanf("%d", &temp->data);

    if(tail == NULL){
        tail = temp;
        tail->link = tail;
        return;
    }

    temp->link = tail->link;
    tail->link = temp;
    tail = tail->link;
}


void display(){
    struct node *p = tail->link;

    do{
        printf("%d -> ", p->data);
        p = p->link;
    }while(p != tail->link);
}

int length(){
    struct node *p = tail->link;
    int count = 0;
    do{
        count++;
        p = p->link;
    }while(p != tail->link);

    return count;
}

void delete(){
    int n;
    printf("What node to Delete: ");
    scanf("%d", &n);
    
    if(n > length()){
        printf("\nInvalid Input");
        return;
    }

    if(n == 1){
        struct node *p;
        p = tail->link;
        tail->link = p->link;
        p->link = NULL;
        free(p);
        return;
    }

    if (n == length()){
        struct node *p = tail;
        while(tail->link != p){
            tail = tail->link;
        }
        tail->link = p->link;
        p->link = NULL;
        free(p);
        return;
    }

    struct node *p = tail->link;
    struct node *q;

    for(int i = 1; i < n; i++){
        q = p;
        p = p->link;
    }
    q->link = p->link;
    p->link = NULL;
    free(p);
}