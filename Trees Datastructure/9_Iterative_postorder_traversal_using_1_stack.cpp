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
   if(root==NULL)
   return postorder;

   stack<node*>s;
   while(root != NULL or ! s.empty()){
      if(root != NULL){
        s.push(root);
        root = root->left;
      }
      else{
        node* temp = s.top()->right;
        if(temp==NULL){
            temp = s.top();
            s.pop();
            postorder.push_back(temp->data);
            while(!s.empty() && temp==s.top()->right){
                temp = s.top();
                s.pop();
                postorder.push_back(temp->data);
            }
        }
        else root = temp;
      }
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