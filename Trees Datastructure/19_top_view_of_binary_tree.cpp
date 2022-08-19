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

vector<int> topview(node* root){
	vector<int>ans;
	if(root==NULL)
		return ans;

	map<int, int>mpp;
	queue<pair<node*, int>>q;
	q.push({root, 0});

	while(! q.empty()){
		auto it = q.front();
		q.pop();
		node* temp = it.first;
		int line = it.second;
		if(mpp.find(line)==mpp.end())
			mpp[line] = temp->data;
		if(temp->left!=NULL)
			q.push({temp->left, line-1});
		if(temp->right != NULL)
			q.push({temp->right, line+1});
	}
	for(auto it : mpp)
		ans.push_back(it.second);
	return ans;
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
   vector<int>vec= topview( root);
   	for(auto itr : vec){
   		cout<<itr<<" ";
   	}	
}