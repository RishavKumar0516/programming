#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int chefloves(string s, int n){
 string str = "";
 int zero = 0;
 int ones = 0;
 for(int i = 0; i < n; i++){
  if(s[i] == '0'){
   zero++;
  }
  if(s[i]=='1'){
   ones++;
  }
 }
 if(zero == ones){
  for(int i = 0; i<ones; i++){
   str+="10";
  }
 }
 else if(zero > ones){
  for(int i = 0; i<ones; i++){
   str+="01";
  }
  for(int i = 0; i < zero-ones;i++){
   str+="0";
  }
 }
  else if(ones > zero){
  for(int i = 0; i<zero; i++){
   str+="10";
  }
  for(int i = 0; i < ones-zero;i++){
   str+="1";
  }
 }
 int len = 0;
 cout<<str;
 for(int i = 0;i < n; i++){
   if(str[i] == '1' && str[i+1] == '0'){
    len++;
   }
 }
 return len-1;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	 int n;
	 char ch;
	 cin>>n;
	 string s = "";
	 for(int i = 0; i < n; i++){
	  cin>>ch;
	  s+= ch;
	 }
	 int ans = chefloves(s, n);
	 cout<<ans<<endl;
	}
	
	
	return 0;
}