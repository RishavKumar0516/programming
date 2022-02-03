#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

/* 
  unordered_map do not store the key in sorted order. 
  It uses hash table for insertion.
   Average time compexity of inserting a single key/value pair in in unordered_map is O(1).
 */
 
int main()
{
//  unordered_map<int, string> m;
//  m[1] = "abc";
//  m[5] = "dfg";
//  m[2] = "rgt";
//  m[6] = "agh";
//  m[3] = "fge";
//  unordered_map<int, string>::iterator it;
//  for(it = m.begin();it!= m.end();++it){
//      cout<<(*it).first<<" "<<(*it).second<<endl;
//  }

// ---------------Solving a question on unordered map -----------------------
/* 
   Given N string and Q queries.
   In each query you are given a string 
   print frequency of theat string
   N <= 10^6
   |S| <= 100
   Q <= 10^6
 */

 unordered_map<string, int> m;
     int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        m[s] = m[s]+1;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    for(auto ptr : m){
       cout<<ptr.first<<" "<<ptr.second<<endl;
    }

return 0;
}