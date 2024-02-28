#include <stdio.h>
#include <stdlib.h>
#define size 10

int queue[size];

int f = -1, l = -1;

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
    int element;
    printf("Enter a Value: ");
    scanf("%d", &element);

    if (f == l && l == -1){
        f = l = 0;
        queue[f] = element;
        return;
    }
    if (l == size-1){
        printf("overflow/size is full");
        return;
    }

    l += 1;
    queue[l] = element;
}


void dequeue(){
    if(f == l && l == -1){
        printf("Underflow/queue is empty");
        return;
    }

    if(f == l){
        f = l = -1;
        return;
    }

    f += 1;
}


void display(){
    int j = 1;
    for (int i = f; i <= l; i++){
        printf("Data %d: %d\n", j, queue[i]);
        j++;
    }
}