#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here



 struct Node{
     int data;
     struct Node* next;
 };


 struct Node* createList(int* A,int length){

     struct Node* head = malloc(sizeof(struct Node));
     head->data = A[0];

     struct Node* ptr = head;
     for(int i=1;i<length;i++){
         struct Node* p = malloc(sizeof(struct Node));
         p->data = A[i];
         ptr->next = p;
         ptr = ptr->next;
     }
     ptr->next = NULL;
     return head;
 }
 

 void traversal(struct Node* head){
     while(head != NULL){
         printf("%d  ",head->data);
         head= head->next;

     }
     printf("\n");
 }



  struct Node* removeDuplicate(struct Node* head){
      /* first create a dummy node */
      struct Node* dummy = malloc(sizeof(struct Node));
      dummy->data = -1;
      dummy->next = head;
      /* now create 2 pointers, in which one is pointing to the head node and another is pointing to the dummy node */
      struct Node* curr = head;
      struct Node* prev = dummy;

      while(curr != NULL){
          if(curr->next != NULL && curr->data == curr->next->data){

              while(curr->next != NULL && curr->data == curr->next->data){
                  curr = curr->next;
              }
              prev->next = curr->next;
          }
          else{
              prev = prev->next;
          }
          curr=curr->next;
      }
      return dummy->next;
  }

int main()
{
 
int arr[]={1,2,3,3,4,4,5};
int len =sizeof(arr)/sizeof(int);
struct Node* list = createList(arr, len);
traversal(list);
list = removeDuplicate(list);
traversal(list);
return 0;
}