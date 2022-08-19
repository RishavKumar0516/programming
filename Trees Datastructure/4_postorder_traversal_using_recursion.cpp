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

//  postorder traversal
void postordertrav(struct node* root){
   if(root==NULL){
     return;
   }
   
   postordertrav(root->left);
   postordertrav(root->right);
      cout<<root->data<<" ";
}

// return the traversal in form of vector.
void postorderTraversal(struct node*root, vector<int>&vec){
    if(root==NULL){
        return;
    }
    
    postorderTraversal(root->left, vec);
    postorderTraversal(root->right, vec);
    vec.push_back(root->data);

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
 postordertrav(root);


 vector<int>ans;
 postorderTraversal(root, ans);
 cout<<endl;
 for(auto it : ans){
    cout<<it<<" ";
 }
}