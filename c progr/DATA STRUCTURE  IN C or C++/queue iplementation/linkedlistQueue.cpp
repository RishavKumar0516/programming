#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;

int isEmpty(struct node* front){
     if(front == NULL){
         return 1;
     }
     else{
         return 0;
     }
}

int isFull(struct node* ptr){

   if(ptr == NULL){
       return 1;
   }
   else{
       return 0;
   }
}
//front and rear are global variable so 
void enqueue( int val){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if(isFull(ptr)){
       cout<<"queue is full"<<endl;
    }
    else{
        ptr->data = val;
        ptr->next = NULL;
        if(front == NULL){
            /* these means that queue is empty */
            front = rear = ptr;
        }
        else{
            rear->next = ptr;    
            rear = ptr;
        }
    }

}

int dequeue(){
int val = -1;
struct node* ptr = front;
if(isEmpty(ptr)){
    cout<<"queue is empty"<<endl;
}
else{
    val = front->data;
    front = front->next;
}
   return val;
}

void traversal(struct node* ptr){
    cout<<"printing the element of linked list"<<endl;
    while(ptr != NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
 
int main()
{
 enqueue(21);
 enqueue(22);
 enqueue(23);
 enqueue(24);
 enqueue(25);
 enqueue(26);
 traversal(front);
return 0;
}