#include<stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
 

 struct Node* CreateNode(int data){
   struct Node* n;
   n=(struct Node*)malloc(sizeof(struct Node));
   n->data=data;
   n->left=NULL;
   n->right=NULL;
 }


int main(){
struct Node* p=CreateNode(4);
struct Node* p1=CreateNode(6);
struct Node* p2=CreateNode(7);
struct Node* p3=CreateNode(2);
struct Node* p4=CreateNode(9);
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
}