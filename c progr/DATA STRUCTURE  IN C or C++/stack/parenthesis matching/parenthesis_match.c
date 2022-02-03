#include<stdio.h>
#include<stdlib.h>


struct stack{
    int size;
    int top;
    char* arr;
};
int isFull(struct stack* ptr){
    if(ptr->size==ptr->size-1){   
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack* ptr,char ch){
    if(isFull(ptr)){
        printf("stack overflow");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=ch;
    }
}

char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("stack underflow");
    }
    else{
      char val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesisMatching(char* exp){
    struct stack* sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(sp,'(');
        }
        else if(exp[i]==')'){
           if(isEmpty(sp)){
               return 0;
           }
           pop(sp);
        }
    }
     if(isEmpty(sp)){
                return 1;
            }else{
              return 0;
            }
}
int main(){
    printf("welcome");
   char* exp="8*(4+3)-2)";
   if(parenthesisMatching(exp)){
       printf("the parenthesis is balanced");
   }else{
       printf("the parenthesis is not balanced");
   }
}
