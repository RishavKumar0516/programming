#include<stdio.h>
#include<stdlib.h>

struct node* front=NULL;//GLOBAL POINTER.
struct node* rear=NULL;//GLOBAL POINTER.



struct node{
    int data;
    struct node* next;
         };

void enqueue(int val){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("node is full");
    }
    else{
        ptr->data=val;
        ptr->next=NULL;

        if(front==NULL){
            front=rear=ptr;
        }
        else{
            rear->next=ptr;
            rear=ptr;
        }
    }
}

void dequeue(){
    int val=-1;
    struct node* ptr=front;
    if(front==NULL){
        printf("queue is empty\n");

    }else{
        front=front->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}


int main(){


}