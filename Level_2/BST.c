#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* root = NULL;  //root node

//fuction to insert node in BST
void insert(int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL){
        printf("Memory allocation Failed\n");
        return;
    }
    temp->data = data;
    temp->left = temp->right = NULL;

    if(root == NULL)  //there is no node in BST
    { 
        root = temp;
        return;
    }
    struct node* s = root;
    struct node* p = NULL;
    while(s != NULL){
        p = s;
        if(temp->data > s->data){
            s = s->right;
        }else{
            s = s->left;
        }
    }
    if(temp->data > p->data){
        p->right = temp;
    }else{
        p->left = temp;
    }
}

//display BST in inorder
void inorder(struct node* p){
    if(p != NULL){
        inorder(p->left);
        printf("%d ", p->data);
        inorder(p->right);
    }
}

//initialize BST
void initializeTree(){
    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);
    insert(15);
    insert(3);
    insert(9);
}

int main(void){
    initializeTree();
    inorder(root);
}