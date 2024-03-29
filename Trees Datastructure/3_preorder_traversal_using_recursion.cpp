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

//  preorder traversal
void preordertrav(struct node* root){
   if(root==NULL){
     return;
   }
   
   cout<<root->data<<" ";
   preordertrav(root->left);
   preordertrav(root->right);
}

int main()
{
 struct node* root = new node(1);
 root->left = new node(2);
 root->right = new node(3);
 root->left->left = new node(4);
 root->left->right = new node(5);
 root->right->left = new node(6);
 root->right->right = new node(7);
 preordertrav(root);
}