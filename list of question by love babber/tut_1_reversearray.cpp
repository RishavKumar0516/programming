#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

void swap(int* p, int* q){
   int temp = *p;
   *p = *q;
   *q = temp;
}
 void reverse(int* arr, int length){    
   int start = 0;
   int end = length-1;
   while(start < end){
       swap(&arr[start], &arr[end]);
       start++;
       end--;
   }
 }
 
  void printArray(int *arr, int len){
     for(int i=0;i<len;i++){
         cout<<arr[i]<<endl;  
     }
 }

int main()
{   
 int size;
 cin>>size;
 int arr[size];
 for(int i =0; i<size; i++){
    cin>>arr[i];
 }
 reverse(arr, size);   
 printArray(arr,size);
return 0;
}