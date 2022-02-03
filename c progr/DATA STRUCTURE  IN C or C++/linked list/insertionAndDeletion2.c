#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

//linked list traversal.

void linkedListTraversal(struct Node* head){
    struct Node* ptr=head;
     while(head!=NULL){
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }
     printf("\n");
}

//insertion at first.

struct Node* insertAtFirst(struct Node* head,int value){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=value;
    ptr->next=head;
    head=ptr;
    return head;
}

//insertion in between at given index.

struct Node* insertAtIndex(struct Node* head,int index,int value){
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p;
    int i=0;
    while(i<index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

  //insertion at end in the linked list.

  struct Node* insertAtEnd(struct Node* head,int value){
      struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));  
      struct Node* p=head;
      while(p->next !=NULL){
            p=p->next;
      }
      ptr->next=p->next;
      p->next=ptr;
      return head;

  }

int main(){

    //creating node and linking them.

    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* forth;
    struct Node* fifth;
    struct Node* sixth;
    struct Node* seventh;

   //allocating space for each node.

   head=(struct Node*)malloc(sizeof(struct Node));   

   second=(struct Node*)malloc(sizeof(struct Node));

   third=(struct Node*)malloc(sizeof(struct Node));

   forth=(struct Node*)malloc(sizeof(struct Node));

   fifth=(struct Node*)malloc(sizeof(struct Node));

   sixth=(struct Node*)malloc(sizeof(struct Node));

   seventh=(struct Node*)malloc(sizeof(struct Node));

   //storing the value and linking the node.
   head->data=2;
   head->next=second;

   second->data=3;
   second->next=third;

   third->data=4;
   third->next=forth;

   forth->data=5;
   forth->next=fifth;

   fifth->data=6;
   fifth->next=sixth;

   sixth->data=7;
   sixth->next=seventh;

   seventh->data=8;
   seventh->next=NULL;

   //function call.

   printf("printing the value of linked list.\n");

   linkedListTraversal(head);

   printf("printing the value of linked list before insertion.");
    linkedListTraversal(head);

   head=insertAtFirst(head,1);

   printf("printing the value of linked list after the insertion.");
    linkedListTraversal(head);

   printf("printing the value of linked list before inserting the node in the between");
    linkedListTraversal(head);

   head=insertAtIndex(head,2,13);

   printf("printing the value of linked list after inserting the node in the between");
    linkedListTraversal(head);

   printf("printing the value of linked list before inserting the node at the end");
    linkedListTraversal(head);

   head=insertAtEnd(head,9);

   printf("printing the value of linked list after inserting the node at the end");
    linkedListTraversal(head);




}