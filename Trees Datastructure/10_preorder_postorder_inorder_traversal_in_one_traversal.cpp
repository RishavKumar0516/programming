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

void alltraversal(node* root, vector<int>&pre, vector<int>&in,
	vector<int>&post){
	stack<pair<node*, int>>st;
	st.push({root, 1});

	if(root==NULL)
		return;

	while(! st.empty()){
		auto it = st.top();
		st.pop();
		if(it.second==1){
			pre.push_back(it.first->data);
			it.second++;
			st.push(it);

			if(it.first->left != NULL){
				st.push({it.first->left, 1});
			}
		}
		else if(it.second==2){
			in.push_back(it.first->data);
			it.second++;
			st.push(it);

			if(it.first->right != NULL)
				st.push({it.first->right, 1});
		}
		else{
			post.push_back(it.first->data);
		}
	}
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
 vector<int>pre;
 vector<int>in;
 vector<int>post;
 alltraversal(root, pre, in, post);
    for(auto itr : pre){
        cout<<itr<<" ";
    }
    cout<<endl;
        for(auto itr : in){
        cout<<itr<<" ";
    }
    cout<<endl;
        for(auto itr : post){
        cout<<itr<<" ";
    }
	return 0;
}