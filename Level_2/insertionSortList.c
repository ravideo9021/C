#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node with given data at the beginning of the list
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to perform insertion sort on the linked list
void insertionSort(struct Node** head_ref) {
    struct Node *sorted = NULL;
    struct Node *current = *head_ref;
    
    while (current != NULL) {
        struct Node *next = current->next;
        struct Node *prev = NULL;
        
        // Find the position to insert current node in the sorted list
        while (sorted != NULL && sorted->data < current->data) {
            prev = sorted;
            sorted = sorted->next;
        }
        
        // If the node needs to be inserted at the beginning
        if (prev == NULL) {
            current->next = sorted;
            sorted = current;
        } else { // Insertion elsewhere in the list
            prev->next = current;
            current->next = sorted;
        }
        
        current = next;
    }
    
    // Update the head pointer to point to the sorted list
    *head_ref = sorted;
}

int main() {
    struct Node* head = NULL;
    push(&head, 12);
    push(&head, 11);
    push(&head, 13);
    push(&head, 5);
    push(&head, 6);

    printf("Linked List before sorting \n");
    printList(head);

    insertionSort(&head);

    printf("Linked List after sorting \n");
    printList(head);

    return 0;
}
