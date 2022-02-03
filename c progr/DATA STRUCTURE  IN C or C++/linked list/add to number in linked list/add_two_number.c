#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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

struct Node* sum_two_list(struct Node* head1, struct Node* head2){

    struct Node* dummy = malloc(sizeof(struct Node));
    dummy->data = -1;
    struct Node* p = head1;
    struct Node* q = head2;
    struct Node* r = dummy;

    int val,carry =0;


    while(p !=NULL && q !=NULL){
        struct Node* newnode = malloc(sizeof(struct Node));
        val = p->data + q->data; //2+5=7  4+6=10   3+4=7
        printf("the value of p is %d and q is %d and sum is %d\n",p->data,q->data,val);
        val=val+carry;           //7+0=7  10+0=10  7+1=8  
        printf("carry is %d then sum is %d\n",carry,val);
        //if the value contain two digit number.

           carry = val/10;        //0   1   0  
           val = val%10;          //7   0   8
           
           //after obtaining carry  insert the val
           printf("inserting val in the node is %d\n",val);
           newnode->data = val;   //7   0   8
            r->next = newnode;
            r=r->next;
            p=p->next;
            q=q->next;     
 
    }

    while(p != NULL){
        struct Node* newnode = malloc(sizeof(struct Node));
        val = carry + p->data;
        //if the value contain two digit number.
        
           carry = val/10;        //0   1   0  
           val = val%10;          //7   0   8
           
           //after obtaining carry  insert the val
        newnode->data = val; 
            r->next = newnode;
            r=r->next;
            p=p->next;
    }

    while(q != NULL){
        struct Node* newnode = malloc(sizeof(struct Node));
        val = carry + q->data;
        //if the value contain two digit number.
        
           carry = val/10;        //0   1   0  
           val = val%10;          //7   0   8
           
           //after obtaining carry  insert the val
            newnode->data = val; 
            r->next = newnode;
            r=r->next;
            q=q->next;
    }

         if(carry>0){  //  after the addition overs if, we have the carry > 0, then we have to insert the carry as the last node.
            
          struct Node* newnode = malloc(sizeof(struct Node));
          newnode->data = carry;
          r->next = newnode;
          r=r->next;   
            
       }
        r->next=NULL;
        return dummy->next;

}

int main()
{
 
int arr[] = {9,9,9,9,9,9,9};
int arr2[] = {9,9,9,9};
int len1= sizeof(arr)/sizeof(int);
int len2= sizeof(arr2)/sizeof(int);

printf("%d\n",len1);
printf("%d\n",len2);

struct Node* firstnode1 = createlist(arr,len1);
struct Node* firstnode2 = createlist(arr2,len2);

traversal(firstnode1);
traversal(firstnode2);
struct Node* nodereturn = sum_two_list(firstnode1, firstnode2 );
traversal(nodereturn);
 
return 0;
}