#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;

	node(int val){
        data = val;
        left=right=NULL;
	}
};

bool isLeaf(struct node* root){
  return !root->left && !root->right;
}

void addleftboundary(node* root, vector<int>&res){
	node* curr = root->left;
	while(curr){
	if(!isLeaf(curr))
		res.push_back(curr->data);
	if(curr->left)//if curr is not null, it means some element is present in place of curr
     curr = curr->left;
     else
     curr = curr->right;		
   }
}

void addrightboundary(node* root, vector<int>&res){
	node* curr = root->right;
	stack<int>s;
	while(curr != NULL){
		if(! isLeaf(curr))
			s.push(curr->data);
		if(curr->right != NULL)
			curr = curr->right;
		else
			curr = curr->left;
	}
	while(! s.empty()){
		res.push_back(s.top());
		s.pop();
	}
}

void addleaves(node* root, vector<int>&res){
	if( isLeaf(root)){
		res.push_back(root->data);
		return;
	}
	if(root->left) addleaves(root->left, res);
	if(root->right) addleaves(root->right, res);
}

vector<int> printBoundary(node* root){
	vector<int>res;
	if(root==NULL)
		return res;

	if(! isLeaf(root))
		res.push_back(root->data);

	addleftboundary(root, res);
	addleaves(root, res);
	addrightboundary(root, res);
	return res;
}

int main(){
   struct node* root = new node(1);
   root->left = new node(2);
   root->right = new node(3);
   root->left->left = new node(5);
   root->left->right = new node(6);
   root->right->left = new node(8);
   root->right->right = new node(9);
   root->right->right->right = new node(15);
   vector<int>vec = printBoundary( root);
   for(auto it : vec)
   cout<<it<<" ";	
}