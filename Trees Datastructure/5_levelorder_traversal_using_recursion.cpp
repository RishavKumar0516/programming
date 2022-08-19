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

//  levelorder traversal
vector<vector<int>> levelorderTrav(struct node* root){
    vector<vector<int>>ans;
   if(root==NULL){
     return ans;
   }

   queue<node*>q;
   q.push(root);

   while(! q.empty()){
    int Size = q.size();
    vector<int>level;
    for(int i = 0; i < Size; i++){
        struct node* Node = q.front();
        q.pop();
        if(Node->left != NULL)
        q.push(Node->left);
        if(Node->right != NULL)
        q.push(Node->right);
        level.push_back(Node->data);
    }
    ans.push_back(level);
   }
   return ans;
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
 vector<vector<int>>ans = levelorderTrav(root);
 for(auto it : ans){
    for(auto itr : it){
        cout<<itr<<" ";
    }
    cout<<endl;
 }
}