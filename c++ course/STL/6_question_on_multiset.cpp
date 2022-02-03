#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

/* we solve the probleum using multiset when we needed to store the duplicate in sorted form. */

/* question is from hackerrank >  data structure > trees > map. */
 
int main()
{
 int t;
 cin>>t;
 while(t--){
     int n,k;
     cin>>n>>k;
     multiset < long long> bags;
     for(int i = 0; i < n; i++){
         long long candy;
         cin>>candy;
         bags.insert(candy);
     }
     long long total_candies = 0;
     for(int i = 0; i < k;i++){
         auto last_it = (--bags.end());//finding maximum element in multiset which is previous to last iterator, because end() function will point to the next of last iterator. so we are predecrementing the iterator.
         long long candy_count = *last_it;
         total_candies += candy_count;
         bags.erase(last_it);
         bags.insert(candy_count/2);
     }
     cout<<total_candies<<endl;
 }
return 0;
}