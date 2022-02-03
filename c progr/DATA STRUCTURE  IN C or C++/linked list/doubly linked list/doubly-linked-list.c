#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};
// traversal to each node and print their value.
void traversal(struct node* head){
    struct node* ptr=head;
    //printing linked list .
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=NULL);
    printf("\n");
    
}

//insert value at first.
struct node* insert_At_First(struct node* head,int value){
   struct node* ptr=(struct node*)malloc(sizeof(struct node));
   ptr->data=value;
   head->prev=ptr;
   ptr->next=head;
   head=ptr;
   return head;

}
//insert at between.
struct node* insertAtBetween(struct node* head,int index,int value){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));

    struct node* p=head;
    struct node* q=head->next;
    for(int i=0;i<index-1;i++){
        q=q->next;
        p=p->next;
    }
    ptr->data=value;
    ptr->next=q;
    q->prev=ptr;
    p->next=ptr;
    ptr->prev=p;
    return head;
}

//insert at last.

struct node* insertAtEnd(struct node* head,int value){
   struct node* ptr=(struct node*)malloc(sizeof(struct node));

   struct node* p=head;
   while(p->next!=NULL){
    p=p->next;
   }
   ptr->data=value;
   ptr->next=p->next;
   p->next=ptr;
   ptr->prev=p;
   return head;

}
//delete at first.
struct node* deleteAtFirst(struct node* head){
    struct node* ptr=head;
    head=head->next;
    head->prev=ptr->prev;
    free(ptr);
    return head;

}

//delete in between at the given position.

struct node* deleteAtBetween(struct node* head,int index){
    struct node* ptr=head;
    struct node* q=head->next;
    struct node* n;
    for(int i=0;i<index-1;i++){
        ptr=ptr->next;
        q=q->next;
    }
     n=q->next;
    ptr->next=q->next;
    n->prev=q->prev;
    free(q);
    return head;
   

}

//delete at end.

struct node* deleteAtEnd(struct node* head){
    struct node* ptr=head;
    struct node* q=head->next;
    while(q->next!=NULL){
          q=q->next;
          ptr=ptr->next;
    }
    ptr->next=q->next;
    free(q);
    return head;
}


int main(){
  struct node* head;
  struct node* second;
  struct node* third;
  struct node* forth;
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  forth=(struct node*)malloc(sizeof(struct node));
  //setting values ND linking the pointer.
  head->data=4;
  head->next=second;
  head->prev=NULL;

  second->data=6;
  second->next=third;
  second->prev=head;

  third->data=8;
  third->next=forth;
  third->prev=second;

  forth->data=10;
  forth->next=NULL;
  forth->prev=third;

  traversal(head);
  head=insert_At_First(head,2);
  traversal(head);
  head=insertAtBetween(head,3,7);
  traversal(head);
  head= insertAtEnd(head,12);
  traversal(head);
  head=deleteAtFirst(head);
  traversal(head);
  head=deleteAtBetween(head,3);
  traversal(head);
  head=deleteAtEnd(head);
  traversal(head);
}
