#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;   
};
//linked list traversal.
void linked_list_traversal(struct Node* ptr){
      while(ptr!=NULL){
         printf("%d\n",ptr->data);
         ptr=ptr->next;
      }
   }

   // deleting the first node in the list.

   struct Node* deleteAtFirst(struct Node* head){
      struct Node* p=head;
      head=head->next;
      free(p);
      return head;

   }

   //deleting the Node in between at given index.

   struct Node* DeleteAtindex(struct Node* head,int index){
       struct Node* ptr=head;
       struct Node* p=head->next;
       int i=0;
       while(i<index-1){
        ptr=ptr->next;
        p=p->next;
       }
       ptr->next=p->next;
       free(p);
       return head;
   }

   //deleting the node at last.

   struct Node* DeleteAtlast(struct Node* head){
       struct Node* ptr=head;
       struct Node* q=head->next;
       
       while(q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
       }
       ptr->next=q->next;
       free(q);
       return head;
   }

//deleting the node at given value.

struct Node* deleteAtValue(struct Node* head,int value){
   struct Node* ptr=head;
   struct Node* q=head->next;
   while(q->data!=value&& q->next!=NULL){
      ptr=ptr->next;
      q=q->next;
   }
   if(q->data=value){
      ptr->next=q->next;
      free(q);
   }
   return head;
}



 int main(){
       
          //linked list creation.

          //creating node in heap using malloc function.

       struct Node* head;
       struct Node* second;
       struct Node* third;
       struct Node* forth;
       head=(struct Node*)malloc(sizeof(struct Node));
       second=(struct Node*)malloc(sizeof(struct Node));
       third=(struct Node*)malloc(sizeof(struct Node));
       forth=(struct Node*)malloc(sizeof(struct Node));
// storing the value in linked list and linking the list.
       head->data=12;
       head->next=second;//linking the head and second node together.

       second->data=23;
       second->next=third;//linking the second and third node together.

       third->data=45;
       third->next=forth;//linking the third and forth node together.

       forth->data=78;
       forth->next=NULL;//terminate the list at forth node.

       //traversal
       linked_list_traversal(head);
       printf("delete at first");
       head=deleteAtFirst(head);
       linked_list_traversal(head);
       printf("deleteAtindex");
       head=deleteAtindex(head,2);
       linked_list_traversal(head);
       printf("deleteAtLast");
       head=deleteAtLast(head);
       linked_list_traversal(head);
       printf("deleteAtValue");
       head=deleteAtValue(head,45);
       linked_list_traversal(head);





