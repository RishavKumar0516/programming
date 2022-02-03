#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */
void printArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int find_consecutivesequence(int arr[],int N){
      int max = INT_MIN;
       for(int i = 0; i<N;i++){
           if(arr[i] > max){
               max = arr[i];
           }
       }
       int temp[max+1];
       for(int i = 0; i < max+1; i++){
           temp[i] = 0;
       }
       for(int i = 0; i < N; i++){
           temp[arr[i]]++;
       }
       int i = 0;
       int j = 0;
       while(j < max+1){
           if(temp[j] > 0){
               arr[i] = j;
               temp[j] = temp[j]-1;
               i++;
           }
           else{
               j++;
           }
       }
       int count = 1;
       int maxcount = 0;
       for(int m = 0; m < N-1; m++){
           int next = arr[m] + 1;
           if(next == arr[m+1]){
               count++;
           }
           else{
               if(maxcount < count){
                   maxcount = count;
               }
               count = maxcount;
           }
       }
       printArray(arr,N);
       return count;
}
 
int main()
{
 int arr[] = {6, 6, 2, 3, 1, 4, 1, 5, 6, 2, 8, 7, 4, 2, 1, 3, 4, 5, 9, 6};
 int n = 20;
 int len = find_consecutivesequence(arr, n);
 cout<<len<<endl;
return 0;
}