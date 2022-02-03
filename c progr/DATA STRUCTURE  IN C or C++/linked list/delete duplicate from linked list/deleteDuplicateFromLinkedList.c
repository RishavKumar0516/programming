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

 struct Node* createList(int* A, int length){

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

 struct Node* deleteDuplicate(struct Node* head){

     /* take two pointer ,initialy first will point to the head and second will point to the none */

     struct Node* curr = head;
     struct Node* Next;

     while(curr->next != NULL){
         if(curr->data == curr->next->data){
             Next = curr->next->next;
             free(curr->next);
             curr->next = Next;
         }
         else{
             curr = curr->next;
         }
     }
     return head;
 }

 
int main()
{
 
int arr[]={1,2,3,3,4,4,5};
int len =sizeof(arr)/sizeof(int);
struct Node* list = createList(arr, len);
traversal(list);
list = deleteDuplicate(list);    
traversal(list);
 
 
return 0;
}