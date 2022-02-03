#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;
 
/* global variable decleration here:- */
 void display(int arr[], int n){
   for(int i = 0; i < n; i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
 }
int main()
{
 int arr[] = {1,73,4,2,54,7};
 int n = sizeof(arr)/sizeof(int);
  display(arr, n);
 //  to sort the array for the limited index.
 sort(arr,arr+5);
 display(arr, n);
 //to sort the whole array
 sort(arr, arr+n);
  display(arr, n);
  //to sort the whole array in decending order we use function object
  sort(arr, arr+n, greater<int>());
   display(arr, n);
return 0;
}