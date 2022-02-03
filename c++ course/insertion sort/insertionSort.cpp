#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

 void insertionsort(int *arr, int n){
     int j,key;
     for(int i=0;i<n;i++){
         key = arr[i];
         j = i-1;
         while(j>=0 && arr[j] > key){
             arr[j+1] = arr[j];
             j--;
         }
         arr[j+1] = key;
     }
 }

 void print(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
 
int main()
{
    int arr[]={56,47,28,95,32,55,40,5};
    int n=8;
 insertionsort(arr, n);
 print(arr, n);
return 0;
}