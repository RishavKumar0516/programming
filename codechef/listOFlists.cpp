#include<iostream>
#include<climits>
using namespace std;
 
 int maximum(int* arr,int n){
     int max = INT_MIN;
     for(int i=0;i<n;i++){
     if(arr[i] > max){
         max = arr[i];
     }
     }
     return max;

 }
 int maximumIndex(int* arr,int n){
     int max = INT_MIN;
     for(int i=0;i<n;i++){
     if(arr[i] > max){
         max = arr[i];
     }
     }
     return max;

 }
/* global variable decleration here:- */
int list(int* A, int n){

int maxele = maximum(A, n); 
int arr[maxele+1];
for(int i = 0;i<maxele+1;i++){
    arr[i] = 0;
}
for(int i =0;i<n;i++){
    arr[A[i]]++;
}
  int freq = maximumIndex(arr, maxele+1);
   if(n == 1){
       return 0;
   }
   else if(freq>=2){
       return (n-freq+1);
   }
   else{
       return -1;
   }

}
 
int main()
{
 int t;
 cin>>t;
 int n, res;
 while(t--){
   cin>>n;
   int arr[n];
   for(int i = 0; i< n;i++){
       cin>>arr[i];
   }
   res = list(arr, n);
   cout<<res<<endl;
 }
return 0;
}