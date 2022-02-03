#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 struct queue{
     int size;
     int front;
     int rear;
     int *arr;
 };
int isEmpty(struct queue* q){
    if(q->front == q->rear){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct queue* q){
    if(q->rear == q->size-1){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct queue* q, int val){
     if(isFull(q)){
         cout<<"queue is overflow"<<endl;
     }else{
         q->rear = (q->rear+1)%q->size;
         q->arr[q->rear] = val;
     }
}

  int dequeue(struct queue* q){
    int sp = 0;
    if(isEmpty(q)){
        cout<<"queue is Empty"<<endl;
    }
    else{
        q->front = (q->front+1)%q->size;
        sp = q->arr[q->front];
    }
    return sp;
}

void printArray(struct queue* q, int start, int end){
    if(start == -1){
        for(int i=0;i<=end;i++){
            cout<<q->arr[i]<<endl;
        }
    }
}

int main()
{
 struct queue q;
 q.size = 20;
 q.front = 0;
 q.rear = 0;
 q.arr = (int*)malloc(q.size*sizeof(int));
return 0;
}