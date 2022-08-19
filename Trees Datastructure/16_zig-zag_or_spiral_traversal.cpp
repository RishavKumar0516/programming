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

vector<vector<int>> spiral_Traversal(struct node* root){
	vector<vector<int>>result;
	if(root==NULL)
		return result;
	queue<node* >q;
	q.push(root);
	bool lefttoright= true;

	while(! q.empty()){
		int size = q.size();
		vector<int>row(size);
		for(int i = 0; i < size; i++){
			struct node* temp = q.front();
            q.pop();
            int index = (lefttoright)? i : (size-1-i);
            row[index] = temp->data;
            if(temp->left != NULL)
            	q.push(temp->left);
            if(temp->right != NULL)
            	q.push(temp->right);
		}
		lefttoright =! lefttoright;
		result.push_back(row);
	}
	return result;
 }

int main(){
   struct node* root = new node(1);
 root->left = new node(2);
 root->right = new node(3);
 root->left->left = new node(4);
 root->left->right = new node(5);
 root->right->left = new node(6);
 root->right->right = new node(7);
 vector<vector<int>>vec =  spiral_Traversal(root);
    for(auto it : vec){
    	for(auto itr : it){
    		cout<<itr<<" ";
    	}
    	cout<<endl;
    }
}