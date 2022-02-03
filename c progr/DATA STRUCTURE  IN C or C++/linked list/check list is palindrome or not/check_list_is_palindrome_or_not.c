#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c



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
}


bool checkpalindrome(struct Node* head){

int arr[100000];

struct Node* p=head;
int i=0;
while(p!=NULL){
arr[i]= p->data;
p=p->next;
i++;

}
int size=i;
//printf("%d",size);

int* first=arr;
int* last=arr+size-1;
bool check;

while(first<last){
if(*first==*last){
  check=true;
}
else{
    check=false;
    return false;//if false it returns false
}
first+=1;
last-=1;

}
return true;  //  if loop is not terminated then, it means list is palindrome then returns true.
}




int main()
{
int arr[] = {1,4,4,1};
int len= sizeof(arr)/sizeof(int);

struct Node* firstnode = createlist(arr,len);

traversal(firstnode);
 
bool check=checkpalindrome(firstnode);
if(check==true){
    printf("true");
}
else{
    printf("false");
}

return 0;
}






