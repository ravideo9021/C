#include <stdio.h>
#define SIZE 10

int queue[SIZE];

int f = -1, r = -1;

//insertion in queue
void enqueue(int item){ 
    if (r == SIZE-1){  //queue is full
        printf("\nQueue is full!!!");
        return;
    }
    if(f == -1  && r == -1){ //if queue is empty
        f = r = 1;
        queue[r] = item;
        return;
    }
    r = r+1;  
    queue[r] = item;
}

//deletion in queue
void dequeue(){
    if (f == -1 && r == -1){ //if queue is empty
        printf("\nQueue is empty!!!");
        return;
    }
    if (f == r){ //only one element inside queue
        printf("\n%d is deleted", queue[f]);
        f = r = -1;
        return;
    }
    printf("\n%d is deleted", queue[f]);
    f = f+1;
}

void display(){
    if(f == -1 && r == -1){
        printf("\nqueue is empty!!!");
        return;
    }
    printf("\n");
    for(int i = f; i <=r; i++){
        printf("%d\t", queue[i]);
    }
}

int main(void){
    enqueue(10);
    enqueue(5);
    enqueue(20);
    enqueue(15);
    display();
    dequeue();
    display();
}