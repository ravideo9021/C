#include <stdio.h>
#include <stdlib.h>
#define size 10

struct node{
    int data;
    struct node *link;
};

struct node *first = NULL;
struct node *last = NULL;

void enqueue();
void dequeue();
void display();

int main(){
    int choice;
    printf("1. Insert\n2. Delete\n3. Display\n0. Exit\n");

    while(1){
        printf("\nPress(0-3): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid Choice");
        }
    }
return 0;
}

void enqueue(){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->link = NULL;

    printf("Enter a Value: ");
    scanf("%d", &temp->data);

    if (first == last && first == NULL){
        first = last = temp;
        return;
    }
    
    last->link = temp;
    last = temp;
}


void dequeue(){
    if (first == last && first == NULL){
        printf("Underflow/Queue is empty");
        return;
    }

    struct node *p = first;
    first = first->link;
    p->link = NULL;
    free(p);
}


void display(){
    struct node *p = first;
    int i = 1;
    while(p != NULL){
        printf("Data %d: %d\n", i, p->data);
        p = p->link;
        i++;
    }
}