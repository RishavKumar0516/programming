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

 //creating list

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

//--------------creating intersection-----------------------

void create_intersect(struct Node* head1, int length1, struct Node* head2, int length2){

    int d=0;
     struct Node* ptr1;  //ptr1 always point to the list which is larger.
     struct Node* ptr2;  //ptr2 always point to the list which is smaller.
     if(length1 > length2){
          d = length1-length2;
          ptr1 = head1;
          ptr2 = head2;
     }
     else{            
          d = length2-length1;
          ptr1 = head2;
          ptr2 = head1;
     }

          int index =0;
     while(index != d){
         ptr1=ptr1->next;
         index++;
     }
         
         struct Node* temp1;
         struct Node* temp2;

          while(ptr1 !=NULL && ptr2 != NULL){

         if(ptr1->data != ptr2->data){
            temp1=ptr1;
            temp2=ptr2;

         }
         else if(ptr1->data == ptr2->data){   
              temp2->next = ptr1;
              break;
         }

         ptr1 = ptr1->next;
         ptr2 = ptr2->next;
     }
    
 

}





 int length(struct Node* ptr){
     int i=0;
     while(ptr !=NULL){
         ptr = ptr->next;
         i++;
     }
     return i;
 }

 struct Node* Find_intersection_node(struct Node* head1, struct Node* head2){
     
     //find length
     int len1=length(head1);
     int len2 = length(head2);

     int d=0;
     struct Node* ptr1;  //ptr1 always point to the list which is larger.
     struct Node* ptr2;  //ptr2 always point to the list which is smaller.
     if(len1 > len2){
          d = len1-len2;
          ptr1 = head1;
          ptr2 = head2;
     }
     else{            
          d = len2-len1;
          ptr1 = head2;
          ptr2 = head1;
     }

     int index =0;
     while(index != d){
         if(ptr1==NULL){
             return NULL;
         }
         ptr1=ptr1->next;
         index++;
     }

     //Now we are at the dth node of larger list.
     //and start traversing both the list.

     while(ptr1 !=NULL && ptr2 != NULL){
         if(ptr1==ptr2){
             return ptr1;
         }
         ptr1 = ptr1->next;
         ptr2 = ptr2->next;
     }
     return NULL;


 }
int main()
{
int arr[] = {1,2,3,4,5,6,7,8};
int arr2[] = {3,0,6,7,8};
int len1= sizeof(arr)/sizeof(int);
int len2= sizeof(arr2)/sizeof(int);

struct Node* firstnode1 = createlist(arr,len1);
struct Node* firstnode2 = createlist(arr2,len2);

traversal(firstnode1);
traversal(firstnode2);

create_intersect(firstnode1, len1-1, firstnode2, len2-1);

 
struct Node* ptr = Find_intersection_node(firstnode1, firstnode2);

printf("%d",ptr->data);
 
return 0;
}