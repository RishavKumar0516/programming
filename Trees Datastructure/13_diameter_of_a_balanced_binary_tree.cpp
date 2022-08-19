#include<bits/stdc++.h>
using namespace std;

//using recursive postorder approach

struct node{
    int data;
    struct node* left, *right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
int height(struct node* root, int &diameter){
    if(!root){
        return 0;
    }
    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);
    diameter = max(diameter, lh+rh)
    return 1+ max(lh, rh);
}

int diameterofbinarytree(struct node* root){
    int diameter = 0;
    height(root, diameter);
    return diameter;
}

 int main(int argc, char const *argv[])
{
     struct node* root = new node(1);
 root->left = new node(2);
 root->right = new node(3);
 root->left->left = new node(4);
 root->left->right = new node(5);
 root->right->left = new node(6);
 root->right->right = new node(7);
 int count = diameterofbinarytree(root);
    cout<<count<<endl;
}