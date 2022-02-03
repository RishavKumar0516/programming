#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
 int t; 
 int x,y;
 cin>>t;
 while(t--){
   cin>>x>>y;
   if(x%2==0){
       if(x==0){
           if(y%2==0){
               cout<<"yes"<<endl;
           }
           else 
               cout<<"no"<<endl;
       }
       else{
           cout<<"yes"<<endl;
       }
   }
   else{
       cout<<"no"<<endl;
   }
 }
return 0;
}