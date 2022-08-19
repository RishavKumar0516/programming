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

//  Iterative postorder Traversal
vector<int> postorderTrav(struct node* root){
   vector<int>postorder;
   if(root==NULL){
    return postorder;
   }

   stack<node* >s1;
   stack<node* > s2;
   s1.push(root);
   while(! s1.empty()){
    root = s1.top();
    s1.pop();
    s2.push(root);
    if(root->left != NULL){
        s1.push(root->left);
    }
    if(root->right != NULL){
        s1.push(root->right);
    }
   }
   while(! s2.empty()){
      postorder.push_back(s2.top()->data);
      s2.pop();
   }
   return postorder;
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
 vector<int>ans = postorderTrav(root);
    for(auto itr : ans){
        cout<<itr<<" ";
    }
}