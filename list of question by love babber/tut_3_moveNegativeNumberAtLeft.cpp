#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
int main()
{
 int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
 int n = 9;
  int j = 0;
 for(int i = 0;i < n;i++){
      if(arr[i] < 0){
          if(i!=j){
          int temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
          j++;
          }
      }

 }
 for(int i = 0; i< n; i++){
     cout<<arr[i]<<endl;
 }
return 0;
}