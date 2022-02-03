#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;

};
int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
 struct stack* sp;
 sp->size=80;
 sp->top=-1;
 sp->arr=(int*)malloc(sizeof(int));

 //pushing an element maually.
 sp->top++;
 sp->arr[sp->top]=3;

 //here checking for stack is empty or not.

   printf("%d",isEmpty(sp));

 //for checking stack is full or not.
   printf("%d",isFull(sp));
