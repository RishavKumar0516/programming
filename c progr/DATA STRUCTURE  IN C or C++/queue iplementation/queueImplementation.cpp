#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
 struct queue{
     int size;
     int front;
     int rear;
     int* arr;
 };
  
  int isfull(struct queue* q){
      if(q->rear == q->size-1){
          return 1;
      }
      else{
          return 0;
      }
  }

  int isempty(struct queue* q){
      if(q->front == q->rear){
          return 1;
      }
      else{
          return 0;
      }
  }

  void enqueue(struct queue* q, int val){
      if(isfull(q)){
          cout<<"queue is overflow"<<endl;
      }
      else{
          q->rear++;
          q->arr[q->rear] = val;
      }
  }

  int dequeue(struct queue* q){
      int a = -1;
      if(isempty(q)){
          cout<<"queue is underflow"<<endl;
      }
      else{
          q->front++;
          a = q->arr[q->front];
      }
      return a;
  }

  void printArray(struct queue* q, int start, int end){
      if(start == -1){
          start+=1;
      
      for(int i=0;i<=end;i++){
          cout<<q->arr[i]<<" "<<endl;
      }
      }
      else{
          for(int i=start;i<=end;i++){
              cout<<q->arr[i]<<" "<<endl;
          }
      }
  }

int main()
{
 struct queue q;
 q.size = 30;
 q.front = -1;
 q.rear = -1;
 q.arr = (int*)malloc(q.size * sizeof(int));

 enqueue(&q, 36);
 enqueue(&q, 40);
 enqueue(&q, 48);
 enqueue(&q, 44);
 enqueue(&q, 49);
 cout<<"Element enqueed"<<endl;
  printArray(&q, q.front, q.rear);
  cout<<"dequeing the element"<<endl;
  dequeue(&q);
  dequeue(&q);
  dequeue(&q);
  if(isfull(&q)){
      cout<<"queue is full"<<endl;
  }
  else{
      cout<<"queue is not full"<<endl;
  }
  if(isempty(&q)){
      cout<<"queue is empty"<<endl;
  }
  else{
      cout<<"queue is not empty"<<endl;
  }
    printArray(&q, q.front, q.rear);

return 0;
}