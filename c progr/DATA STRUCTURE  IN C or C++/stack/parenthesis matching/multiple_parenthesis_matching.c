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

int match(char a,char b){
    if(a=='{' && b=='}'){
        return 1;
    }
   if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    return 0;

}

int parenthesis_matching(char* exp){
struct stack* sp;
sp->size=100;
sp->top=-1;
sp->arr=(char*)malloc(sp->size*sizeof(char));
for(int i=0;exp[i]!='\0';i++){
if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
push(sp,exp[i]);
}
else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
    if(isEmpty(sp)){
        return 0;
    }
    char popped_ch=pop(sp);
     if(!match(popped_ch,exp[i])){
           return 0;
     }
}

}
} 



int main(){
 char* exp="[2*{3*4*(7+6)}]";
 if(parenthesis_matching(exp)){
     printf("parenthesis is balanced");
 }else{
     printf("parenthesis is not matching");
 }
}