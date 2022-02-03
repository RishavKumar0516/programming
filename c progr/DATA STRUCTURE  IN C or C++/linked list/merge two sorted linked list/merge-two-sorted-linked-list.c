#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node* head){

    while(head!= NULL){
        printf("%d  ",head->data);
        head = head->next;

    }
    printf("\n");
}

struct Node* sorting_linked_list( struct Node* first, struct Node* second){
     
     struct Node* new;
     struct Node* ptr = first;

     while(second != NULL){
       new =second;

       if(new->data < ptr->data){
           new->next = ptr;
           ptr = new;
           second = second->next;

       }
       else if( new->data == ptr->data){
           new->next = ptr->next;
           ptr->next = new;
           ptr = ptr->next;
           second = second->next;
       }
       else if(new->data > ptr->data){
           ptr = ptr->next;
       }
       
     }
     return first;
}


int main()
{

    // create first linked list

    struct Node* first = malloc(sizeof(struct Node));
    struct Node* first1 = malloc(sizeof(struct Node));
    struct Node* first2 = malloc(sizeof(struct Node));

    first->data = 1;
    first->next = first1;

    first1->data = 2;
    first1->next = first2;

    first2->data = 4;
    first2->next = NULL;

    // create second linked list.

    
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* second1 = malloc(sizeof(struct Node));
    struct Node* second2 = malloc(sizeof(struct Node));

    second->data = 1;
    second->next = second1;

    second1->data = 3;
    second1->next = second2;

    second2->data = 4;
    second2->next = NULL;

    traversal( first);
    traversal( second);
    first = sorting_linked_list(first,second);
    traversal( first);
    

}