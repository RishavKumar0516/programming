#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* head){
    struct Node* ptr=head;
   do{
       printf("%d",ptr->data);
       ptr=ptr->next;
   }while(ptr->next!=head);
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* forth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    forth=(struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=4;
    third->next=forth;

    forth->data=5;
    forth->next=head;
    //function calls.

    printf("the value of circular linked  \n");   
    traversal(head);

}
