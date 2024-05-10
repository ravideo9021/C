#include <stdio.h>
#include <stdlib.h>


struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* head = NULL;
    struct ListNode* p = NULL;

    while(list1 != NULL && list2 != NULL){
        struct ListNode* temp;
        temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->next = NULL;
        
        if(list1->val < list2->val){
            temp->val = list1->val;
            list1 = list1->next;
        }else{
            temp->val = list2->val;
            list2 = list2->next;
        }


        if(head == NULL){
            head = temp;
            p = head;
        }else{
            p->next = temp;
            p = p->next;
        }
    }

    if(list1 != NULL){
        p->next = list1;
    }

    if(list2 != NULL){
        p->next = list2;
    }
    return head;
}

void PrintList(struct ListNode* head){
    while(head != NULL){
        printf("%d-> ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main(void){
    struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    head1->val = 2;
    head1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head1->next->val = 5;
    head1->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head1->next->next->val = 10;

    struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    head2->val = 1;
    head2->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head2->next->val = 3;
    head2->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head2->next->next->val = 7;

    PrintList(head1);
    PrintList(head2);

    struct ListNode* head = mergeTwoLists(head1, head2);
    PrintList(head);
}