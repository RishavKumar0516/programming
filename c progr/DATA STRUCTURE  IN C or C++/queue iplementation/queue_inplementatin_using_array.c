#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue* q){
    if(q->front==q->rear){
        return 1;
    }
    return 0;
}

int isFull(struct queue* q){
    if(q->rear==q->size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue* q,int val){
     if(isFull(q)){
         printf("queue is full");
     }
     else{
         q->rear++;
         q->arr[q->rear]=val;
     }
}

int dequeue(struct queue* q){
    int a=-1;
    if(isEmpty(q)){
        printf("queue is empty\n");
    }
    else{
        q->front++;
        a=q->arr[q->front];
        
    }
    return a;
}

int main(){

struct queue  q;
q.size=4;
q.front=q.rear=-1;
q.arr=(int *)malloc(q.size*sizeof(int));

//enqueue some elements.

enqueue(&q,23);
enqueue(&q,24);
enqueue(&q,25);
enqueue(&q,26);
if(isEmpty(&q)){
    printf("empty queue\n");
}else{
    printf("not empty\n");
}
if(isFull(&q)){
    printf("queue is fll\n");
}else{
    printf("queue is not full\n");
}
printf("dequeing element is : %d\n",dequeue(&q));
printf("dequeing element is : %d\n",dequeue(&q));
printf("dequeing element is : %d\n",dequeue(&q));
printf("dequeing element is : %d\n",dequeue(&q));
printf("dequeing element is : %d\n",dequeue(&q));
if(isEmpty(&q)){
    printf("empty queue\n");
}else{
    printf("not empty\n");
}
}