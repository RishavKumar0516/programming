#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;

};
//checking for stack is empty or not.
int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }
}
//checking for stack is full or not.
int isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}
//pushing element in the stack.

void push(struct stack* ptr,int value){
  if(isFull(ptr)){
      printf("stack overflow ,cannot push %d in the stack ");
  }else{
      ptr->top++;
      ptr->arr[ptr->top]=value;
  }
}

//poping the element from the stack.
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("stack underflow! cannot pop from the stack");
        return -1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

//peek the element at teh given index.
int peek(struct stack* ptr,int i){
    if(ptr->top-i+1<0){
        printf("not a valid position in the stack\n ");
        return -1;
    }
    else{
        return ptr->arr[ptr->top-i+1];
    }
}
int main(){
struct stack* sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=10;
sp->top=-1;
sp->arr=(int*)malloc(sp->size*sizeof(int));
printf("%d\n",isEmpty(sp));
printf("%d\n",isFull(sp));
//pushing the element inthe stack.
push(sp,3); 
push(sp,5); 
push(sp,6); 
push(sp,7); 
push(sp,9); 
push(sp,3); 
push(sp,5); 
push(sp,6); 
push(sp,7); 
push(sp,9); 
printf("after pushing the full:is %d\n",isFull(sp));
printf("after pushing the empty:is %d\n",isEmpty(sp));
printf("after poping the %d full:is %d\n",pop(sp),isFull(sp));
printf("after poping the %d  empty:is %d\n",pop(sp),isEmpty(sp));
printf("the value at index %d is %d\n",6,peek(sp,6));
printf("the value at index %d is %d\n",5,peek(sp,5));
printf("the value at index %d is %d\n",4,peek(sp,4));
printf("the value at index %d is %d\n",3,peek(sp,3));
}
