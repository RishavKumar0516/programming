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

//  Iterative Inorder Traversal
vector<int> inorderTrav(struct node* root){
   vector<int>inorder;
   stack<node* >s;
   while(1){
    if(root!=NULL){
       s.push(root);
       root = root->left;
    }
    else{
        if(s.empty())
        break;
        root = s.top();
        inorder.push_back(root->data);
        s.pop();
        root = root->right;
    }
   }
   return inorder;
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
 vector<int>ans = inorderTrav(root);
    for(auto itr : ans){
        cout<<itr<<" ";
    }
}