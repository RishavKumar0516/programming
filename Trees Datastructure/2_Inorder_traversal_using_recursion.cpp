#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left, *right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};

//  Inorder traversal
void inordertrav(struct node* root){
   if(root==NULL)
   return;

   inordertrav(root->left);
   cout<<root->data<<" ";//printing root
   inordertrav(root->right);
}

int main(){
   struct node* root = new node(1);
   root->left = new node(2);
   root->right = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(7);
   root->left->left->left = new node(5);
   root->left->left->right = new node(6);
   inordertrav(root);
   return 0;
}