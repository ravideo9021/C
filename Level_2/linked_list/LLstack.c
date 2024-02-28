#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *top = NULL;

void push();
void pop();
void peek();
void display();

int main(){
    int choice;
    printf("1. Push a Element\n2. Pop a Element\n3. Peek of stack\n4. Display\n0. exit\n");

    while(1){
        printf("\nPress(0-4): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("Invalid Choice");
                break;
        }
    }

return 0;
}

void push(){
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->link = NULL;

    printf("Enter a Value: ");
    scanf("%d", &temp->data);

    if(top == NULL){
        top = temp;
        return;
    }
    temp->link = top;
    top = temp;
}


void pop(){
    if (top == NULL){
        printf("Stack is Empty");
        return;
    }
    struct node *temp = top;
    top = top->link;
    temp->link = NULL;
    free(temp);
}


void peek(){
    printf("Peek = %d", top->data);
}


void display(){
    struct node *p = top;
    int i = 1;
    while(p != NULL){
        printf("Data %d: %d\n", i, p->data);
        p = p->link;
        i++;
    }
}
