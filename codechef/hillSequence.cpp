#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
 
int isIncreasingOrder(int *arr, int size){
    for(int i=0;i<size-1;i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
            return 1;
    }
}
 
int isDecreasingOrder(int *arr, int size){
    for(int i=0;i<size-1;i++){
        if(arr[i] < arr[i+1]){
            return 0;
        }
            return 1;
    }
}


int main()
{
int t;
cin>>t;
while(t--){
    int n;/* size of the array */
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isIncreasingOrder(arr, n)){
        cout<<"array is in increasing order"<<endl;
    }
    else if(isDecreasingOrder(arr, n)){
        cout<<"array is in Decreasing order"<<endl;
    }
    else{
        cout<<"donot contain any order"<<endl;
    }
}
return 0;
}