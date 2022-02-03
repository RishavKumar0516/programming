#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* head){
    struct Node* p=head;
    do{
        printf("%d  ",p->data);
        p=p->next;
    }while(p !=head);
    printf("\n");

}
//  --- insert at first in the list---.

struct Node* insert_at_first(struct Node* head,int value){
  struct Node* ptr=malloc(sizeof(struct Node));
  ptr->data=value;
  struct Node* q=head;
  while(q->next!=head){
      q=q->next;
  }
  q->next=ptr;
  ptr->next=head;
  head=ptr;
  return head;

}

//-----insert at the end------.

struct Node* insert_at_end(struct Node* head,int value){
    struct Node* p=head;
    

    while(p->next !=head){
        p=p->next;
    }
    struct Node* ptr=malloc(sizeof(struct Node));
    ptr->data=value;
    p->next=ptr;
    ptr->next=head;
    return head;

}

//  -----insert at between----


struct Node* insert_in_between(struct Node* head,int position,int value){
    struct Node* p=head;
    int i=0;
    while(i != position-1){
       p=p->next;
    }
    struct Node* q=(struct Node*)malloc(sizeof(struct Node));
    q->data=value;
    q->next=p->next;
    free(p);
    return head;
     
}

//  ------deleting the first node   ------

struct Node* delete_at_first(struct Node* head){
   struct Node* ptr=head;
   struct Node* q=head;
   while(q->next!=head){
       q=q->next;
   }
   q->next=head->next;
   head=head->next;
   free(ptr);
   return head;
}

//delete at last

struct Node* delete_at_first(struct Node* head){
   struct Node* ptr=head;
   struct Node* q=head->next;
   while(q->next!=head){
       q=q->next;
       ptr=ptr->next;
   }
   ptr->next=q->next;
   free(ptr);
   return head;
}

int main(){
struct Node* head= (struct Node*)malloc(sizeof(struct Node));
struct Node* second= (struct Node*)malloc(sizeof(struct Node));
struct Node* third= (struct Node*)malloc(sizeof(struct Node));
struct Node* forth= (struct Node*)malloc(sizeof(struct Node));


// enter the value and linking the list...

head->data=2;
head->next=second;

second->data=4;
second->next=third;

third->data=6;
third->next=forth;

forth->data=8;
forth->next=head;     

traversal(head);
head= insert_at_first(head ,1);
traversal(head);
 insert_at_end(head,9);
traversal(head);
head=delete_at_first(head);       
traversal(head);
delete_at_last(head);
traversal(head);
}