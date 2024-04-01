#include <stdio.h>
#include <stdlib.h>

#define ADD_NODE 1
#define DISPLAY 2
#define EXIT 3

struct node {
    int coefficient, exponent;
    struct node *link;
};

struct node* addNode(struct node *root, int coeff, int exponent, int loc) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return root;
    }
    newNode->coefficient = coeff;
    newNode->exponent = exponent;
    newNode->link = NULL;

    if (root == NULL) {
        return newNode;
    }

    if (loc == 1) {
        newNode->link = root;
        return newNode;
    }

    struct node *currentNode = root;
    for (int i = 1; i < loc - 1 && currentNode->link != NULL; i++) {
        currentNode = currentNode->link;
    }
    newNode->link = currentNode->link;
    currentNode->link = newNode;

    return root;
}


int position(struct node *root, int coeff, int exponent) {
        if (root == NULL)
            return 1;

        struct node *p = root;
        int loc = 1;

        if (exponent > p->exponent) {
            return 1;
        }

        while (p->link != NULL && exponent < p->link->exponent) {
            p = p->link;
            loc++;
        }

        return loc;
    }

void display(struct node *root) {
        struct node *p = root;
        int i = 1;

        while (p != NULL) {
            printf("Node %d: Coefficient: %d\t Exponent: %d\n", i, p->coefficient, p->exponent);
            p = p->link;
            i++;
        }
    }

int main() {
            struct node *root = NULL;
            int coeff, exponent, pos;
            int choice;
            printf("1: Add Node\n2: Display\n3: Exit\n");

            while (1) {
                printf("\nEnter your choice (1: Add Node, 2: Display, 3: Exit): ");
                scanf("%d", &choice);

                switch (choice) {
                    case ADD_NODE:
                        printf("Enter the Coefficient: ");
                        scanf("%d", &coeff);
                        printf("Enter the Exponent: ");
                        scanf("%d", &exponent);

                        pos = position(root, coeff, exponent);
                        root = addNode(root, coeff, exponent, pos);
                        break;

                    case DISPLAY:
                        display(root);
                        break;

                    case EXIT:
                        exit(0);
                        break;

                    default:
                        printf("Invalid Choice");
                        break;
                }
            }
        }
    }
}