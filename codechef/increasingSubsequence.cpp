#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

void subsequence(int* arr, int size){
   int len = 0;
   int maxlen = 0;
   int start = 0;
   int prev = 0;
   int curr = 0;
   len = 1;
   maxlen = 1;
   for(int i=1;i<size;i++){
     curr = i;
     if(arr[prev] < arr[curr]){
         len++;

     }else{
         if(maxlen < len){
             maxlen = len;
             start = curr;
         }
         len = 1;

     }
              prev = curr;
   }
//    if(maxlen < len){
//        maxlen = len;
//        start = curr;
//    }
   start = start-maxlen;
   cout<<start<<endl;
   cout<<maxlen<<endl;
   for(int i= start; i< (maxlen + start); i++){
      cout<<arr[i]<<endl;
   }
}
 
int main()
{
    int arr[8] = {1,2,0,3,2,5,6,7};
 subsequence(arr,8);
return 0;
}