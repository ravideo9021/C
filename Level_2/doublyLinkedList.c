#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

struct node *root = NULL;

void append();
void addAtFirst();
void addAfter();
int length();
void delete();
void display();


int main(){
    int choice;
    printf("1. Add node at First Place\n2. Add node at Last  Place\n3. Add Node After\n4. length\n5. Delete a node\n6. Display all Data\n");
    printf("0. Exit\n");
    
    while(1){
        printf("\nPress(0-6): ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                addAtFirst();
                break;
                
            case 2:
                append();
                break;
                
            case 3:
                addAfter();
                break;
                
            case 4:
                printf("Length of the list: %d", length());
                break;
                
            case 5:
                delete();
                break;
                
            case 6:
                display();
                break;
                
            case 0:
                exit(1);
                break;
            
            default:
                printf("Invalid Choice");
            
        }
    }
}

void append(){
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node));
    
    temp->left = NULL;
    temp->right = NULL;
    
    printf("Enter a Value: ");
    scanf("%d", &temp->data);
    
    if(root == NULL){
        root = temp;
        return;
    }
    
    struct node *p = root;
    while(p->right != NULL){
        p = p->right;
    }
    
    p->right = temp;
    temp->left = p;
    
}


void addAtFirst(){
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    
    temp->left = NULL;
    temp->right = NULL;
    
    printf("Enter a Value: ");
    scanf("%d", &temp->data);
    
    if(root == NULL){
        root = temp;
        return;
    }
    
    root->left = temp;
    temp->right = root;
    root = temp;
    
}


void addAfter(){
    int len = length();
    int loc;
    printf("Add node after Location: ");
    scanf("%d", &loc);
    
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    
    temp->left = NULL;
    temp->right = NULL;
    
    printf("Enter a Value: ");
    scanf("%d", &temp->data);
    
    if(root == NULL){
        root = temp;
        return;
    }
    
    if (loc > len+1){
        printf("Invalid location");
        return;
    }

    if (loc == 0){
        root->left = temp;
        temp->right = root;
        root = temp;
        return;
    }

    if(loc == len){
        struct node *p = root;
        while(p->right != NULL){
            p = p->right;
        }
        
        p->right = temp;
        temp->left = p;
        return;
    }

    struct node *p = root;
    struct node *q;
    
    for (int i = 1; i < loc; i++){
        p = p->right;
        q = p->right;
    }
    
    temp->right = q;
    p->right = temp;
    q->left = temp;
    
}


int length(){
    int count = 0;
    struct node *p = root;
    
    while(p != NULL){
        p = p->right;
        count += 1;
    }
    
    return count;
}


void delete(){}


void display(){
    struct node *p = root;
    int i = 1;
    while(p != NULL){
        printf("Data %d: %d\n", i, p->data);
        p = p->right;
        i++;
    }
}


