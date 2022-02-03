#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* CreateNode(int data){
    struct Node* ptr;
    ptr=malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;

}

struct Node* Search(struct Node* root,int key){
    while(root!=NULL){
        if(root->data==key){
            return root;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return NULL;
}

int main(){
   struct Node* p=CreateNode(50);
   struct Node* p1=CreateNode(40);
   struct Node* p2=CreateNode(60);
   struct Node* p3=CreateNode(20);
   struct Node* p4=CreateNode(45);
   struct Node* p5=CreateNode(55);
   struct Node* p6=CreateNode(70);

   //linking the node

   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
   p2->left=p5;
   p2->right=p6;

   //searching for the element...

   struct Node* n=Search(p,54);
   if(n!=NULL){
       printf("found : %d",n->data);
   }
   else{
       printf("not found");
   }

}