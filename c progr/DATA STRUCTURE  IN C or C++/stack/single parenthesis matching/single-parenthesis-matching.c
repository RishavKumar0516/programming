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
   char* arr;
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

 void push(struct stack* ptr, char value){
     if(isFull(ptr)){
         printf("stack overflow cannot push any element to the stack");
     }
     else{
         ptr->top++;
         ptr->arr[ptr->top] = value;
     }
 }

 char pop(struct stack* ptr){
     if(isEmpty(ptr)){
         printf("stack underflow");
     }
     else{
         char s = ptr->arr[ptr->top];
         ptr->top--;
         return s;
     }
 }


 int parenthesisMatching(char* exp){

   struct stack* sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));

   for(int i=0; exp[i]!= '\0'; i++){

       if(exp[i]=='(' ){
           push(sp, '(' );
       }
       else if(exp[i]==')' ){

           if(isEmpty(sp)){
               return 0;
           }
               pop(sp);
           
       }

   }
   if(isEmpty(sp)){
       return 1;
   }
   else{
       return 0;
   }


 }
 
int main()
{
    char* expre = "(8*(4+3-2)";

    if(parenthesisMatching(expre)){
        printf("The parenthesis is matching");
    }else{
        printf("The parenthesis is not matching");
    }
    
return 0;
}