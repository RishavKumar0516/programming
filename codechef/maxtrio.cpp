#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxtrio(int* arr, int n){
 int max1 = INT_MIN+1, max2 = INT_MIN;
 int min = INT_MAX;
 for(int i = 0; i < n; i++){
  if(arr[i] >= max1){
   max2 = max1;
   max1 = arr[i];    
  }
  else if(arr[i] > max2 && arr[i] != max1){
      max2 = arr[i];
  }
  if(arr[i] < min){
   min = arr[i];
  }
 }
 int ans = (max1 - min)*max2;
 return ans;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	 long long int n;
	 cin>>n;
	 int arr[n];
	 for(int i = 0; i < n; i++){
	  cin>>arr[i];
	 }
	 int val = maxtrio(arr,n);
	 cout<<val<<endl;
	}
	return 0;
}