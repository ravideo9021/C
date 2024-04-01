#include <stdio.h>
#include <stdlib.h>

struct node{
    int cofficient, expo;
    struct node *link;
};
struct node *root = NULL;
struct node *root1 = NULL;
struct node *root2 = NULL;

void SortedPolynomal(int coff, int expo, struct node *root);
void addPolynomial();
void resultPolynomial(int coeff, int expo);
void display();


int main(void){
    int coeff, exponent;
    int choice;

    while(1){
        printf("\nPress(1.Add Node in polynimal 1 | 2.Add node in Poynomial 2 | 3.Display | 4.Exit): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Add plonmial 1: \n");
                printf("Enter the Cofficient: ");
                scanf("%d", &coeff);
                printf("Enter the Exponent: ");
                scanf("%d", &exponent);

                SortedPolynomal(coeff, exponent, root1);
                break;

            case 2:
                printf("Add plonmial 2: \n");
                printf("Enter the Cofficient: ");
                scanf("%d", &coeff);
                printf("Enter the Exponent: ");
                scanf("%d", &exponent);

                SortedPolynomal(coeff, exponent, root2);
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);
            
            default:
                printf("Invalid Choice");
        }
    }
}

void SortedPolynomal(int coff, int expo, struct node *root){
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

        while(p != NULL && q != NULL && expo > q->expo){
            p = p->link;
            q = p->link;
        }
        temp->link = p->link;
        p->link = temp;
    }
}

void addPolynomial(){
    struct node *p, *q;
    p = root1;
    q = root2;

    while(p->link != NULL && q->link != NULL){
        if(p->expo > q->expo){
            resultPolynomial(p->cofficient, p->expo);
            p = p->link;
        }else if(p->expo < q->expo){
            resultPolynomial(q->cofficient, q->expo);
            q = q->link;
        }else{
            resultPolynomial(p->cofficient+q->cofficient, p->expo);
            p = p->link;
            q = q->link;
        }
    }
}

void resultPolynomial(int coeff, int expo){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->cofficient = coeff;
    temp->expo = expo;
    temp->link = NULL;

    if(root == NULL){
        root = temp;
    }else{
        struct node *p = root;
        while(p->link != NULL){
            p = p->link;
        }
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
