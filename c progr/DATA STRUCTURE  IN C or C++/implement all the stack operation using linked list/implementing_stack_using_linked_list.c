#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int isEMPTY(struct node* top){
  if(top==NULL){
    return 1;
  }else{
    return 0;
  }
}
int isFULL(struct node* top){
  struct node* ptr=(struct node*)malloc(sizeof(struct node));
  if(ptr==NULL){
    return 1;
  }else{
    return 0;
  }
}

struct node* push(struct node* top,int value){
if(isFULL(top)){
  printf("stack overflow");
}else{
  struct node* ptr=(struct node*)malloc(sizeof(struct node));
  ptr->data=value;
  ptr->next=top;
  top=ptr;
  return top;

}
}
 int pop(struct node** top){
   if(isEMPTY(top)){
     printf("stack underflow");

   }else{
     struct node* ptr=top;
     *top=(*top)->next;
     int x=ptr->data;
     free(ptr);
     return x;
   }
 }

void traversal(struct node* top){
struct node* ptr=top;
while(ptr!=NULL){
  printf("%d\n",ptr->data);
  ptr=ptr->next;
}
}


int main(){
  struct node* top=NULL;
  top=push(top,78);
  top=push(top,7);
  top=push(top,8);
  top=push(top,15);
  top=push(top,34);
  top=push(top,23);
  traversal(top);
  int element=pop(&top);
  printf("popped element is %d ",element);
  traversal(top);
}
