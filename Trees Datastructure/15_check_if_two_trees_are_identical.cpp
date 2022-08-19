#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;

	node(int val){
       data = val;
       left = right = NULL;
	}
};

bool isIdentical(struct node* root1, struct node* root2){
   if(root1==NULL && root2==NULL){
   	return true;
   }
   else if(root1==NULL || root2==NULL){
   	return false;
   }

   return ((root1->data == root2->data) && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right));
}

int main(){
  //creating first trees
  struct node* root1 = new node(1);
  root1->left = new node(2);
  root1->right = new node(3);
  root1->left->left = new node(4);
  root1->left->right = new node(5);
  root1->right->left = new node(6);
  root1->right->right = new node(7);	

  //creating second trees
  struct node* root2 = new node(1);
  root2->left = new node(2);
  root2->right = new node(3);
  root2->left->left = new node(4);
  root2->left->right = new node(5);
  root2->right->left = new node(6);
  root2->right->right = new node(7);
  bool identical = isIdentical(root1, root2);
  cout<<identical<<endl;	
}