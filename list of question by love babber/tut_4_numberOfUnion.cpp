#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */
 
   int find_maximum(int *a, int *b, int m, int n){
       int max1 = INT_MIN;
       int max2 = INT_MIN;
       for(int i=0;i<m;i++){
           if(a[i] > max1)
           max1 = a[i];
       }
       for(int i=0;i<n;i++){
           if(b[i] > max2)
           max2 = b[i];
       }
       if(max1 > max2){
           return max1;
       }
       return max2;
   }
   
  int findunion(int *a, int *b, int m, int n){
      int max = find_maximum(a, b, m, n);
      int temp[max +1];
      int count = 0;
      for(int i=0;i<max;i++){
          temp[i] = 0;
      }
      for(int i = 0;i< m;i++){
          temp[a[i]]++;
      }
      for(int i = 0;i< m;i++){
          temp[b[i]]++;
      }
      for(int j = 0;j< max+1;j++){
          if(temp[j] != 0){
              count++;
          }
      }
      return count;
  }

 void print(int* arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }

int main()
{
    int a[5] = {1,2,3,4,5};
    int b[3] = {1,2,3};
 int m = 5, n = 3;
//   cin>>m;
//  int a[m];
   
//  for(int i=0;i<m;i++){
//      cin>>a[i];
//  }
//  cin>>n;
//  int b[n];
//  for(int i=0;i<n;i++){
//      cin>>b[i];
//  }
 print(a, m);
 print(b, n);

 int k = findunion(a, b, m, n);
 cout<<k<<endl;

return 0;
}