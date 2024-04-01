#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *root = NULL;

void AddNode(int value, int position){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->link = NULL;
    temp->data = value;

    if (position == 1){
        temp->link = root;
        root = temp;
        return;
    }
    struct node *p =root;
    for (int i = 1; i < position-1 && p != NULL; i++){
        p = p->link;
    }
    temp->link = p->link;
    p->link = temp;
}

int position(int data){
    struct node *temp;
    temp = root;
    int pos = 1;

    if (temp == NULL){
        return pos;
    }

    while(temp != NULL && temp->data < data){
        pos++;
        temp = temp->link;
    }

    return pos;
}

void display(){
    struct node *temp;
    temp = root;
    if (temp == NULL){
        printf("List is empty");
        return;
    }
    while(temp != NULL){
        printf("%d ->", temp->data);
        temp = temp->link;
    }
}

int main(){
    int choice, pos, data;
    while(1){
        printf("\nPress(1. Add Node 2. Dispaly 3. Exit): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the data: ");
                scanf("%d", &data);
                pos = position(data);
                AddNode(data, pos);
                break;
            case 2:
                display();
                break;
            case 3:
                exit(1);
            default:
                printf("Invalid Choice");
        }
    }
}