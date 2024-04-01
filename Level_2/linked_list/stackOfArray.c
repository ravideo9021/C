#include <stdio.h>
#include <stdlib.h>
#define size 10

int stack[size];

int top = -1;

void push(){
    if (top >= 9){
        printf("Stack is Full");
    }
}