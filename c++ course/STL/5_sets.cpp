#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

template <class T>

void print(T &s){
   set <string> :: iterator it;
   for(it = s.begin(); it != s.end(); it++){
       cout<<(*it)<<endl;
   }
   cout<<"\n";
}
void print(multiset < string> &s){
   multiset <string> :: iterator it;
   for(it = s.begin(); it != s.end(); it++){
       cout<<(*it)<<endl;
   }
   cout<<"\n";
}

/* 
  1.  sets : sets store unique value in the form of keys. It stores the keys in   sorted form.
   we  use complex datatype such as pairs,vector etc in set
   so we use sets when we have to find the unique element in sorted order from the given list.
 */
 
int main()
{
    // set<string> s;
    // s.insert("abc");  // time complexity of inserting a set is O(log(n)).
    // s.insert("rgh");
    // s.insert("bcd");
    // print(s);
//    //find() :-  for finding the element is present in set or not, we use find function
//    auto iter = s.find("rgi");  // time complexity of finding a set is O(log(n)).
//    if(iter != s.end()){
//    cout<<(*iter)<<endl;
//    }
//    else{
//        cout<<"The value doesn't exists"<<endl;
//    }
//    //erase() :- for erasing a cretain keys we use erase function, It takes iterator or keys as input.
//    if(iter != s.end()){
//           s.erase(iter);
//    }
//    print(s);
//    s.erase("abc");
//    print(s);


   //  ------------question on sets-------------------
   /* 
     Given N strings print unique strings in lexicographical order
     N<= 10^5
     |S| <= 100000
    */

   // Sol--

//    set<string> s;
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        string str;
//        cin>>str;
//        s.insert(str);

//    }
//    cout<<"\n";
//    for(auto value : s){
//        cout<<value<<endl;
//    }


   /* 2. unordered_set : unordered_set stores the key in default order. it not stores element in sorted order. the time complexity of insertion or findind a single key is O(1).
   we cannot use complex datatype such as pairs,vector etc in unordered_set
   so, we use unordered_set when we have to find the unique element, no any orders are matter.
    */
 
//    unordered_set <int> num;
//    num.insert(3);
//    num.insert(8);
//    num.insert(5);
//    num.insert(7);
//    num.insert(4);
//    for(auto iter : num){
//        cout<<iter<<endl;
//    }

/* ----------------Question on unordered_set----------------- */
/* 
     Given N strings and q queries.
     in each query you are given a string print yes if string is persent else no
     N<= 10^6
     |S| <= 100
     Q<= 10^6
 */
  // sol--

  
    // unordered_set<string> s;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     string str;
    //     cin>>str;
    //     s.insert(str);

    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     string str;
    //     cin>>str;
    //     auto iter = s.find(str);
    //     if(iter == s.end()){
    //        cout<<"No"<<endl;

    //     }
    //     else{
    //         cout<<"Yes"<<endl;
    //     }
    // }


/* 
  2.  multiset :-  It allows you to insert multiple keys of same type. It allows you to store duplicate keys in sorted order
  the time complexity of insertion or finding a single key is O(log(n)).
  we use the multiset in place of proirity queue. because priority queue store duplicate element in sorted order and multiset perform same task.
 */
    
    multiset < string> s;
    s.insert("abc");
    s.insert("zef");
    s.insert("bcd");
    s.insert("abc");
    s.insert("abc");
    for(auto it : s){
        cout<<it<<endl;
    }
    //find() : the find function in mutliset return the first matched value. if their exist two duplicate of abc then it return the iterator of first abc.
    auto it = s.find("abc");
    if(it != s.end()){
        //erase() : if we pass iterator to erase function then it erase value persent at those iterator.
        s.erase(it);
    }
    print(s);
            //erase() : if we pass value to erase function then it erase all the matched value from the multiset.
    s.erase("abc");
    print(s);


return 0;
}