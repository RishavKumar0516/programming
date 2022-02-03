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
   int* arr;
 };

 int isEmpty(struct stack* ptr){
     if(ptr->top == -1){
         return 1;
     }
     return 0;
 }

 int isFull(struct stack* ptr){
     if(ptr->top == ptr->size-1){
         return 1;
     }
         return 0;
 }


 void push(struct stack* ptr, int value){
     if(isFull(ptr)){
         printf("stack is overflow, cannot store any element\n");
         
     }
     else{
     ptr->top++;
     ptr->arr[ptr->top] = value;
     }
 }


 int pop(struct stack* ptr){
     if(isEmpty(ptr)){
         printf("stack is underflow, you cannot pop any element\n");
         return -1;
     }
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
 }

 int peek(struct stack* ptr, int index){
     if((ptr->top - index + 1)<0){
         printf("not a valid index\n");
         return -1;
     }
     return ptr->arr[ptr->top - index + 1];

 }

 int stacktop(struct stack* ptr){
     return ptr->arr[ptr->top];
 }

 int stackbottom(struct stack* ptr){
     return ptr->arr[0];
 }

 void printStack(struct stack* p){

     if(isEmpty(p)){

         printf(" you stack do not contain any element \n");
        

     }
     else{
     
     printf(" stack contain some element which is %d\n ",p->top+1);
     for(int i=0; i<=p->top; i++){

         printf("%d\n",p->arr[i]);

     }
     }
 }
 
int main()
{
 
 struct stack* sp = malloc(sizeof(struct stack));

int s;
 printf(" Enter the size of the stsack you want to create\n");
 scanf("%d",&s); 

 sp->size = s;
 sp->top = -1;
 sp->arr = malloc(sp->size * sizeof(struct stack));

printf("%d\n",isEmpty(sp));
printf("%d\n",isFull(sp));

printStack(sp);

push(sp,12);
push(sp,22);
push(sp,32);
push(sp,42);
push(sp,52);
push(sp,62);
push(sp,72);
push(sp,82);
push(sp,92);

printStack(sp);

printf("the value at the given index is %d\n",peek(sp, 4));

pop(sp);
pop(sp);
pop(sp);
pop(sp);

printStack(sp);

printf("the element at the top of stack is %d\n",stacktop(sp));
printf("the element at the bottom of the stsck is %d\n",stackbottom(sp));
 
return 0;
}