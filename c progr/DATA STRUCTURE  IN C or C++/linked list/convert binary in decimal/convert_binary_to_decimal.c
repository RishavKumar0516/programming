#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c
 
 // create global variable here



 struct Node{
  int data;
  struct Node* next;
};

struct Node* createlist(int arr[], int size){
   struct Node* head =malloc(sizeof(struct Node));
   struct Node* ptr = head;//these traverse the list.
    struct Node* p;
   int i=0;

   head->data =arr[0];

   for(i=1; i<size; i++){

       p = malloc(sizeof(struct Node));
       p->data =arr[i];
       ptr->next = p;
       ptr= ptr->next;

   }
   ptr->next = NULL;
   return head;
}

void traversal(struct Node* head){
    while(head!=NULL){
        printf("%d  ",head->data);
        head = head->next;
    }
    printf("\n");
}

int getDecimalValue(struct Node* head){
    struct Node* ptr=head;
    int arr[30+1];
    int size =0;
    traversal(head);
    while(ptr!=NULL)
    {
        
       arr[size] = ptr->data;
        ptr = ptr->next;
        size++;
     }
    int back= size;
    int index= 0;
    int sum =0;
    while(index<=size-1&&back>=0){

        printf("%d\n",arr[index]);
        int power = pow(2.0,back-1);
        printf("%d\n",power);
        sum+=(power*arr[index]);
        printf("%d\n",sum);
        back--;
        index++;
    }
    
    return sum;

}

 
int main()
{
 
int arr[] = {1,0,1};
int len= sizeof(arr)/sizeof(int);

struct Node* firstnode = createlist(arr,len);

traversal(firstnode);

int val = getDecimalValue(firstnode);
 
return 0;
 
}