#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
    int n,len =0,maxlen = 0,boole;
    cin>>n;
    len = 1, maxlen = 1;
   for(int i=1;i<= n;i++){
       len =1;
      for(int j = i; j<=n; j++){
          boole = i&j;
          if(boole > 0){
              len++;
          }
          else{
              if(maxlen < len){
                  maxlen = len;
              }
              len = 1;
          }
      }
   }
   cout<<maxlen<<endl;
return 0;
}