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

struct Node* createlist(int arr[], int size){
   struct Node* head =malloc(sizeof(struct Node));
   struct Node* ptr = head;//these traverse the list.
    struct Node* p;
   int i=0;

   head->data =arr[0];

   for(i=1; i<size; i++){

       p = malloc(sizeof(struct Node));
       p->data =arr[i];
       ptr->next = p;
       ptr= ptr->next;

   }
   ptr->next = NULL;
   return head;
}

void traversal(struct Node* head){
    while(head!=NULL){
        printf("%d  ",head->data);
        head = head->next;
    }
        printf("\n");
}




struct Node* swap(struct Node* head){    
    /*
      Input: head = [1,2,3,4]
      Output: [2,1,4,3]
    */
   struct Node* dummy = malloc(sizeof(struct Node));
   dummy->data = -1;
   struct Node* ptr = head;
   struct Node* p = dummy;
   struct Node* temp;
   int i=1;
   while(ptr!=NULL&&ptr->next!=NULL){
       temp = ptr->next->next;
       p->next = ptr->next;
       p=p->next;
       p->next = ptr;
       p=p->next;

   }
   traversal(dummy->next);
   return dummy->next;
}
 
int main()
{
 
int arr[] = {1,4,7,8};
int len= sizeof(arr)/sizeof(int);

struct Node* firstnode = createlist(arr,len);

traversal(firstnode);

struct Node* r=swap(firstnode);
traversal(r);
 
return 0;
}