#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *root = NULL;

void append(){
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    printf("Input Data: ");
    scanf("%d", &temp->data);

    temp->link = NULL;

    if (root == NULL){
        root = temp;
    }
    else {
        //there is already a linked list so we append temp to it
        struct node *p;
        p = root;
        while (p->link != NULL){
            p = p->link;
        }
        p->link = temp;
    }

}

int main(){
    append();
    return 0;
}