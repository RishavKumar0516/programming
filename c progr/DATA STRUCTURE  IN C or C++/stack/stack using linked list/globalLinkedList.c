#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here.


 struct Node{
     int data;
     struct Node* next;
 };

   struct Node* top =NULL;

 int isEmpty(struct Node* top){

    if(top==NULL){
       return 1;
    }
    return 0;

 }

 int isFull(struct Node* top){

    struct Node* ptr = malloc(sizeof(struct Node*));
    if(ptr==NULL){
        return 1;
    }
    return 0;

 }

 struct Node* push(struct Node* top, int val){
     if(isFull(top)){
         printf(" Stack overflow \n");
         return top;
     }

     struct Node* ptr = malloc(sizeof(struct Node));
     ptr->data = val;
     ptr->next = top;
     top = ptr;
     return top;

     
 }

 int pop(struct Node* top1){
     if(isEmpty(top1)){
         printf(" stack is underflow ");
         return -1;
     }

     struct Node* ptr =top1;  // when using top as a global variable then don't use the same name to create local variable. either you get error.
     top = top1->next;
     int val = ptr->data;
     free(ptr);
     return val;     

 }

 void traversal(struct Node* top){
     if(isEmpty(top)){
         printf("stack underflow");
     }
     else{
         while(top!=NULL){
             printf("%d\n",top->data);
             top = top->next;
         }
     }
 }


 
int main()
{


printf("%d\n",isEmpty(top));
top = push(top,12);   
top = push(top,22);
top = push(top,32);
top = push(top,42);
top = push(top,52);
top = push(top,62);
top = push(top,72);
traversal(top);


printf("These element %d is popped out from the stack.\n",pop(top));
printf("These element %d is popped out from the stack.\n",pop(top));
printf("These element %d is popped out from the stack.\n",pop(top));
printf("These element %d is popped out from the stack.\n",pop(top));    
traversal(top);
 
return 0;
}