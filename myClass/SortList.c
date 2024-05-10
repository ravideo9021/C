#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node*next;
};

struct node*root = NULL;


void append(int data)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next=NULL;
    if(root==NULL){
        root=temp;
    }else{
        struct node*a = root;
        while(a->next!=NULL){
            a=a->next;
        }
        a->next=temp;
   }
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int length(struct node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

void merge(int* arr, int low, int mid, int high){
    int i = low, j = mid+1, k = 0;
    int *b = (int *)malloc((high-low+1) * sizeof(int));

    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            b[k] = arr[i];
            i++, k++;
        }else{
            b[k] = arr[j];
            j++, k++;
        }
    }

    while(i <= mid){
        b[k] = arr[i];
        i++, k++;
    }
    while(j <= high){
        b[k] = arr[j];
        j++, k++;
    }
    k = 0;
    for(i = low; i < high; i++){
        arr[i] = b[k];
        k++;
    }
    free(b);
}


void mergeSort(int* arr, int low, int high){
    if(low < high){
        int mid = low + (high-low)/2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

void sortList(struct node* head) {
    int len = length(head);
    int arr[len];

    struct node* p = head;
    int i = 0;
    while(p != NULL){
        arr[i] = p->data;
        p = p->next;
        i++;
    }

    mergeSort(arr, 0, len-1);

    p = head;
    i = 0; 
    while(p != NULL){
        p->data = arr[i];
        p = p->next;
        i++;
    }

}


void display(){
    struct node*p =root;
    while(p != NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
}

int main(){

    append(3);
    append(10);
    append(13);
    append(2);
    append(5);

    sortList(root);

    display();

    return 0; 
}   
