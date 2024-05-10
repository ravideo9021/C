#include<stdio.h>
#include<stdlib.h>
void display();
struct node
{
    int data;
    struct node*next;
};
struct node*root = NULL;
void append()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a Data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {struct node*a;
    a=root;
   while(a->next!=NULL)
   {
        a=a->next;
   }
    a->next=temp;

   }
}


void AddAtFirst()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter a Data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->next = root;
        root = temp;
   }
}

void display()
{
    struct node*p =root;
    while(p != NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
}

int main()
{
    append();
    append();
    append();
    append();
    AddAtFirst();
    display();
}   
