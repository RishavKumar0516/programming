#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 struct Node{
     int data;
     struct Node* next;
 };

 struct Node* createlist(int* arr, int size){
     
    struct Node* head = malloc(sizeof(struct Node));
    head->data = arr[0];
     struct Node* ptr = head;
    int i=1;
    for(int i=1;i<size;i++){

      struct Node* p = malloc(sizeof(struct Node));
      p->data = arr[i];
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

 /* delete the nth node */

 struct Node* deleteNodeFromLast(struct Node* head, int n){
     
     struct Node* first = head;

     for(int i=1;i<=n;i++){

          if(first->next == NULL){
              if(i == n-1){
                  head =head->next;
                  return head;
              }
              
          }
          first =first->next;

     }
     struct Node* second = head;

     while(first->next != NULL){
         first = first->next;
         second = second->next;
     }  
     struct Node* temp = second->next;
     second->next = second->next->next;    
     free(temp);
     return head;                                            


 }

 
int main()
{
 
 int n;
 scanf("%d",&n);
 int arr[n];

 for(int i=0;i<n;i++){ 

     scanf("%d",&arr[i]);

 }
    struct Node* head = createlist(arr,n);

    traversal(head);

    int element;
    scanf("%d",&element);

    head = deleteNodeFromLast(head, element);

    traversal(head);

return 0;
}