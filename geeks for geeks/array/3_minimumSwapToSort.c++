#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

void swap(int* p, int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
 
int main()
{
    int n = 5;
    int arr[n] = {10, 19, 6, 3, 5};
    int temp;
   int first = 0, mid = 1, last = 2;
   while(last < n){
      if(arr[mid] > arr[last]){
         swap(&arr[mid], &arr[last]);
      }
      if(arr[first] > arr[last]){
            swap(&arr[first], &arr[last]);
      }
      if(arr[first] > arr[mid]){
            swap(&arr[first], &arr[mid]);
      }
      first++;
      mid++;
      last++;

      
   }
   for(int i = 0; i< n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
return 0;
}