#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

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

int main()
{
 
int arr[] = {1,4,7,8};
int len= sizeof(arr)/sizeof(int);

struct Node* firstnode = createlist(arr,len);

traversal(firstnode);
 
return 0;
}
