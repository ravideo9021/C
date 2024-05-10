#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* root = NULL;

int length(){
    int count = 0;
    struct node* p = root;
    while(p != NULL){
        count++;
        p = p->next;
    }
    return count;
}

void insertNode(int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if(root == NULL){
        root = temp;
        return;
    }
    int n;
    printf("Add Node at Posotion: ");
    scanf("%d", &n);

    if(n > length()+1 || n < 1){
        printf("Invalid Position\n");
        return;
    }
    if(n == 1){
        temp->next = root;
        root = temp;
        return;
    }

    struct node* p = root;
    for(int i = 1; i < n-1 && p->next != NULL; i++){
        p = p->next;
    }
    temp->next = p->next;
    p->next = temp;
}

void display(){
    struct node * p = root;
    while(p != NULL){
        printf("%d -> ", p->data);
        p = p->next;
    }
}

int main(){
    insertNode(3);
    insertNode(10);
    insertNode(4);
    insertNode(23);
    insertNode(7);
    insertNode(15);
    display();
}