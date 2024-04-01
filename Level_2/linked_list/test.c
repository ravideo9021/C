#include <stdio.h>
#include <stdlib.h>

struct node {
    int coefficient, exponent;
    struct node *link;
};

struct node *root = NULL;
struct node *root1 = NULL;
struct node *root2 = NULL;

void SortedPolynomial1(int coeff, int expo);
void SortedPolynomial2(int coeff, int expo);
void addPolynomial();
void SortedPolynomial(int coeff, int expo);
void display();

int main(void) {
    int coeff, exponent;
    int choice;

    while (1) {
        printf("\nPress(1.Add Node in polynomial 1 | 2.Add node in Polynomial 2 | 3.Display | 4.Exit): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Add polynomial 1: \n");
                printf("Enter the Coefficient: ");
                scanf("%d", &coeff);
                printf("Enter the Exponent: ");
                scanf("%d", &exponent);
                SortedPolynomial1(coeff, exponent);
                break;

            case 2:
                printf("Add polynomial 2: \n");
                printf("Enter the Coefficient: ");
                scanf("%d", &coeff);
                printf("Enter the Exponent: ");
                scanf("%d", &exponent);
                SortedPolynomial2(coeff, exponent);
                break;

            case 3:
                addPolynomial();
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}

void SortedPolynomial1(int coeff, int expo) {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->link = NULL;
    temp->coefficient = coeff;
    temp->exponent = expo;

    if (root1 == NULL || expo > root1->exponent) {
        temp->link = root1;
        root1 = temp;
    }
    else {
        struct node *p, *q;
        p = root1;
        q = p->link;

        while (p != NULL && q != NULL && expo > q->exponent) {
            p = p->link;
            q = q->link;
        }
        temp->link = p->link;
        p->link = temp;
    }
}

void SortedPolynomial2(int coeff, int expo) {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->link = NULL;
    temp->coefficient = coeff;
    temp->exponent = expo;

    if (root2 == NULL || expo > root2->exponent) {
        temp->link = root2;
        root2 = temp;
    }
    else {
        struct node *p, *q;
        p = root2;
        q = p->link;

        while (p != NULL && q != NULL && expo > q->exponent) {
            p = p->link;
            q = q->link;
        }
        temp->link = p->link;
        p->link = temp;
    }
}

void addPolynomial() {
    struct node *p, *q;
    p = root1;
    q = root2;

    while (p != NULL || q != NULL) {
        if (p == NULL) {
            while (q != NULL) {
                SortedPolynomial(q->coefficient, q->exponent);
                q = q->link;
            }
            break;
        }
        else if (q == NULL) {
            while (p != NULL) {
                SortedPolynomial(p->coefficient, p->exponent);
                p = p->link;
            }
            break;
        }
        else {
            if (p->exponent > q->exponent) {
                SortedPolynomial(p->coefficient, p->exponent);
                p = p->link;
            }
            else if (p->exponent < q->exponent) {
                SortedPolynomial(q->coefficient, q->exponent);
                q = q->link;
            }
            else {
                SortedPolynomial(p->coefficient + q->coefficient, p->exponent);
                p = p->link;
                q = q->link;
            }
        }
    }
}

void SortedPolynomial(int coeff, int expo) {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->link = NULL;
    temp->coefficient = coeff;
    temp->exponent = expo;

    if (root == NULL || expo > root->exponent) {
        temp->link = root;
        root = temp;
    }
    else {
        struct node *p, *q;
        p = root;
        q = p->link;

        while (p != NULL && q != NULL && expo > q->exponent) {
            p = p->link;
            q = p->link;
        }
        temp->link = p->link;
        p->link = temp;
    }
}

void display() {
    struct node *p = root;
    int i = 1;

    while (p != NULL) {
        printf("Node %d: Coefficient: %d\t Exponent: %d\n", i, p->coefficient, p->exponent);
        p = p->link;
        i++;
    }
}