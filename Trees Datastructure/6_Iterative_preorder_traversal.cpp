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

//  Iterative Preorder Traversal
vector<int> preorderTrav(struct node* root){
    vector<int>preorder;
    if(root==NULL){
        return preorder;
    }
    stack<node* >s;
    s.push(root);
    while(! s.empty()){
        node* temp = s.top();
        s.pop();
        if(temp->right != NULL){
            s.push(temp->right);
        }
        if(temp->left != NULL){
            s.push(temp->left);
        }
        preorder.push_back(temp->data);
    }
    return preorder;
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
 vector<int>ans = preorderTrav(root);
    for(auto itr : ans){
        cout<<itr<<" ";
    }
}