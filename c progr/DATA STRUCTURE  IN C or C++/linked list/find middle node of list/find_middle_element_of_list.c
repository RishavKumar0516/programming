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

struct Node* find_middle_node(struct Node* head){
     struct Node* p = head;
    struct Node* q = head;
    int i=0;
    
    while(q->next != NULL){
        q=q->next;
        i++;
        if(i!=0 && i%2==0){
            
            p=p->next;
        }
    }
    if((i-1)%2==0){
        return p->next;
    }
    else{
      return p;
    }
    
}

 
int main()
{
 
int arr[] = {1,4,7,8,9};
int len= sizeof(arr)/sizeof(int);

struct Node* firstnode = createlist(arr,len);

traversal(firstnode);
struct Node* p=find_middle_node(firstnode);
printf("%d",p->data);

 
return 0;
}