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

int findmaxpath(struct node* root, int &maxi){
    if(root==NULL)
        return 0;
    int leftmaxpath = max(0, findmaxpath(root->left, maxi));
    int rightmaxpath = max(0, findmaxpath(root->right, maxi));

    int val = root->data;
    maxi = max(maxi, (leftmaxpath+rightmaxpath)+val);
    return max(leftmaxpath, rightmaxpath)+val;
}

int maxpathsum(struct node* root){
    int maxi = INT_MIN;
    findmaxpath(root, maxi);
    return maxi;
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
 int count = maxpathsum(root);
    cout<<count<<endl;
}  