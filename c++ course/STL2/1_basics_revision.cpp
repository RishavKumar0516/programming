#include<bits/stdc++.h>
using namespace std;

//  Using constructor in structure
   struct node{
       string str;
       int num;
       double doub;
       char x;


       // now creating a construnctor which will set the value of the member of node.
      //   node(str_, num_, doub_, x_){
      //       str = str_;
      //       num = num_;
      //       doub = doub_;
      //       x = x_;
      //   }
   };

int main(){
//  Creating a data type where you store {string, int, double, char}

//   wrong way of defiing
/*
node raj;
raj.str = "rishav";
raj.num = 79;
raj.doub = 91.0;
*/
//   correct way of defining is using constructor

//  node *raj = new node("rishav", 79, 91.0, "");
//  node raj2 =  node("rishav", 79, 91.0, "");
//  cout<<raj2<<endl;
}