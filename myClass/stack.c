#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int data){
    if(top == SIZE-1){
        printf("Stack is full/ stack overflow\n");
        return;
    }
    top = top+1;
    stack[top] = data;
    printf("%d is pushed\n", data);
}

void display(){
    for(int i=top; i>=0; i--){
        printf("%d\t", stack[i]);
    }
}

int main(){
    push(2);
    push(4);
    push(3);
    push(10);
    push(15);
    push(100);
    display();
}