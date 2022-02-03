#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* next;
};


//isempty function

int isEmpty(struct node* top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}
//isFull()
int isFull(struct node* top){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        return 1;
    }else{
        return 0;
    }
}
//push()
struct node* push(struct node* top,int value){
    if(isFull(top)){
        printf("stack overflow! so can't push element any more");
    }
    else{
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=value;
        ptr->next=top;
        top=ptr;
        return top;
    }
} 
//pop()  


int pop(struct node** top){
    if(isEmpty(*top)){
        printf("stack underflow");
    }
    else{
        struct node* ptr=*top;
                *top=(*top)->next;
        int k=ptr->data;
        free(ptr);
        return k;
    }
}

//stacktop()
int stacktop( struct node** top){
    return (*top)->data;
}

int stackbottom(struct node** top){
    struct node*ptr=*top;
    while(ptr!=NULL){
        ptr=ptr->next;
    }
    return ptr->data;
}
//traversal
void traversal(struct node* top){
    struct node* ptr=top;
    while(ptr->next!=NULL){
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
    struct node* top=NULL;
    top=push(top,2);
    top=push(top,4);
    top=push(top,6);
    top=push(top,8);
    top=push(top,10);
    top=push(top,12);
    traversal(top);
    int element=pop(&top);//here these top pointer is local variable of main function,and here the pop function is returning the integer value so we need to pass the address of top pointer ,after passing the address the when the pop function runs ,it deletes the node from the address of top pointer .
    printf("popped element is %d\n",element);
    element=pop(&top);
    printf("popped element is %d\n",element);
    traversal(top);
    element=stacktop(&top);
    printf("top element : %d",element);
    traversal(top);
    element=stackbottom(&top);
    printf("bottom element : %d",element);
}