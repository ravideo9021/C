#include <stdio.h>
#include <stdlib.h>


struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* middleOfList(struct ListNode* head1){
    struct ListNode* middle = NULL;
    struct ListNode* middlePlus = head1;
    struct ListNode* fast = head1;

    if (head1 == NULL){
        return NULL;
    }
    if (head1->next == NULL){
        return head1;
    }
    while(fast != NULL && fast->next != NULL){
        middle = middlePlus;
        middlePlus = middlePlus->next;
        fast = fast->next->next;
    }
    return middle;
}

struct ListNode* mergeTwoList(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* head = NULL;
    struct ListNode* p = NULL;

    // Determine the head of the merged list
    if (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            head = list1;
            list1 = list1->next;
        } else {
            head = list2;
            list2 = list2->next;
        }
        p = head;
    } else if (list1 != NULL) {
        return list1;
    } else if (list2 != NULL) {
        return list2;
    } else {
        return NULL;
    }

    // Merge the lists
    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            p->next = list1;
            list1 = list1->next;
        } else {
            p->next = list2;
            list2 = list2->next;
        }
        p = p->next;
    }

    // Append remaining nodes from list1 or list2
    if (list1 != NULL) {
        p->next = list1;
    } else if (list2 != NULL) {
        p->next = list2;
    }

    return head;
}


struct ListNode* mergeshortList(struct ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    struct ListNode* middle = middleOfList(head);
    struct ListNode *middlePlus = middle->next;
    middle->next = NULL;

    struct ListNode* left = mergeshortList(head);
    struct ListNode* right = mergeshortList(middlePlus);
    return mergeTwoList(left, right);
}

void PrintList(struct ListNode* head){
    while(head != NULL){
        printf("%d-> ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main(void){
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 4;
    head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->val = 1;
    head->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->val = 3;

    PrintList(head);

    struct ListNode* list = mergeshortList(head);
    printf("Merged List: ");
    PrintList(list);
}