    #include<stdio.h>
    #include<stdlib.h>

    struct Node{
        int data;
        struct Node* next;
    };

      //these function prints the data field of the node.
    void linkedList_traversal(struct Node* head){
        while(head!=NULL){
            printf("%d\n",head->data);
            head=head->next;
        }
        printf("\n");
    }

    //insert new node at first of the linked list.

    struct Node* insertAtFirst(struct Node* head,int element){
        struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
        ptr->data=element;
        ptr->next=head;
        head=ptr;
        return head;
    }

    // insert in the between of the node.

    struct Node* insert_in_between(struct Node* head,int value,int index){
        struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
        //for getting the pointer at the given index.
        struct Node* p=head;
        int i=0;
        while(i!=index-1){
            p=p->next;
            i++;
        }
        ptr->data=value;
        ptr->next=p->next;
        p->next=ptr;
        return head;

    }

       // insert the new node  at end of the list.

       struct Node* insert_At_End(struct Node* head,int value){

        struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));//new node for insert at the end.


        // traversing the list for getting the end node.
        struct Node* p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        ptr->data=value;
        ptr->next=p->next;
        p->next=ptr;
        return head;
       }

       // inserting the new node after the given pointer.

       struct Node* insertAfter_the_node(struct Node* head,struct Node* prevpointer,int value){
       
        struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));

        ptr->data=value;
        ptr->next=prevpointer->next;
        prevpointer->next=ptr;
        return head;
       }

    int main(){
        struct Node* head;
        struct Node* second;
        struct Node* third;
        struct Node* forth;
        struct Node* fifth;
        head=(struct Node*)malloc(sizeof(struct Node));
        second=(struct Node*)malloc(sizeof(struct Node));
        third=(struct Node*)malloc(sizeof(struct Node));
        forth=(struct Node*)malloc(sizeof(struct Node));
        fifth=(struct Node*)malloc(sizeof(struct Node));

        head->data=34;
        head->next=second;   //linking the head and the second node.

        second->data=12;
        second->next=third;  //liking the second and the third node.

        third->data=56;
        third->next=forth;   //linking the third and the forth node.

        forth->data=88;
        forth->next=fifth;   //linking the forth and the fifth node.

        fifth->data=10;
        fifth->next=NULL;    //terminate the node from fifth node.

        linkedList_traversal(head);  

        printf("inserting new node in the first of the node\n");

        head=insertAtFirst(head,45);

        linkedList_traversal(head);

        printf("inserting new node in the between of the node\n");

        head=insert_in_between(head,30,3);  

        linkedList_traversal(head);

        printf("inserting new node in the end of the node\n");

        head=insert_At_End(head,5);

        linkedList_traversal(head);   

        printf("inserting new node after the given pointer of the node\n");

        head=insertAfter_the_node(head,fifth,3);

        linkedList_traversal(head);

    }