#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here


 // implementing the stack.

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

 void push(struct stack* ptr, char c){

     if(isFull(ptr)){
         printf("stack overflow");
     } 
     else{
         ptr->arr[ptr->top] = c ; 
         ptr->top++;
     }

 }

 char pop(struct stack* ptr){ 

      if(isEmpty(ptr)){
         printf("stack is empty");
         return '\0';
      }
      else{
          char s = ptr->arr[ptr->top];
          ptr->top--;
          return s;
      }

 } 

 int stacktop(struct stack* ptr){

     return ptr->arr[ptr->top];
 }

 int isOperator(char ch){
     if(ch =='+' || ch =='-' || ch =='*' || ch=='/'){
         return 1;
     }
     return 0;
 }

 int precedence(char str){
     if( str == '/' || str == '*' ){

      return 3;

     }
     else if( str == '+' || str == '-'){
         return 2;
     }
     else{
         return 0;
     }
 }

char* infix_to_postfix(char* infix ){

   struct stack* sp = malloc(sizeof(struct stack));
     sp->size = 100;
     sp->top = -1;
     sp->arr = malloc(sp->size * sizeof(char));

     char* postfix = (char*)malloc(sizeof(infix)+1 * sizeof(char));
     int i=0, j=0;
     while( infix[i] != '\0' ){

         
         if( ! isOperator(infix[i])){
             postfix[j] = infix[i];
             i++;
             j++;
         }
         else{
             if(precedence(infix[i]) > precedence(stacktop(sp))){
                push(sp, infix[i]);
                i++;
             }
             else{
                 postfix[j] = pop(sp);
                 j++;
             }
         }
     }

     while( !isEmpty(sp)){
         postfix[j] = pop(sp);
         j++;
     }

     postfix[j] = '\0';
     return postfix;
}
 
int main()
{
 
 char* exp = "x-y/z-k*d";
 printf("postfix is %s ",infix_to_postfix( exp ));
     
 
return 0;
}