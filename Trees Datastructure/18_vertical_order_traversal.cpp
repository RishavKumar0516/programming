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

vector<vector<int>> verticalTraversal(node* root){
	map<int, map<int, multiset<int>>> nodes;
	queue<pair<node*, pair<int, int>>> todo;

	todo.push({root, {0, 0}});

	while(! todo.empty()){
		auto p = todo.front();
		todo.pop();
		node* temp = p.first;

		int x = p.second.first;
		int y = p.second.second;
		nodes[x][y].insert(temp->data);
		if(temp->left){
			todo.push({temp->left, {x-1, y+1}});
		}
		if(temp->right){
			todo.push({temp->right, {x+1, y+1}});
		}
	}

	vector<vector<int>> ans;
	for(auto p : nodes){
		vector<int>col;
		for(auto q : p.second){
			col.insert(col.end(), q.second.begin(), q.second.end());
		}
		ans.push_back(col);
	}
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
   vector<vector<int>>vec= verticalTraversal( root);
   for(auto it : vec)
   {
   	for(auto itr : it){
   		cout<<itr<<" ";
   	}
   	cout<<endl;
   }	
}