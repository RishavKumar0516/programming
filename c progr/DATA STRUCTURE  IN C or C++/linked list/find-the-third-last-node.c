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
   printf("\n");
}

void the_third_last(struct Node* head){
   struct Node* p=head;
   struct Node* q=head->next->next;
   while(q->next !=NULL){
       q=q->next;
       p=p->next;
   }
   printf("\n%d",p->data);
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
the_third_last(head);
}