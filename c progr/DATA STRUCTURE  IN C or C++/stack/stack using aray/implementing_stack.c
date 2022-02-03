#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here

 struct stack{
     int size;
     int top;
     int *arr;
     
 };

 int isEmpty(struct stack* ptr){

     if( ptr->top == -1){
         return 1;
     }

     return 0;
 }

 int isFull(struct stack* ptr){
     if(ptr->top==ptr->size-1){
         return 1;
     }

     return 0;
 }

 void printStack(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Your stack is Empty");
        exit;
    }

    for(int i=0;i<=ptr->top;i++){
        printf("%d\n",ptr->arr[i]);
    }

 }


 
int main()
{
 
  struct stack* s =malloc(sizeof(struct stack));// if you don't do these you get error message.

  s->size = 20;
  s->top = -1;
  s->arr = (int*)malloc(s->size * sizeof(struct stack));
  

   // inserting element in the stack.

  s->arr[0] = 34;
  s->top++;

  s->arr[1] = 54;
  s->top++;

  printStack(s);

  
return 0;
}