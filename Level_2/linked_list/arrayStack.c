#include <stdio.h>
#include <stdlib.h>

void push();
void peek();
void pop();
void display();

int stack[10];

int top = -1;

int main(){
    int choice;
    printf("1. Push a Element\n2. Pop a Element\n3. Peek of stack\n4. Display\n0.exit\n");

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
            default:
                printf("Invalid Choice");
                break;
        }
    }

return 0;
}

void push(){
    if (top >= 9){
        printf("Stack Overflow");
        return;
    }
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);

    top += 1;
    stack[top] = value;
}


void pop(){
    if (top == -1){
        printf("Stack Underflow");
        return;
    }
    top -= 1;
}


void peek(){
    printf("Peek = %d", stack[top]);
}


void display(){
    for(int i = 0; i <= top; i++){
        printf("Value %d: %d\n", i+1, stack[i]);
    }
}