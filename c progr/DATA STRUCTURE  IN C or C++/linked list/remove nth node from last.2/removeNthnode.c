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



struct Node* removeNthFromEnd(struct Node* head, int n){         


struct Node* first = head;
struct Node* second = head;

for(int i=0;i<n;i++){
    if(second->next ==NULL){
       if(i==n-1){
           head = head->next;
           return head;
       }
      
    }
     second = second->next;
}

while(second->next !=NULL){
    first = first->next;
    second = second->next;
} 
first->next = first->next->next;
return head;
    

}
    
 
int main()
{
 
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   int len1= sizeof(arr)/sizeof(int);
   struct Node* firstnode1 = createlist(arr,len1);
   traversal(firstnode1);

   struct Node* p = removeNthFromEnd(firstnode1, 5);
   traversal(p);
 
 
return 0;
}