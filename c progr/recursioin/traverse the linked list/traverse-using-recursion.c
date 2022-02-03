#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int traversal(struct Node* head)
{
   if(head==NULL)
   return 0;

   printf("%d  ",head->data);
   return traversal(head->next);
}

int main()
{
struct Node* head=malloc(sizeof(struct Node));
struct Node* second=malloc(sizeof(struct Node));
struct Node* third=malloc(sizeof(struct Node));
struct Node* forth=malloc(sizeof(struct Node));

//   place the value in each node and linking node.....

head->data=2;
head->next=second;

second->data=4;
second->next=third;

third->data=6;
third->next=forth;

forth->data=8;
forth->next=NULL;

traversal(head);
}