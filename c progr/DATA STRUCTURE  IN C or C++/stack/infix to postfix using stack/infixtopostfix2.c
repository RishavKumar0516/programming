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

 void push(struct stack* ptr, int val){
     if(isFull(ptr)){
         printf("stack is overflow");
     }
     else{
         ptr->top++;
         ptr->arr[ptr->top] = val;
     }
 }

 char pop(struct stack* ptr){
     if(isEmpty(ptr)){
         printf("stack is empty");
        
     }
     else{
         char s = ptr->arr[ptr->top];
         ptr->top--;
         return s;
     }
 }

 char stacktop(struct stack* ptr){
     return ptr->arr[ptr->top];
 }

 int isOperator(char str){
     if(str == '+'|| str == '-'||str == '*'|| str == '/'){
         return 1;
     }
     return 0;
 }

 int  precedence(char ch){
     if(ch=='*' || ch =='/')
     return 3;
     
     else if(ch=='+' || ch =='-')
     return 2;

     else{
         return 0;
     }

 }

 char* infixtopostfix(char* infix){
    struct stack* sp = malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr =malloc(sp->size * sizeof(char));

    char* postfix = malloc(strlen(infix)*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i] != '\0'){
      if(! isOperator(infix[i])){
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

    while(! isEmpty(sp)){
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;

 }

 
 
int main()
{
char* infix="a-b+t/6";
   printf("postfix is : %s",infixtopostfix(infix));
   printf("postfix is : %s",infixtopostfix(infix));
 
return 0;
}