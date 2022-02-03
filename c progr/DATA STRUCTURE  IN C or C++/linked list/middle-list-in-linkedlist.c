#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
//----------recursive traversal------------
int traversal(struct Node* head)
{
   if(head==NULL)
   return 0;

   printf("%d  ",head->data);
   return traversal(head->next);
}

void find_the_middle_node(struct Node* head){
    struct Node* p=head;
    struct Node* q=head;
    int i=0;
    while(q->next!=NULL){
        q=q->next;
        i++;
        if(i%2==0)
        p=p->next;
    }
    printf("%d",p->data);
}

int main()
{
struct Node* head=malloc(sizeof(struct Node));
struct Node* second=malloc(sizeof(struct Node));
struct Node* third=malloc(sizeof(struct Node));
struct Node* forth=malloc(sizeof(struct Node));
struct Node* fifth=malloc(sizeof(struct Node));

//   place the value in each node and linking node.....

head->data=2;
head->next=second;

second->data=4;
second->next=third;

third->data=6;
third->next=forth;

forth->data=8;
forth->next=fifth;

fifth->data=10;
fifth->next=NULL;

traversal(head);
find_the_middle_node(head);
}