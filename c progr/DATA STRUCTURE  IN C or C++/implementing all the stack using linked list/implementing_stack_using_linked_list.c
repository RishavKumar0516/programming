#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* top=NULL;

int isEmpty(struct node* n){
    if(n==NULL){
        return 1;
    }
    else{
        return 0;
    }
} 
int isFull(struct node* n){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct node* push(struct node* n,int value){
    if(isFull(n)){
        printf("stack overflow");
    }
    else{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=value; 
    ptr->next=top;
    n=ptr;
    return n;
    }
}
 int pop(struct node* n){
     if(isEmpty(n)){
         printf("stack underflow");
     }
     else{
         struct node* ptr=n;
         int p=ptr->data;
         n=n->next;
         free(ptr);
         return p;
     }
     
     }
     void traversal(struct node* n){
         struct node* ptr=top;
         while(ptr!=NULL){
             printf("%d\n",ptr->data);
             ptr=ptr->next;
         }
          printf("\n");
     }
 
int main(){
top=push(top,13);  
top=push(top,26);
top=push(top,39);
top=push(top,52);
top=push(top,65);
top=push(top,78);
top=push(top,91);
top=push(top,104);
traversal(top);
int element=pop(top);
printf("%d is poped from the stack",element);
traversal(top);



}