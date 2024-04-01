#include <stdio.h>
#include <stdlib.h>

struct node{
    int cofficient, expo;
    struct node *link;
};

struct node *root = NULL;

void SortedPolynomal(int coff, int expo){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->link = NULL;
    temp->cofficient = coff;
    temp->expo = expo;

    if(root == NULL || expo > root->expo){
        temp->link = root;
        root = temp;
    }else {
        struct node *p;
        struct node *q;
        p = root;
        q = p->link;

        while(p != NULL || expo > q->expo){
            p = p->link;
            q = p->link;
        }
        temp->link = p->link;
        p->link = temp;
    }
}

void display(){
    struct node *p = root;
    int i = 1;

    while(p != NULL){
        printf("Node %d: Coefficient: %d\t Exponent: %d\n", i, p->cofficient, p->expo);
        p = p->link;
        i++;
    }
}


int main(){
    int coeff, exponent;
    int choice;

    while(1){
        printf("\nPress(1.Add Node 2.Display 3.Exit): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the Cofficient: ");
                scanf("%d", &coeff);
                printf("Enter the Exponent: ");
                scanf("%d", &exponent);

                SortedPolynomal(coeff, exponent);
                break;

            case 2:
                display();
                break;

            case 3:
                exit(0);
            
            default:
                printf("Invalid Choice");
        }
    }
}