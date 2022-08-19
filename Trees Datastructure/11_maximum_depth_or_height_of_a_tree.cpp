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

int maxdepth(node* root){
	if(root==NULL)
		return 0;
	int lh = maxdepth(root->left);
	int rh = maxdepth(root->right);

	return 1+max(lh, rh);
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
 int count = maxdepth(root);
    cout<<count<<endl;
}