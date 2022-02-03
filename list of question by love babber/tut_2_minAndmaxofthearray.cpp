#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

struct Pair{
    int min;
    int max;
};

/* -------------using linear search------------ */

struct Pair findMinMax(int *arr, int len){
    struct Pair minmax;
    int min = INT_MAX;
    int max = INT_MIN;

for(int i=0;i<len;i++){
    if(arr[i] < min){
        min = arr[i];
    }
    if(arr[i] > max){
        max = arr[i];
    }

}
   minmax.min = min;
   minmax.max = max;
   return minmax;
}

 
int main()
{
  int size;
 cin>>size;
 int arr[size];
 for(int i =0; i<size; i++){
    cin>>arr[i];
 }
 struct Pair num =  findMinMax(arr,size);
 cout<<num.min<<endl<<num.max<<endl;
return 0;
}