#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

 
int main()
{

    int A[3] = {0, 0 ,0};
    int n=3;
    int t = 1;
while(t--){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
       for(int i = 0; i < 3; i++){
          int counter = 0;
        int sum = arr[i]+arr[i+1];

       for(int j = i+2; j< 7;j++){
           if(arr[j] == sum ){
                counter++;
           }
       }
       if(counter >= 1)
       A[i] = arr[i];
   }
    for(int i = 0; i < 3; i++){
        cout<<A[i]<<endl;
    }
}
return 0;
}