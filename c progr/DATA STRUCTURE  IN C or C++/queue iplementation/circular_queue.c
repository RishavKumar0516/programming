#include<stdio.h>
#include<stdlib.h>

struct circularqueue{
    int size;
    int front;
    int rear;
    int*arr;
};

int isEmpty(struct circularqueue* q){
    if(q->front==q->rear){
        return 1;
    }
    return 0;
}

int isFull(struct circularqueue* q){
    if(((q->rear+1)%q->size)==q->front){
        return 1;
    }
    return 0;
}

void enqueue(struct circularqueue* q,int val){
    if(isFull(q)){
        printf("queue is full\n");
    }
    else{
        printf("enquied element is : %d\n ",val);
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear]=val;
    }
}

int dequeue(struct circularqueue* q){
    int val=-1;
    if(isEmpty(q)){
        printf("queue is empty\n");
    }
    else{
        q->front=(q->front+1)%q->size;
        val=q->arr[q->front];
   }
   return val;
}


int main(){
    struct circularqueue q;
    q.size=7;
    q.front=q.rear=0;
    q.arr=(int*)malloc(q.size*sizeof(int));

   
if(isEmpty(&q)){
    printf("queue is empty\n");
}else{
    printf("queue if not empty\n");
}
 //enqueueing some elements.
    enqueue(&q,2);
    enqueue(&q,4);
    enqueue(&q,6);
    enqueue(&q,8);
    enqueue(&q,10);
    enqueue(&q,12);

    if(isFull(&q)){
        printf("queue is full\n");
    }
    else{
        printf("queue is not full\n");
    }

    //dequeueing some elements.

    printf("dequeueing element is : %d\n",dequeue(&q));
    printf("dequeueing element is : %d\n",dequeue(&q));
    printf("dequeueing element is : %d\n",dequeue(&q));
    printf("dequeueing element is : %d\n",dequeue(&q));
    printf("dequeueing element is : %d\n",dequeue(&q));
    printf("dequeueing element is : %d\n",dequeue(&q)); 

if(isEmpty(&q)){
    printf("queue is empty\n");
}else{
    printf("queue if not empty\n");
}

}