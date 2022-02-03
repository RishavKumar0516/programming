   #include<stdio.h>

   struct Node{
      int data;
      struct Node* next;
   };

   //traversal

   void linked_list_traversal(struct Node* ptr){
      while(ptr!=NULL){
         printf("%d\n",ptr->data);
         ptr=ptr->next;
      }
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
   }