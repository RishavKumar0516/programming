#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

void  bubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int issorted = 0;
        for(int j=0;j<n-1-i;j++){
             issorted = 1;
             if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                issorted = 0;
             }
        }if(issorted){
            return;
        }
    }
}

void print(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
 
int main()
{
 /* bubble sort */
    // int arr[]={56,47,28,95,32,55,40,5};
    // int n=8;

    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 bubbleSort(arr, n);
 print(arr, n);

return 0;
}