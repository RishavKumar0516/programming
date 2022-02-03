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

 void push(struct stack* ptr, char val){
     if(isFull(ptr)){
         printf("stack overflow");
     }
     else{
         ptr->top++;
         ptr->arr[ptr->top] = val;
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

 char stacktop(struct stack* ptr){
     return ptr->arr[ptr->top];
 }

 int isOperator(char ch){
     if(ch == '*'|| ch == '/'|| ch == '+'|| ch == '-'){
         return 1;
     }
     return 0;
 }

 int precedence(char ch){
     if(ch == '*' || ch == '/'){
         return 3;
     }
      else if(ch == '+' || ch == '-'){
         return 2;
     }
     else{
         return 0;
     }
 }

char* infixtoprefix(char* infix){
    struct stack* sp = malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = malloc(sp->size * sizeof(char));
    char* prefix =  malloc((strlen(infix) + 1) * sizeof(char));

    int length = strlen(infix);
    
    // printf("%d\n",length);

    int i = length - 1;
    int j = length-1;

    while( i >= 0){
        if( ! isOperator(infix[i])){
            prefix[j] = infix[i];
            j--;
            i--;

        }
        else{
            if( precedence(infix[i]) >= precedence(stacktop(sp)) ){
                push(sp, infix[i] );
                i--;
            }
            else{
                prefix[j] = pop(sp);
                j--;
            }
        }
    }
    while(! isEmpty(sp)){
        prefix[j] = pop(sp);
        j--;
    }
    prefix[length] = '\0';
    return prefix;

}

 
int main()
{
 
 char* infix="a*b+t/6";
   printf("prefix is : %s",infixtoprefix(infix));
 
 
return 0;
}