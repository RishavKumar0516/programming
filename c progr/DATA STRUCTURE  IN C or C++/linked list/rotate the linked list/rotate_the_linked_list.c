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

 

 struct Node* rotateList(struct Node* head, int n){

      /* find the length of the linked list */

      int length = 1;
        struct Node* ptr = head;    
        struct Node* qtr = head;
      while( ptr->next != NULL ){
          
          ptr = ptr->next;
          length++;
      }
     /*  now ptr is pointing to the last node so, we set the next of last node to head */
     ptr->next = head;

     n = n % length;

     if(head == NULL || head->next == NULL || n==0){
         return head;
     }


     int iterate = length-n;

  
     for(int i=1;i<iterate;i++){      
 
         qtr =qtr->next;

     }
     head = qtr->next;
     qtr->next = NULL;
     return head;

 }
 
int main()
{
 int arr[]={1,2,3,4,5};
int len =sizeof(arr)/sizeof(int);
struct Node* list = createList(arr, len);
traversal(list);
list = rotateList(list,1);
traversal(list);
return 0;
}