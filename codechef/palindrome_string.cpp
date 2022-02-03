#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
 int t;
 int count = 0;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         int k;
         cin>>k;
         if(k%2!=0){
             count++;
         }
     }
     if(count%2!=0)
     count--;
     cout<<count/2<<endl;
 }
return 0;
}