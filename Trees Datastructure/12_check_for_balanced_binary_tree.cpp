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

int dfsheight(struct node* root){
	if(root==NULL) return 0;
	int leftHeight = dfsheight(root->left);
	if(leftHeight==-1)
		return -1;
	int rightHeight = dfsheight(root->right);
	if(rightHeight==-1)
		return -1;
	if(abs(leftHeight-rightHeight)>1)
		return -1;
	return max(leftHeight, rightHeight)+1;
}

bool isBalanced(struct node* root){
	return dfsheight(root) != -1;
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
 int count = isBalanced(root);
    cout<<count<<endl;
}